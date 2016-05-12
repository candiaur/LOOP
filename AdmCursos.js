var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var mensaje = Observable("Collapsed");

//---Cursos.ux---
var cursos = Observable();
var actividades = Observable();
var alumnos = Observable();
var habilidadesAct = Observable({"habilidad":"nueva"});
var alumnosCurso = Observable({"alumnos":"nuevo"});
var hayAct = Observable(0);
var cursoAct = Observable();
var alumnoAct = Observable();
var usadoActividad = Observable(0);
var usadoCurso = Observable(0);

//---CrearActividad.ux---
var idMaxActividad = Observable(0);
var habilidades = Observable();
var subHabs = Observable();

//---CrearAlumno.ux---
var idMaxAlumno = Observable(0);
var alumno = Observable(new Student( "","","","",""));

//---CalificarAlumno.ux--
var asistio = Observable(false);
var mostrarCalificacion = Observable("Collapsed");

var timer = Timer.create(function(){
	cargarTodo();}, 1000, true);

function cargarTodo()
{
	cargarCursos();
	cargarActividades();
	cargarHabilidades();
	cargarAlumnos();
}

function desActivarMensaje()
{
	mensaje.value = "Collapsed";
}

//----Cursos.ux----

//--Carga todos los cursos del instructor de la rama activa.
function cargarCursos()
{
	fetch('https://firstloop.firebaseio.com/cursos.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		
		if(usadoCurso == 0)
		{
			keys.forEach(function(key, index)
			{
				if (index >= cursos.length)
				{
					var nuevo = data[key];
					nuevo["llave"] = key;
					cursos.add(nuevo);
				}
			});

				usadoCurso.value = 1;
		}else{
				
			var aux = Observable();

			keys.forEach(function(key, index)
			{
				if (index >= aux.length)
				{
					var nuevo = data[key];
					nuevo["llave"] = key;
					aux.add(nuevo);
				}
			});

			cursos.replaceAll(aux);
		}
	});
}

//--Carga todas los actividades del día y curso seleccionado.
function cargarActividades()
{
	idMaxActividad.value = 0;

	fetch('https://firstloop.firebaseio.com/actividades.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		
		if(usadoActividad == 0)
		{
			keys.forEach(function(key, index)
			{
				if (index >= actividades.length)
				{
					var nuevo = data[key];
					actividades.add(nuevo);
				}

				if(nuevo.id > idMaxActividad.value)
				{
					idMaxActividad.value = nuevo.id;
				}
			});
			
			usadoActividad.value = 1;
		}else{
			
			var aux = Observable();

			keys.forEach(function(key, index)
			{
				if (index >= aux.length)
				{
					var nuevo = data[key];
					nuevo["llave"] = key;
					aux.add(nuevo);
				}

				if(nuevo.id > idMaxActividad.value)
				{
					idMaxActividad.value = nuevo.id;
				}
			});

			actividades.replaceAll(aux);
		}
	});
}

//--Carga todos los alumnos de la rama activa
function cargarAlumnos()
{
	idMaxAlumno.value = 0;

	fetch('https://firstloop.firebaseio.com/personas.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		
		keys.forEach(function(key, index)
		{
			if (index >= alumnos.length)
			{
				var nuevo = data[key];
				nuevo["nombres"] = nuevo.nombre + " " + nuevo.apellido;
				nuevo["activo"] = false;
				alumnos.add(nuevo);

				if(nuevo.id > idMaxAlumno.value)
				{
					idMaxAlumno.value = nuevo.id;
				}
			}
		});
	});
}

function selectCurso(arg)
{
	cursos.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			cursoAct = e;
		}
	});

	hayAct.value = 0;
	
	getHabxCursos();
	getAlumxCursos();
}

//-- Carga todas las habilidades del curso y día seleccionado
function getHabxCursos()
{
	var aux = Observable();

	actividades.forEach(function(e)
	{
		if(e.curso == cursoAct.id)
		{
			e.habilidades.forEach(function(x)
			{
				aux.add(x);
				hayAct.value = e.id;
			});
		}
	});

	habilidadesAct.replaceAll(aux);
}

//-- Carga todos los alumnos del curso seleccionado
function getAlumxCursos()
{
	var aux = Observable();

	alumnos.forEach(function(e)
	{
		if (cursoAct.alumnos != null)
		{
			cursoAct.alumnos.forEach(function(x)
			{
				if(e.id == x.alumno)
				{
					aux.add(e);
				}
			});
		}
	});

	alumnosCurso.replaceAll(aux);
}

function desActivarAlumnos()
{
	var aux = Observable();

	alumnos.forEach(function(e)
	{
		e.activo = false;
		aux.add(e);
	});

	alumnos.replaceAll(aux);
}

function removeItem(sender)
{
	cursos.remove(sender.data);
}

function selectAlumno(arg)
{
	alumnos.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			alumnoAct.value = e;
		}
	});
}


//----CrearActividad.ux----

//-- Carga todas las habilidades por default
function cargarHabilidades()
{
	cargarSubHabs();

	fetch('https://firstloop.firebaseio.com/habilidades.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		
		keys.forEach(function(key, index)
		{
			if (index >= habilidades.length)
			{
				var nuevo = data[key];

				nuevo["subHabsId"] = Observable();

				subHabs.forEach(function(e)
				{
					if (e.habilidad == nuevo.id)
					{
						e["activo"] = false;
						nuevo["subHabsId"].add(e);
					}
				});
				
				nuevo["activo"] = false;

				habilidades.add(nuevo);
			}
		});
	});
}

//-- Carga todas las subHabilidades por default
function cargarSubHabs()
{
	fetch('https://firstloop.firebaseio.com/subHabilidades.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		
		keys.forEach(function(key, index)
		{
			if (index >= subHabs.length)
			{
				var nuevo = data[key];
				subHabs.add(nuevo);
			}
		});
	});
}

function selectAll(arg)
{
	var aux = Observable();

	habilidades.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			if (e.activo == true)
			{
				e.activo = false;

				e.subHabsId.forEach(function(x)
				{
					x.activo = false;
				});
			}else{

				e.activo = true;

				e.subHabsId.forEach(function(x)
				{
					x.activo = true;
				});
			}
		}
		aux.add(e);
	});

	habilidades.replaceAll(aux);
}

function selectSubHab(arg)
{
	var aux = Observable();

	habilidades.forEach(function(e)
	{
		if(e.id == arg.data.habilidad)
		{
			var alguno = false;
			
			e.subHabsId.forEach(function(x)
			{
				if(x.id == arg.data.id)
				{
					if(x.activo == true)
					{
						x.activo = false;
					}else{
						x.activo = true;
						alguno = true;
					}
				}else
				{
					if(x.activo == true)
					{
						alguno = true;
					}
				}
			});

			e.activo = alguno;
		}
		aux.add(e);
	});

	habilidades.replaceAll(aux);
}

//-- Guarda la nueva actividad por día y por curso
function agregarActividad()
{
	idMaxActividad.value = idMaxActividad.value + 1;

	var today = new Date().toISOString().slice(0, 10);
	var aux = "{\"id\":" + idMaxActividad.value + ",";
	aux = "{\"curso\":" + cursoAct.id + ",";
	aux = aux + "\"fecha\":\"" + today + "\",";
	aux = aux + "\"habilidades\":[";

	var inicio = 0;

	habilidades.forEach(function(e)
	{
		var inicioSub = 0;

		if(e.activo == true)
		{
			if(inicio > 0)
			{
				aux = aux + ","
			}else{
				inicio ++ ;
			}

			aux = aux + "{\"habilidad\":\"" + e.habilidad + "\",";
			aux = aux + "\"id\":" + e.id + ",";
			aux = aux + "\"subHabs\":[";

			e.subHabsId.forEach(function(x)
			{
				if(x.activo == true)
				{
					if(inicioSub > 0)
					{
						aux = aux + ","
					}else{
						inicioSub ++ ;
					}

					aux = aux + "{\"subHab\":\"" + x.subHab + "\",";
					aux = aux + "\"id\":" + x.id + "}";
				}
			});

			aux = aux + "]}";
		}
	});

	aux = aux + "]}";

	if(hayAct.value == 0)
	{
		fetch('https://firstloop.firebaseio.com/actividades.json', {
			method: 'POST',
			headers: { "Content-type": "application/json"},
			body: aux
		});
		
	}else{
		var llave = Observable();
		
		actividades.forEach(function(e)
		{
			if(e.curso == cursoAct.id)
			{
				llave.value = e.llave;
			}
		});

		fetch('https://firstloop.firebaseio.com/actividades/' + llave.value + '.json', {
			method: 'PUT',
			headers: { "Content-type": "application/json"},
			body: aux
		});
	}

	mensaje.value = "Visible";
	cargarActividades();

	timer = Timer.create(function(){
	getHabxCursos();}, 1000, true);
}

//----CrearAlumno.ux----

function Student(nombre, apellido, correo, cel, imagen)
{
	this.nombre = nombre;
	this.apellido = apellido;
	this.correo = correo;
	this.cel = cel;
	this.imagen = imagen;
}

//-- Guarda un nuevo Alumno de 0(aún no se va a usar)
function agregarAlumnoNuevo()
{
	idMaxAlumno.value = idMaxAlumno.value + 1;

	var aux = "{\"id\":" + idMaxAlumno.value + ",";
	aux = aux + "\"nombre\": \"" + alumno.nombre + "\",";
	aux = aux + "\"apellido\": \"" + alumno.apellido + "\",";
	aux = aux + "\"correo\": \"" + alumno.correo + "\",";
	aux = aux + "\"cel\": \"" + alumno.cel + "\",";
	aux = aux + "\"imagen\": \"" + alumno.imagen + "\",";
	aux = aux + "\"rol\": 0}";

	fetch('https://firstloop.firebaseio.com/personas.json', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: aux
	});

	mensaje.value = "Visible";
	cargarAlumnos();
}

//-- Agrega alumnos de la rama a un curso específico
function agregarAlumnoCurso()
{
	var aux = "{\"id\":" + cursoAct.id + ",";
	aux = aux + "\"curso\":\"" + cursoAct.curso + "\",";
	aux = aux + "\"instructor\":\"" + cursoAct.instructor + "\",";
	aux = aux + "\"rama\":\"" + cursoAct.rama + "\",";
	aux = aux + "\"alumnos\":[";

	var inicio = 0;

	alumnos.forEach(function(e)
	{
		if(e.activo == true)
		{
			if(inicio > 0)
			{
				aux = aux + ","
			}else{
				inicio ++ ;
			}

			aux = aux + "{\"alumno\":" + e.id + "}";
		}
	});

	aux = aux + "]}";


	fetch('https://firstloop.firebaseio.com/cursos/' + cursoAct.llave + '.json', {
		method: 'PUT',
		headers: { "Content-type": "application/json"},
		body: aux
	});

	mensaje.value = "Visible";

	var id = cursoAct.id;

	cargarCursos();

	timer = Timer.create(function(){
	 actualizarCursoAct; getAlumxCursos();}, 1000, true);	
}

function selectNewAlumno(arg)
{
	var aux = Observable();

	alumnos.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			if(e.activo == true)
			{
				e.activo = false;
			}else
			{
				e.activo = true;
			}
		}

		aux.add(e);
	});

	alumnos.replaceAll(aux);
}

function actualizarCursoAct()
{
	cursos.forEach(function(e)
	{
		if(e.id == cursoAct.id)
		{
			cursoAct = e;
		}
	});
}

//---CalificarAkumno.ux---
function resetHabxAlumno()
{
	var aux = Observable();

	actividades.forEach(function(e)
	{
		if(e.curso == cursoAct.id)
		{
			e.habilidades.forEach(function(x)
			{
				x.subHabs.forEach(function(y)
				{
					y["n"] = false;
					y["m"] = false;
					y["l"] = false;
				});

				aux.add(x);
			});
		}
	});

	habilidadesAct.replaceAll(aux);

	asistio.value = false;
	mostrarCalificacion.value = "Collapsed";
}

function selectN(arg)
{
	var aux = Observable();
	
	habilidadesAct.forEach(function(e)
	{
		e.subHabs.forEach(function(x)
		{
			if(x.id == arg.data.id)
			{
				x.m = false;
				x.l = false;
				
				if(x.n == false)
				{
					x.n = true;
				}else{
					x.n = false;
				}	
			}
		});

		aux.add(e);
	});

	habilidadesAct.replaceAll(aux);
}

function selectM(arg)
{
	var aux = Observable();
	
	habilidadesAct.forEach(function(e)
	{
		e.subHabs.forEach(function(x)
		{
			if(x.id == arg.data.id)
			{
				x.n = false;
				x.l = false;
				
				if(x.m == false)
				{
					x.m = true;
				}else{
					x.m = false;
				}	
			}
		});

		aux.add(e);
	});

	habilidadesAct.replaceAll(aux);
}

function selectL(arg)
{
	var aux = Observable();
	
	habilidadesAct.forEach(function(e)
	{
		e.subHabs.forEach(function(x)
		{
			if(x.id == arg.data.id)
			{
				x.m = false;
				x.n = false;
				
				if(x.l == false)
				{
					x.l = true;
				}else{
					x.l = false;
				}	
			}
		});

		aux.add(e);
	});

	habilidadesAct.replaceAll(aux);
}

function marcaAsistencia()
{
	if(asistio.value == true)
	{
		mostrarCalificacion.value = "Visible";
	}else{
		mostrarCalificacion.value = "Collapsed";
	}
}

//-- Guarda las notas del día del estudiante seleccionado
function agregarCalificaciones()
{
	var aux = "{\"actividad\":" + hayAct.value + ",";
	aux = aux + "\"alumno\":" + alumnoAct.value.id + ",";

	if(asistio == false)
	{
		aux = aux + "\"asistencia\": 1 }";
	}else{
		
		aux = aux + "\"asistencia\": 0 ,";
		aux = aux + "\"habilidades\":[";

		var inicio = 0;

		habilidadesAct.forEach(function(e)
		{
			var inicioSub = 0;

			if(inicio > 0)
			{
				aux = aux + ","
			}else{
				inicio ++ ;
			}

			aux = aux + "{\"habilidad\":" + e.id + ",";
			aux = aux + "\"subHabs\":[";

			e.subHabs.forEach(function(x)
			{
				if(inicioSub > 0)
				{
					aux = aux + ","
				}else{
					inicioSub ++ ;
				}

				aux = aux + "{\"id\":" + x.id + ",";

				if(x.l == true)
				{
					aux = aux + "\"nota\": \"L\"}";
				}else{
					if(x.m == true)
					{
						aux = aux + "\"nota\": \"M\"}";
					}else{
						aux = aux + "\"nota\": \"N\"}";
					}
				}
			});

			aux = aux + "]}";
		});

		aux = aux + "]}";
	}
	
	fetch('https://firstloop.firebaseio.com/calificaciones.json', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: aux
	});

	mensaje.value = "Visible";
}


module.exports = {
	mensaje: mensaje,
	desActivarMensaje: desActivarMensaje,

//---Cursos.ux---
	cursos: cursos,
	habilidadesAct: habilidadesAct,
	removeItem: removeItem,
	selectCurso: selectCurso,
	selectAlumno: selectAlumno,
	cursoAct: cursoAct,
	alumnoAct: alumnoAct,
	alumnosCurso: alumnosCurso,
	desActivarAlumnos: desActivarAlumnos,

//---CreaActividad.ux---
	habilidades: habilidades,
	selectAll: selectAll,
	selectSubHab: selectSubHab,
	agregarActividad: agregarActividad,

//---CrearAlumno.ux---
	alumnos: alumnos,
	alumno: alumno,
	agregarAlumnoCurso: agregarAlumnoCurso,
	selectNewAlumno: selectNewAlumno,

//---CalificarAkumno.ux---
	resetHabxAlumno: resetHabxAlumno,
	selectN: selectN,
	selectM: selectM,
	selectL: selectL,
	asistio: asistio,
	mostrarCalificacion: mostrarCalificacion,
	marcaAsistencia: marcaAsistencia,
	agregarCalificaciones: agregarCalificaciones
};