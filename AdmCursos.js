var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var mensaje = Observable("Collapsed");

//---Cursos.ux---
var ramas = Observable();
var cursos = Observable();
var actividades = Observable();
var alumnos = Observable();
var habilidadesAct = Observable({"habilidad":"nueva"});
var alumnosCurso = Observable({"alumnos":"nuevo"});
var hayAct = Observable(0);
var ramaAct = Observable();
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

//---Calendar.ux---
var dias = Observable({"dias":""});
var nombreDia = Observable();
var mes = Observable();
var anio = Observable();
var today = new Date();

var timer = Timer.create(function(){
	cargarTodo();}, 1000, true);

function cargarTodo()
{
	cargarCursos();
	cargarActividades();
	cargarHabilidades();
	cargarAlumnos();
	getDias();
	cargarRamas();
}

function desActivarMensaje()
{
	mensaje.value = "Collapsed";
}

//----Cursos.ux----

//--Carga todas las ramas a las está asociado.
function cargarRamas()
{
	fetch('https://firstloop.firebaseio.com/ramas.json', {
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
			if (index >= ramas.length)
			{
				var nuevo = data[key];
				ramas.add(nuevo);
			}
		});
	});
}

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

function selectRama(arg)
{
	ramas.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			ramaAct.value = e;
		}
	});

}

function selectCurso(arg)
{
	cursos.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			cursoAct.value = e;
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
		if(e.curso == cursoAct.value.id)
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
		if (cursoAct.value.alumnos != null)
		{
			cursoAct.value.alumnos.forEach(function(x)
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
	var aux = "";

	if(hayAct.value == 0)
	{
		idMaxActividad.value = idMaxActividad.value + 1;

		aux = "{\"id\":" + idMaxActividad.value + ",";
	}else{
		aux = "{\"id\":" + hayAct.value + ",";
	}
	
	aux = aux + "\"curso\":" + cursoAct.value.id + ",";
	aux = aux + "\"fecha\":\"" + today.toISOString().slice(0, 10) + "\",";
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
			if(e.curso == cursoAct.value.id)
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
	var aux = "{\"id\":" + cursoAct.value.id + ",";
	aux = aux + "\"curso\":\"" + cursoAct.value.curso + "\",";
	aux = aux + "\"instructor\":\"" + cursoAct.value.instructor + "\",";
	aux = aux + "\"rama\":\"" + cursoAct.value.rama + "\",";
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


	fetch('https://firstloop.firebaseio.com/cursos/' + cursoAct.value.llave + '.json', {
		method: 'PUT',
		headers: { "Content-type": "application/json"},
		body: aux
	});

	mensaje.value = "Visible";

	var id = cursoAct.value.id;

	cargarCursos();

	timer = Timer.create(function(){
	 actualizarCursoAct(); getAlumxCursos();}, 1000, true);	
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
		if(e.id == cursoAct.value.id)
		{
			cursoAct.value = e;
		}
	});
}

//---CalificarAkumno.ux---
function resetHabxAlumno()
{
	var aux = Observable();

	actividades.forEach(function(e)
	{
		if(e.curso == cursoAct.value.id)
		{
			e.habilidades.forEach(function(x)
			{
				x.subHabs.forEach(function(y)
				{
					y["noLogrado"] = false;
					y["medio"] = false;
					y["logrado"] = false;
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
				x.medio = false;
				x.logrado = false;
				
				if(x.noLogrado == false)
				{
					x.noLogrado = true;
				}else{
					x.noLogrado = false;
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
				x.noLogrado = false;
				x.logrado = false;
				
				if(x.medio == false)
				{
					x.medio = true;
				}else{
					x.medio = false;
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
				x.medio = false;
				x.noLogrado = false;
				
				if(x.logrado == false)
				{
					x.logrado = true;
				}else{
					x.logrado = false;
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

				if(x.logrado == true)
				{
					aux = aux + "\"nota\": 3}";
				}else{
					if(x.medio == true)
					{
						aux = aux + "\"nota\": 2}";
					}else{
						aux = aux + "\"nota\": 1}";
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

//---Calendar.ux---
function nextMonth()
{
	if(today.getMonth() < 11)
	{
		today = new Date(today.getFullYear(), today.getMonth() + 1, 1);
	}else{
		today = new Date(today.getFullYear() + 1, 0, 1);
	}
	
	getDias();
	getFecha();
}

function lastMonth()
{
	if(today.getMonth() > 0)
	{
		today = new Date(today.getFullYear(), today.getMonth() - 1, 1);;
	}else{
		today = new Date(today.getFullYear() - 1, 11, 1);
	}
	
	getDias();
	getFecha();
}

function getDias()
{
	var aux = Observable();
	var firstDay = new Date(today.getFullYear(), today.getMonth(), 1);
	var lastDay = new Date(today.getFullYear(), today.getMonth() + 1, 0);
	var diasPasados = Observable(firstDay.getUTCDay());

	if(diasPasados.value == 0)
	{
		diasPasados.value = 7;
	}

	for (var i = 1; i < diasPasados.value; i++)
	{
		aux.add({"dia": " ","color": "#FFF","textColor": "#000"});
	}

	for (var i = 1; i <= lastDay.getDate(); i++)
	{
		if(i == today.getDate())
		{
			aux.add({"dia": i,"color": "#00D9C5","textColor": "#FFF"});
		}else{
			aux.add({"dia": i,"color": "#FFF","textColor": "#000"});
		}
	}

	dias.replaceAll(aux);
}

function getFecha()
{
	var monthNames = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

	mes.value = monthNames[today.getMonth()];
	anio.value = " / " + today.getFullYear()
}

function getFechaCompleta()
{
	mes.value = today.getDate() + " de " + mes.value;
}

function setDay(arg)
{
	if(arg.data.dia != " ")
	{
		today.setDate(arg.data.dia);
	}

	getFechaCompleta();
}


module.exports = {
	mensaje: mensaje,
	desActivarMensaje: desActivarMensaje,

//---Cursos.ux---
	ramas: ramas,
	cursos: cursos,
	habilidadesAct: habilidadesAct,
	removeItem: removeItem,
	selectRama: selectRama,
	selectCurso: selectCurso,
	selectAlumno: selectAlumno,
	ramaAct: ramaAct,
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
	agregarCalificaciones: agregarCalificaciones,

//---Calendar.ux---
	dias: dias,
	mes: mes,
	anio: anio,
	nextMonth: nextMonth,
	lastMonth: lastMonth,
	setDay: setDay,
	getFecha: getFecha
};