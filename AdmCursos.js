var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var mensaje = Observable("Collapsed");
var personaActual = Observable(1);

//---Cursos.ux---
var ramas = Observable();
var cursos = Observable({"cursos":"nuevos"});
var actividades = Observable({"actividades":"nuevas"});
var alumnos = Observable();
var habilidadesAct = Observable({"habilidad":"nueva"});
var alumnosCurso = Observable({"alumnos":"nuevo"});
var hayAct = Observable({"id":0,"llave":" "});
var ramaAct = Observable();
var cursoAct = Observable();
var alumnoAct = Observable();
var instructores = Observable();

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
var fechasAct = [];
var indexFechasAct = Observable(0);
var calificaciones = Observable({"calificaciones": "nuevas"});
var calificacionAct = Observable();

//---Calendar.ux---
var dias = Observable({"dias":""});
var nombreDia = Observable();
var dia = Observable();
var mes = Observable();
var anio = Observable();
var today = new Date();

var timer = Timer.create(function(){
	cargarTodo();}, 1000, true);

cargarCursos();
cargarAlumnos();
cargarActividades();

function cargarTodo()
{
	getDias();
	cargarRamas();
	cargarHabilidades();
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
			console.log("CargarRamas: Something went wrong :(");
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
			console.log("CargarCursos: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
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
			console.log("CargarActividades: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
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
			console.log("CargarAlumnos: Something went wrong :(");
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

	cargarCursos();
	
	timer = Timer.create(function(){
	getCursosxRama();}, 1000, true);
}

//-- Carga todos los cursos de la rama seleccionada y del instructor.
function getCursosxRama()
{
	var aux = Observable();

	cursos.forEach(function(e)
	{
		if((e.rama == ramaAct.value.id) && (personaActual.value == e.instructor))
		{
			aux.add(e);
		}
	});

	cursos.replaceAll(aux);
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

	cargarAlumnos();
	cargarActividades();

	setTimeout(function(){ getAlumxCursos(); 
		getFechasconActividades(); getHabxCursoxDia();}, 1000);

	getFecha();
}

//-- Carga todas las habilidades del curso y día seleccionado
function getHabxCursoxDia()
{
	var aux = Observable();
	hayAct.id = 0;

	actividades.forEach(function(e)
	{
		if((e.curso == cursoAct.value.id) && (e.fecha == today.toISOString().slice(0, 10)))
		{
			e.habilidades.forEach(function(x)
			{
				x.subHabs.forEach(function(z)
				{
					z["habilidad"] = x.habilidad;
				});

				aux.add(x);
				hayAct.id = e.id;
				hayAct.llave = e.llave;
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

function marcarAlumnosxCurso()
{
	var aux = Observable();

	alumnos.forEach(function(e)
	{
		var encontrado = false;

		if (cursoAct.value.alumnos != null)
		{
			cursoAct.value.alumnos.forEach(function(x)
			{
				if(e.id == x.alumno)
				{
					e.activo = true;
					encontrado = true;
				}
			});
		}

		if (!encontrado)
		{
			e.activo = false;
		}

		aux.add(e);
	});

	alumnos.replaceAll(aux);
}

function removeItem(sender)
{
	// var aux = Observable();
	
	// habilidadesAct.forEach(function(e)
	// {
	// 	var indexSubHab = 0;

	// 	e.subHabs.forEach(function(x)
	// 	{
	// 		if(x.id == sender.data.id)
	// 		{
	// 			delete x;
	// 		}
	// 	});

	// 	aux.add(e);
	// });

	// habilidadesAct.replaceAll(aux);
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

	cargarCalificaciones();
	setDiaconActividad();
}

function marcarActividadesxDia()
{
	var aux = Observable();

	habilidades.forEach(function(e)
	{
		e.activo = false;
		var encontrado = false;

		habilidadesAct.forEach(function(x)
		{
			if(x.id == e.id)
			{
				e.activo = true;

				e.subHabsId.forEach(function(y)
				{
					x.subHabs.forEach(function(z)
					{
						if(z.id == y.id)
						{
							y.activo = true;
						}else
						{
							y.activo = false;
						}
					});
				});

				encontrado = true;
			}
		});

		if (!encontrado)
		{
			e.activo = false;

			e.subHabsId.forEach(function(x)
			{
				x.activo = false;
			});
		}

		aux.add(e);
	});

	habilidades.replaceAll(aux);
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
			console.log("CargarHabilidades: Something went wrong :(");
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
			console.log("CargarSubHabs: Something went wrong :(");
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

	if(hayAct.id == 0)
	{
		idMaxActividad.value = idMaxActividad.value + 1;

		aux = "{\"id\":" + idMaxActividad.value + ",";
	}else{
		aux = "{\"id\":" + hayAct.id + ",";
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
				inicio ++;
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
						inicioSub ++;
					}

					aux = aux + "{\"subHab\":\"" + x.subHab + "\",";
					aux = aux + "\"id\":" + x.id + "}";
				}
			});

			aux = aux + "]}";
		}
	});

	aux = aux + "]}";

	if(hayAct.id == 0)
	{
		fetch('https://firstloop.firebaseio.com/actividades.json', {
			method: 'POST',
			headers: { "Content-type": "application/json"},
			body: aux
		});
		
	}else{

		fetch('https://firstloop.firebaseio.com/actividades/' + hayAct.llave + '.json', {
			method: 'PUT',
			headers: { "Content-type": "application/json"},
			body: aux
		});
	}

	mensaje.value = "Visible";
	
	cargarActividades();

	getFechasconActividades();
	getHabxCursoxDia();
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
function agregarAlumnosCurso()
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
				inicio ++;
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
	 actualizarCursoAct();}, 1000, true);	
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

//---CalificarAlumno.ux---
//--Carga todas las calificaciones de un alumno del curso.
function cargarCalificaciones()
{
	fetch('https://firstloop.firebaseio.com/calificaciones.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("CargarCalificaciones: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
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

		calificaciones.replaceAll(aux);
	});
}

//-- Cargar lista de fechas con actividades
function getFechasconActividades()
{	
	fechasAct = [];

	actividades.forEach(function(e)
	{
		if(e.curso == cursoAct.value.id)
		{
			fechasAct.push(e.fecha + "T11:51:00");
		}
	});

	fechasAct.sort();
}

function setDiaconActividad()
{
	var encontrado = false;
	var backupFecha = "";
	var aux = 0;
	indexFechasAct = 0;
	
	fechasAct.forEach(function(e)
	{
		if(encontrado == false)
		{
			if(e == (today.toISOString().slice(0, 10) + "T11:51:00"))
			{
				encontrado = true;
			}else{
				if(e > (today.toISOString().slice(0, 10) + "T11:51:00"))
				{
					today = new Date(e);
					encontrado = true;
				}else
				{
					aux = indexFechasAct;
					backupFecha = e;
				}
			}
			
			indexFechasAct ++;
		}
	});

	if (!encontrado)
	{
		today = new Date(backupFecha);
		indexFechasAct = aux;
	}

	getHabxCursoxDia();
	getFecha();
	setTimeout(function(){ resetHabxAlumno();}, 1000);
}

function nextFechaconActividad()
{
	if(indexFechasAct == fechasAct.length)
	{
		today = new Date(fechasAct[0]);
		indexFechasAct = 1;
	}else{
		today = new Date(fechasAct[indexFechasAct]);
		indexFechasAct ++;
	}

	resetHabxAlumno();
	getFecha();
}

function lastFechaconActividad()
{
	if(indexFechasAct == 1)
	{
		today = new Date(fechasAct[fechasAct.length - 1]);
		indexFechasAct = fechasAct.length;
	}else{
		indexFechasAct--;
		today = new Date(fechasAct[indexFechasAct - 1]);
	}

	resetHabxAlumno();
	getFecha();
}

function resetHabxAlumno()
{
	var aux = Observable();
	var actvActualAux = Observable();
	var encontrado = false;
	asistio.value = false;
	calificacionAct.value = "";
	
	actividades.forEach(function(e)
	{
		if(e.id == hayAct.id)
		{
			actvActualAux = e;
		}
	});

	calificaciones.forEach(function(a)
	{
		if((hayAct.id == a.actividad) && (alumnoAct.value.id == a.alumno))
		{
			calificacionAct.value = a.llave;
			
			if(a.asistencia == 1)
			{
				asistio.value = true;

				a.habilidades.forEach(function(x)
				{
					actvActualAux.habilidades.forEach(function(y)
					{
						if (y.id == x.habilidad)
						{
							x.subHabs.forEach(function(z)
							{
								y.subHabs.forEach(function(d)
								{
									if (z.id == d.id)
									{
										d["noLogrado"] = false;
										d["medio"] = false;
										d["logrado"] = false;
										
										if(z.nota == 3)
										{
											d.logrado = true;

										}else{
											if(z.nota == 2)
											{
												d.medio = true;
											}else{
												d.noLogrado = true;
											}
										}
									}
								});
							});
						}
						
						aux.add(x);
					});
				});

				encontrado = true;
			}
		}
	});

	if (!encontrado)
	{
		actvActualAux.habilidades.forEach(function(x)
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

	habilidadesAct.replaceAll(aux);

	if(asistio.value == true)
	{
		mostrarCalificacion.value = "Visible";
	}else{
		mostrarCalificacion.value = "Collapsed";
	}
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
	var aux = "{\"actividad\":" + hayAct.id + ",";
	aux = aux + "\"alumno\":" + alumnoAct.value.id + ",";

	if(asistio == false)
	{
		aux = aux + "\"asistencia\": 0 }";
	}else{
		
		aux = aux + "\"asistencia\": 1 ,";
		aux = aux + "\"habilidades\":[";

		var inicio = 0;

		habilidadesAct.forEach(function(e)
		{
			var inicioSub = 0;

			if(inicio > 0)
			{
				aux = aux + ","
			}else{
				inicio ++;
			}

			aux = aux + "{\"habilidad\":" + e.id + ",";
			aux = aux + "\"subHabs\":[";

			e.subHabs.forEach(function(x)
			{
				if(inicioSub > 0)
				{
					aux = aux + ","
				}else{
					inicioSub ++;
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

	if (calificacionAct.value == "")
	{
		fetch('https://firstloop.firebaseio.com/calificaciones.json', {
			method: 'POST',
			headers: { "Content-type": "application/json"},
			body: aux
		});
	}else{
		fetch('https://firstloop.firebaseio.com/calificaciones/' + calificacionAct.value + '.json', {
			method: 'PUT',
			headers: { "Content-type": "application/json"},
			body: aux
		});
	}
	
	mensaje.value = "Visible";
}

//---Calendar.ux---
function nextMonth()
{
	today.setMonth(today.getMonth() + 1);
	
	getFecha();
}

function lastMonth()
{
	today.setMonth(today.getMonth() - 1);
	
	getFecha();
}

function nextDay()
{
	today.setDate(today.getDate() + 1);
	
	getFecha();
}

function lastDay()
{
	today.setDate(today.getDate() - 1);
	
	getFecha();
}

function setDay(arg)
{
	if(arg.data.dia != " ")
	{
		today.setDate(arg.data.dia);
	}

	getFecha();

	setTimeout(function(){ getHabxCursoxDia();}, 1000);
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
		aux.add({"dia": " ", "color": "#FFF", "textColor": "#000", "valido": false, "punto": "#FFF"});
	}

	var auxDia = new Date(today.getFullYear(), today.getMonth() + 1, 0);

	for (var i = 1; i <= lastDay.getDate(); i++)
	{
		var punto = "#FFF";
		auxDia.setDate(i);
		
		fechasAct.forEach(function(e)
		{
			var auxAct = new Date(e);
			
			if(auxDia.toISOString().slice(0, 10) == auxAct.toISOString().slice(0, 10))
			{
				punto = "#D8D8D8";
			}
		});

		if(i == today.getDate())
		{
			aux.add({"dia": i, "color": "#00D9C5", "textColor": "#FFF", "valido": true, "punto": punto});
		}else{
			aux.add({"dia": i,"color": "#FFF", "textColor": "#000", "valido": true, "punto": punto});
		}
	}

	dias.replaceAll(aux);
}

function getFecha()
{
	var monthNames = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

	dia.value = today.getDate();
	mes.value = monthNames[today.getMonth()];
	anio.value = " / " + today.getFullYear();
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
	setDiaconActividad: setDiaconActividad,
	marcarAlumnosxCurso: marcarAlumnosxCurso,
	marcarActividadesxDia: marcarActividadesxDia,

//---CreaActividad.ux---
	habilidades: habilidades,
	selectAll: selectAll,
	selectSubHab: selectSubHab,
	agregarActividad: agregarActividad,

//---CrearAlumno.ux---
	alumnos: alumnos,
	alumno: alumno,
	agregarAlumnosCurso: agregarAlumnosCurso,
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
	nextFechaconActividad: nextFechaconActividad,
	lastFechaconActividad: lastFechaconActividad,

//---Calendar.ux---
	dias: dias,
	dia: dia,
	mes: mes,
	anio: anio,
	nextMonth: nextMonth,
	lastMonth: lastMonth,
	nextDay: nextDay,
	lastDay: lastDay,
	setDay: setDay,
	getFecha: getFecha
};