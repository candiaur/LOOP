var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var GlobalE = require("GlobalElem");
var personaActual = Observable();

//---Cursos.ux---
var ramas = Observable();
var curso = Observable("");
var cursos = Observable({"cursos":"nuevos"});
var actividad = Observable({"actividad":"nueva"});
var alumnos = Observable({"alumnos":"nuevos"});
var alumnosCurso = Observable({"alumnos":"nuevo"});
var ramaAct = Observable();
var cursoAct = Observable();
var alumnoAct = Observable();
var instructores = Observable({"instructor":"nuevo"});
var movCurso = Observable(new MovimientoPag("pagRamas", "Collapsed", "Visible",true));

//---CrearActividad.ux---
var habilidades = Observable();
var subHabs = Observable();

//---CrearAlumno.ux---
var idMaxAlumno = Observable(0);
var editarAlumnos = Observable("Collapsed");

//--- Datos Persona---
var nombre = Observable("");
var apellido = Observable("");
var correo = Observable("");
var cel = Observable("");
var nacimiento = Observable("");
var imagen = Observable("");


//---CalificarAlumno.ux--
var isAbleCalifica = Observable(true);
var asistio = Observable(false);
var mostrarCalificacion = Observable("Collapsed");
var fechasAct = Observable({"fecha": "nueva"});;
var indexFechasAct = Observable(0);
var calificaciones = Observable({"calificaciones": "nuevas"});
var hayCalificacion = Observable(0);
var comentario = Observable("");

//---Calendar.ux---
var dias = Observable({"dias":""});
var dia = Observable();
var mes = Observable();
var anio = Observable();
var today = new Date();

var timer = Timer.create(function(){
	 getPersona()}, 1000, true);

function getPersona()
{
	personaActual.value = GlobalE.idPerson.value; 
	
	if(personaActual.value != null)
	{
		if(GlobalE.rolPerson.value != 0)
		{
			cargarRamas();
			cargarSubHabs();
		}

		Timer.delete(timer);
	}	
}

function MovimientoPag(paginaAct, pagAnterior, flecha, isEnabled)
{
	this.paginaAct = paginaAct;
	this.pagAnterior = pagAnterior;
	this.flecha = flecha;
	this.isEnabled = isEnabled;
}

//----Cursos.ux----
//--Carga todas las ramas a las está asociado.
function cargarRamas()
{
	fetch('http://loop.inhandy.com/loop.php?cargarRamas=' + personaActual.value + 
		',' + GlobalE.instancia.value, {
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

//--Carga todos los instructores de la instancia.
function cargarInstructores()
{
	fetch('http://loop.inhandy.com/loop.php?cargarInstructores=' + GlobalE.instancia.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarInstructores: Something went wrong :(");
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
				aux.add(nuevo);
			}
		});

		instructores.replaceAll(aux);
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

	movCurso.value = new MovimientoPag("pagRamas", "Collapsed", "Visible", true);

	cargarCursos();
}

function selectInstructor(arg)
{
	movCurso.value = new MovimientoPag("pagInstructores", "Visible", "Hidden", false);

	cargarCursosxInstructor(arg.data.id);
}

//--Carga todos los cursos del instructor seleccionado.
function cargarCursosxInstructor()
{
	fetch('http://loop.inhandy.com/loop.php?cargarCursosxInstructor=' + personaActual.value 
		+ ',' + GlobalE.instancia.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarCursosxInstructor: Something went wrong :(");
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
				aux.add(nuevo);
			}
		});

		cursos.replaceAll(aux);
	});
}

//--Carga todos los cursos del instructor de la rama activa.
function cargarCursos()
{
	fetch('http://loop.inhandy.com/loop.php?cargarCursos=' + personaActual.value 
		+ ',' + ramaAct.value.id, {
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
				var contador = 0;
				var nuevo = data[key];

				nuevo.habilidades.forEach(function(e)
				{
					contador++;
				});

				nuevo["rama"] = ramaAct.value.rama;
				nuevo["habilidades"] = contador;
				aux.add(nuevo);
			}
		});

		cursos.replaceAll(aux);
	});
}

function limpiarCurso()
{
	curso.value = "";
}

function agregarCurso()
{
	var aux = "{ \"nombre\":\"" + curso.value + "\",";
	aux = aux + "\"id_rama\":" + ramaAct.value.id + ",";
	aux = aux + "\"id_instructor\":" + personaActual.value + "}";

	fetch('http://loop.inhandy.com/loop.php?crearCurso=' + aux, {
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
		cargarCursos();	
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
	
	getFecha();
	cargarActividades(0);
	getFechasconActividades();
}

//--Carga todas los actividades del día y curso seleccionado.
function cargarActividades(reset)
{
	fetch('http://loop.inhandy.com/loop.php?cargarActividades=' + cursoAct.value.id 
		+ ',' + today.toISOString().slice(0, 10) , {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarActividades: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		var aux = Observable();
		var contador = 0;
		
		keys.forEach(function(key, index)
		{
			if (index >= aux.length)
			{
				var nuevo = data[key];

				nuevo.habilidades.forEach(function(e)
				{
					e.subHabs.forEach(function(x)
					{
						x["habilidad"] = e.habilidad;
						contador ++;
					});
				});

				aux.add(nuevo);
			}
		});

		if(contador == 0)
		{
			aux.add({"id":0,"habilidades":[{"":""}]});
		}

		actividad.replaceAll(aux);
		marcarActividadesxDia();

		if(reset == 1)
		{
			cargarCalificaciones();
		}
	});
}

function eliminarSubHabActividad(sender)
{
	fetch('http://loop.inhandy.com/loop.php?eliminarSubHabActividad=' + actividad.getAt(0).id 
		+ ',' + sender.data.id, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("eliminarSubHabActividad: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		cargarActividades(0);
	});
}


//----CrearActividad.ux----
//-- Carga todas las habilidades por default
function cargarHabilidades()
{
	fetch('http://loop.inhandy.com/loop.php?cargarHabilidades', {
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
	fetch('http://loop.inhandy.com/loop.php?cargarSubHabs', {
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

		cargarHabilidades();
	});
}

function marcarActividadesxDia()
{
	var aux = Observable();

	habilidades.forEach(function(e)
	{
		e.activo = false;

		e.subHabsId.forEach(function(x)
		{
			x.activo = false;
		});

		actividad.getAt(0).habilidades.forEach(function(x)
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
						}
					});
				});
			}
		});

		aux.add(e);
	});

	habilidades.replaceAll(aux);
}

//-- Guarda la nueva actividad por día y por curso
function agregarActividad()
{
	var aux = "{";

	if(actividad.getAt(0).id != 0)
	{
		aux = aux + "\"id\":" + actividad.getAt(0).id + ",";
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
				inicio++;
			}

			aux = aux + "{\"habilidad\":" + e.id + ",";
			aux = aux + "\"subHabs\":[";

			e.subHabsId.forEach(function(x)
			{
				if(x.activo == true)
				{
					if(inicioSub > 0)
					{
						aux = aux + ","
					}else{
						inicioSub++;
					}

					aux = aux + "{\"subHab\":" + x.id + "}";
				}
			});

			aux = aux + "]}";
		}
	});

	aux = aux + "]}";

	if(actividad.getAt(0).id == 0)
	{
		fetch('http://loop.inhandy.com/loop.php?agregarActividad=' + aux, {
			method: 'GET',
			cache: 'default',
			headers: { "Content-type": "application/json"}
		})
		.then(function(result)
		{
			if (result.status !== 200)
			{
				console.log("agregarActividad: Something went wrong :(");
				return;
			}
			return result.json();
		})
		.then(function(data)
		{
			if(data.id_actividad != -1)
			{
				getFechasconActividades();
				cargarActividades(0);
			}
		});
		
	}else{
		fetch('http://loop.inhandy.com/loop.php?actualizarActividad=' + aux, {
			method: 'GET',
			cache: 'default',
			headers: { "Content-type": "application/json"}
		})
		.then(function(result)
		{
			if (result.status !== 200)
			{
				console.log("actualizarActividad: Something went wrong :(");
				return;
			}
			return result.json();
		})
		.then(function(data)
		{
			if(data.id_actividad != -1)
			{
				getFechasconActividades();
				cargarActividades(0);
			}
		});
	}
}

//-- Carga todos los alumnos del curso seleccionado
function getAlumxCursos()
{
	fetch('http://loop.inhandy.com/loop.php?getAlumxCursos=' + cursoAct.value.id, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("getAlumxCursos: Something went wrong :(");
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
				aux.add(nuevo);
			}
		});

		alumnosCurso.replaceAll(aux);
		editarAlumnos.value = "Collapsed";
		isAbleCalifica.value = true;
	});
}

function selectAlumno(arg)
{
	alumnosCurso.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			alumnoAct.value = e;
		}
	});

	editarAlumnos.value = "Collapsed";
	setDiaconActividad();
}

function mostrarEdicionAlumnos()
{
	if(editarAlumnos.value == "Visible")
	{
		isAbleCalifica.value = true;
		editarAlumnos.value = "Collapsed";
	}else{
		isAbleCalifica.value = false;
		editarAlumnos.value = "Visible";
	}
}

function eliminarAlumnoCurso(arg)
{

	fetch('http://loop.inhandy.com/loop.php?eliminarAlumnosCurso=' + cursoAct.value.id
		+ ',' + arg.data.id, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("eliminarAlumno: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		getAlumxCursos();
	});
}

function limpiarDatos()
{
	nombre.value = "";
	apellido.value = "";
	correo.value = "";
	cel.value = "";
	nacimiento.value = "";
	imagen.value = "";
}

//---CalificarAlumno.ux---
function setDiaconActividad()
{
	var encontrado = false;
	var backupFecha = "";
	var aux = 0;
	indexFechasAct.value = -1;
	
	fechasAct.forEach(function(e)
	{
		if(encontrado == false)
		{
			indexFechasAct.value++;

			if(e.fecha == (today.toISOString().slice(0, 10) + "T11:51:00"))
			{
				encontrado = true;
			}else{
				if(e.fecha > (today.toISOString().slice(0, 10) + "T11:51:00"))
				{
					today = new Date(e.fecha);
					encontrado = true;
				}else
				{
					aux = indexFechasAct.value;
					backupFecha = e.fecha;
				}
			}
		}
	});

	if (!encontrado)
	{
		if(backupFecha != "")
		{
			today = new Date(backupFecha);
		}

		indexFechasAct.value = aux;
	}

	cargarActividades(1);
	getFecha();
}

//--Carga las calificaciones de un alumno por actividad(curso y día).
function cargarCalificaciones()
{
	fetch('http://loop.inhandy.com/loop.php?cargarCalificaciones=' + actividad.getAt(0).id 
		+ ',' + alumnoAct.value.id, {
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
		var aux = Observable();
		aux.add(data);

		calificaciones.replaceAll(aux);
		resetHabxAlumno();
	});
}

function resetHabxAlumno()
{
	var aux = Observable();
	asistio.value = false;
	comentario.value = "";
	hayCalificacion.value = 0;

	actividad.forEach(function(e)
	{
		e.habilidades.forEach(function(x)
		{
			x.subHabs.forEach(function(y)
			{
				y["noLogrado"] = false;
				y["medio"] = false;
				y["logrado"] = false;
			});
		});
	});

	actividad.forEach(function(a)
	{
		calificaciones.forEach(function(b)
		{
			if(b.asistencia == 1)
			{
				asistio.value = true;
				comentario.value = b.comentario;

				a.habilidades.forEach(function(y)
				{
					b.habilidades.forEach(function(x)
					{
						if (y.id == x.id)
						{
							x.subHabs.forEach(function(z)
							{
								y.subHabs.forEach(function(d)
								{
									if (z.id == d.id)
									{
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
					});
				});
			}

			hayCalificacion.value ++;
		});

		aux.add(a);
	});

	actividad.replaceAll(aux);

	if(asistio.value == true)
	{
		mostrarCalificacion.value = "Visible";
	}else{
		mostrarCalificacion.value = "Collapsed";
	}
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
	var aux = "{\"actividad\":" + actividad.getAt(0).id + ",";
	aux = aux + "\"alumno\":" + alumnoAct.value.id + ",";

	if(asistio == false)
	{
		aux = aux + "\"asistencia\": 0 }";
	}else{
		
		aux = aux + "\"asistencia\": 1 ,";
		aux = aux + "\"comentario\":\"" + comentario.value + "\",";
		aux = aux + "\"habilidades\":[";

		var inicio = 0;

		actividad.getAt(0).habilidades.forEach(function(e)
		{
			var inicioSub = 0;

			if(inicio > 0)
			{
				aux = aux + ","
			}else{
				inicio++;
			}

			aux = aux + "{\"habilidad\":" + e.id + ",";
			aux = aux + "\"subHabs\":[";

			e.subHabs.forEach(function(x)
			{
				if(inicioSub > 0)
				{
					aux = aux + ","
				}else{
					inicioSub++;
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

	if (hayCalificacion.value == 0)
	{
		fetch('http://loop.inhandy.com/loop.php?agregarCalificaciones=' + aux, {
			method: 'GET',
			cache: 'default',
			headers: { "Content-type": "application/json"}
		})
		.then(function(result)
		{
			if (result.status !== 200)
			{
				console.log("agregarCalificaciones: Something went wrong :(");
				return;
			}
			return result.json();
		});
	}else{
		fetch('http://loop.inhandy.com/loop.php?actualizarCalificaciones=' + aux, {
			method: 'GET',
			cache: 'default',
			headers: { "Content-type": "application/json"}
		})
		.then(function(result)
		{
			if (result.status !== 200)
			{
				console.log("actualizarCalificaciones: Something went wrong :(");
				return;
			}
			return result.json();
		});
	}
}

//----CrearAlumno.ux----
//-- Guarda un nuevo Alumno de 0(aún no se va a usar)
function agregarAlumnoNuevo(arg)
{
	//var aux = "\"id\":" + idMaxAlumno.value + ",";
	var aux = "{\"nombre\": \"" + nombre.value + "\",";
	aux = aux + "\"apellido\": \"" + apellido.value + "\",";
	aux = aux + "\"cel\": \"" + cel.value + "\",";
	aux = aux + "\"correo\": \"" + correo.value + "\",";
	aux = aux + "\"imagen\": \"" + imagen.value + "\",";
	aux = aux + "\"nacimiento\": \"" + nacimiento.value + "\",";
	aux = aux + "\"rol\": 0}";

	fetch('http://loop.inhandy.com/loop.php?crearPersona=' + aux, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("agregarAlumnoNuevo: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var auxAlumnos = Observable();

		auxAlumnos.add({"id":data.id_persona,"activo":true});
		alumnos.replaceAll(auxAlumnos);
		agregarAlumnosCurso();
	});
}

//-- Agrega alumnos de la rama a un curso específico
function agregarAlumnosCurso()
{
	var aux = "{\"id\":" + cursoAct.value.id + ",";
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
				inicio++;
			}

			aux = aux + "{\"alumno\":" + e.id + "}";
		}
	});

	aux = aux + "]}";

	console.log(" Link Agrega Curso: " + 'http://loop.inhandy.com/loop.php?agregarAlumnosCurso=' + aux);
	fetch('http://loop.inhandy.com/loop.php?agregarAlumnosCurso=' + aux, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("agregarAlumnosCurso: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		getAlumxCursos();
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



//-------- FUNCION CHECKBOX------
function selectHab(arg)
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

function selectN(arg)
{
	var aux = Observable();
	
	actividad.forEach(function(e)
	{
		e.habilidades.forEach(function(x)
		{
			x.subHabs.forEach(function(y)
			{
				if(y.id == arg.data.id)
				{
					y.medio = false;
					y.logrado = false;
					
					if(y.noLogrado == false)
					{
						y.noLogrado = true;
					}else{
						y.noLogrado = false;
					}	
				}
			});
		});
		aux.add(e);
	})

	actividad.replaceAll(aux);
}

function selectM(arg)
{
	var aux = Observable();
	
	actividad.forEach(function(e)
	{
		e.habilidades.forEach(function(x)
		{
			x.subHabs.forEach(function(y)
			{
				if(y.id == arg.data.id)
				{
					y.noLogrado = false;
					y.logrado = false;
					
					if(y.medio == false)
					{
						y.medio = true;
					}else{
						y.medio = false;
					}	
				}
			});
		});

		aux.add(e);
	});

	actividad.replaceAll(aux);
}

function selectL(arg)
{
	var aux = Observable();
	
	actividad.forEach(function(e)
	{
		e.habilidades.forEach(function(x)
		{
			x.subHabs.forEach(function(y)
			{
				if(y.id == arg.data.id)
				{
					y.medio = false;
					y.noLogrado = false;
					
					if(y.logrado == false)
					{
						y.logrado = true;
					}else{
						y.logrado = false;
					}	
				}
			});
		});

		aux.add(e);
	});

	actividad.replaceAll(aux);
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

//---------FECHAS------
//-- Cargar lista de fechas con actividades
function getFechasconActividades()
{
	fetch('http://loop.inhandy.com/loop.php?getFechasconActividades=' + cursoAct.value.id, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("getFechasconActividades: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		var auxFechas = [];

		keys.forEach(function(key, index)
		{
			if (index >= auxFechas.length)
			{
				var nuevo = data[key];
				var auxFecha = nuevo.fecha + "T11:51:00";
				auxFechas.push({"fecha":auxFecha,"id":nuevo.id});
			}
		});

		auxFechas.sort(function(a, b)
			{ return a.fecha.localeCompare(b.fecha); });

		fechasAct.replaceAll(auxFechas);
	});
}

function nextFechaconActividad()
{
	if(indexFechasAct.value == (fechasAct.length - 1))
	{
		indexFechasAct.value = 0;
	}else{	
		indexFechasAct.value++;
	}

	today = new Date(fechasAct.getAt(indexFechasAct.value).fecha);

	cargarActividades(1);
	getFecha();
}

function lastFechaconActividad()
{
	if(indexFechasAct.value == 0)
	{
		indexFechasAct.value = fechasAct.length - 1;
	}else{
		indexFechasAct.value--;
	}

	today = new Date(fechasAct.getAt(indexFechasAct.value).fecha);

	cargarActividades(1);
	getFecha();
}

//---Calendar.ux---
function nextMonth()
{
	today.setMonth(today.getMonth() + 1);
	
	getFecha();
	getDias();
}

function lastMonth()
{
	today.setMonth(today.getMonth() - 1);
	
	getFecha();
	getDias();
}

function nextDay()
{
	today.setDate(today.getDate() + 1);
	
	getFecha();
	cargarActividades(0);
}

function lastDay()
{
	today.setDate(today.getDate() - 1);
	
	getFecha();
	cargarActividades(0);
}

function setDay(arg)
{
	if(arg.data.dia != " ")
	{
		today.setDate(arg.data.dia);
	}

	getFecha();
	cargarActividades(0);
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
			var auxAct = new Date(e.fecha);
			
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

function getHabxCursoxDia()
{
}

module.exports = {
//---Cursos.ux---
	ramas: ramas,
	cursos: cursos,
	actividad: actividad,
	instructores: instructores,
	alumnosCurso: alumnosCurso,
	selectRama: selectRama,
	selectCurso: selectCurso,
	selectAlumno: selectAlumno,
	selectInstructor: selectInstructor,
	cursoAct: cursoAct,
	alumnoAct: alumnoAct,
	cargarInstructores: cargarInstructores,
	setDiaconActividad: setDiaconActividad,
	marcarAlumnosxCurso: marcarAlumnosxCurso,
	eliminarSubHabActividad: eliminarSubHabActividad,
	movCurso: movCurso,
	curso: curso,
	limpiarCurso: limpiarCurso,
	agregarCurso: agregarCurso,

//---CreaActividad.ux---
	habilidades: habilidades,
	selectHab: selectHab,
	selectSubHab: selectSubHab,
	agregarActividad: agregarActividad,

//---AddAlumno.ux---
	alumnos: alumnos,
	agregarAlumnosCurso: agregarAlumnosCurso,
	selectNewAlumno: selectNewAlumno,
	getAlumxCursos: getAlumxCursos,
	agregarAlumnoNuevo: agregarAlumnoNuevo,
	limpiarDatos: limpiarDatos,
	eliminarAlumnoCurso: eliminarAlumnoCurso,
	editarAlumnos: editarAlumnos,
	mostrarEdicionAlumnos: mostrarEdicionAlumnos,
//---Datos Persona---
	nombre: nombre,
	apellido: apellido,
	correo: correo,
	cel: cel,
	nacimiento: nacimiento,

//---CalificarAlumno.ux---
	isAbleCalifica: isAbleCalifica,
	resetHabxAlumno: resetHabxAlumno,
	selectN: selectN,
	selectM: selectM,
	selectL: selectL,
	asistio: asistio,
	comentario: comentario,
	marcaAsistencia: marcaAsistencia,
	mostrarCalificacion: mostrarCalificacion,
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
	getFecha: getFecha,
	getDias: getDias
};