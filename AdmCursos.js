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
var niveles = Observable();

//---CrearAlumno.ux---
var editarAlumnos = Observable(false);

//--- Datos Persona---
var nombre = Observable("");
var apellido = Observable("");
var correo = Observable("");
var cel = Observable("");
var nacimiento = Observable("");
var imagen = Observable("");


//---CalificarAlumno.ux--
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
			cargarNiveles();
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

//----CrearActividad.ux----
//-- Carga todos los niveles con sus habilidades y subhabilidades por default
function cargarNiveles()
{
	fetch('http://loop.inhandy.com/loop.php?cargarNiveles', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarNiveles: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		
		keys.forEach(function(key, index)
		{
			if (index >= niveles.length)
			{
				var nuevo = data[key];
				nuevo["isVisible"] = "Collapsed";
				nuevo["activo"] = false;

				nuevo.habilidades.forEach(function(e)
				{
					e["activo"] = false;
					e["isVisible"] = "Collapsed";
					e["nivel"] = nuevo.id

					e.subHabs.forEach(function(x)
					{
						x["activo"] = false;
						x["nivel"] = nuevo.id;
						x["habilidad"] = e.id;
					});
				});
				
				niveles.add(nuevo);
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
			console.log("CargarInstructores: Something went wrong :(");
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
			console.log("CargarCursosxInstructor: Something went wrong :(");
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
				nuevo["habilidadesC"] = nuevo.habilidades;
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
				nuevo["habilidadesC"] = contador;
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

	fetch('http://loop.inhandy.com/loop.php?crearCurso=', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: aux
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("CrearCurso: Something went wrong :(");
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
			console.log("CargarActividades: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		var aux = Observable();
		var auxiliar = Observable();
		var hayActividad = 0;

		actividad.replaceAll(data);
		
		keys.forEach(function(key, index)
		{
			if (index >= aux.length)
			{
				var nuevo = data[key];

				nuevo.niveles.forEach(function(e)
				{
					var hayHabs = 0;

					e.habilidades.forEach(function(x)
					{
						x["nivel"] = e.id;

						x.subHabs.forEach(function(y)
						{
							y["habilidad"] = x.habilidad;
							y["nivel"] = e.id;
						});

						hayHabs ++;
						hayActividad = nuevo.id;
					});

					if(hayHabs > 0)
					{
						aux.add(e);
					}
				});
			}
		});

		if(hayActividad == 0)
		{
			auxiliar.add({"id":0,"niveles":[]});
		}else{
			auxiliar.add({"id":hayActividad,"niveles":aux});	
		}

		actividad.replaceAll(auxiliar);
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
			console.log("EliminarSubHabActividad: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		cargarActividades(0);
	});
}

function marcarActividadesxDia()
{
	var aux = Observable();

	niveles.forEach(function(a)
	{	
		a.activo = false;
		a.isVisible = "Collapsed";

		actividad.getAt(0).niveles.forEach(function(b)
		{
			if(a.id == b.id)
			{
				a.habilidades.forEach(function(e)
				{
					e.activo = false;
					e.isVisible = "Collapsed";

					e.subHabs.forEach(function(x)
					{
						x.activo = false;
					});

					b.habilidades.forEach(function(x)
					{
						if(x.id == e.id)
						{
							e.activo = true;
							e.isVisible = "Visible";
							a.activo = true;
							a.isVisible = "Visible";

							e.subHabs.forEach(function(y)
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
				});
			}
		});

		aux.add(a);
	});

	niveles.replaceAll(aux);
}

function mostrarHabs(arg)
{
	var aux = Observable();

	niveles.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			if (e.isVisible == "Visible")
			{
				e.activo = false;
				e.isVisible = "Collapsed";
			}else{
				e.isVisible = "Visible";
				e.activo = true;
			}
		}
		aux.add(e);
	});

	niveles.replaceAll(aux);
}

function mostrarSubHabs(arg)
{
	if((arg.data.isVisible == "Collapsed") || (arg.data.activo == false))
	{
		var aux = Observable();

		niveles.forEach(function(e)
		{
			if(e.id == arg.data.nivel)
			{
				e.habilidades.forEach(function(x)
				{
					if(x.id == arg.data.id)
					{
						if (x.isVisible == "Visible")
						{
							x.isVisible = "Collapsed";
						}else{
							x.isVisible = "Visible";
						}
					}
				});
			}
			aux.add(e);
		});

		niveles.replaceAll(aux);
	}
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

	niveles.forEach(function(e)
	{
		e.habilidades.forEach(function(x)
		{
			var inicioSub = 0;

			if(x.activo == true)
			{
				if(inicio > 0)
				{
					aux = aux + ","
				}else{
					inicio++;
				}

				aux = aux + "{\"habilidad\":" + e.id + ",";
				aux = aux + "\"subHabs\":[";

				x.subHabs.forEach(function(y)
				{
					if(y.activo == true)
					{
						if(inicioSub > 0)
						{
							aux = aux + ","
						}else{
							inicioSub++;
						}

						aux = aux + "{\"subHab\":" + y.id + "}";
					}
				});

				aux = aux + "]}";
			}
		});
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
				console.log("AgregarActividad: Something went wrong :(");
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
				console.log("ActualizarActividad: Something went wrong :(");
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
			console.log("GetAlumxCursos: Something went wrong :(");
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
		editarAlumnos.value = false;
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

	editarAlumnos.value = false;
	setDiaconActividad();
}

function mostrarEdicionAlumnos()
{
	if(editarAlumnos.value == true)
	{
		editarAlumnos.value = false;
	}else{
		editarAlumnos.value = true;
	}
}

function editarAlumnoCurso(arg)
{
	alumnosCurso.forEach(function(e)
	{
		if(e.id == arg.data.id)
		{
			alumnoAct.value = e;
		}
	});

	editarAlumnos.value = false;

	var nacio = alumnoAct.value.nacimiento;

	if(nacio.trim().length == 10)
	{
		nacio = nacio.substr(8) + nacio.substr(4,4) + nacio.substr(0,4);
	}

	nombre.value = alumnoAct.value.nombre;
	apellido.value = alumnoAct.value.apellido;
	correo.value = alumnoAct.value.correo;
	cel.value = alumnoAct.value.cel;
	nacimiento.value = nacio;
	imagen.value = "";
}

function limpiarDatos()
{
	alumnoAct.value = {"id":0};

	nombre.value = "";
	apellido.value = "";
	correo.value = "";
	cel.value = "";
	nacimiento.value = "";
	imagen.value = "";
}

//----CrearAlumno.ux----
//--- Crea un nuevo Alumno ---
function creaEditaAlumno()
{
	if(nacimiento.value.trim().length == 10)
	{
		nacimiento.value = nacimiento.value.substr(6) + nacimiento.value.substr(2,4) + nacimiento.value.substr(0,2);
	}

	var aux = "\"nombre\": \"" + nombre.value + "\",";
	aux = aux + "\"apellido\": \"" + apellido.value + "\",";
	aux = aux + "\"cel\": \"" + cel.value + "\",";
	aux = aux + "\"correo\": \"" + correo.value + "\",";
	aux = aux + "\"imagen\": \"" + imagen.value + "\",";
	aux = aux + "\"nacimiento\": \"" + nacimiento.value + "\"";
	
	if(alumnoAct.value.id == 0)
	{
		aux = "{" + aux + ",\"rol\": 0}";

		fetch('http://loop.inhandy.com/loop.php?crearPersona=' + aux, {
			method: 'GET',
			cache: 'default',
			headers: { "Content-type": "application/json"}
		})
		.then(function(result)
		{
			if (result.status !== 200)
			{
				console.log("CrearAlumno: Something went wrong :(");
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
	}else{
		aux = "{\"id\":" + alumnoAct.value.id + "," + aux + "}";

		fetch('http://loop.inhandy.com/loop.php?editarDatosPersona=' + aux, {
			method: 'GET',
			cache: 'default',
			headers: { "Content-type": "application/json"}
		})
		.then(function(result)
		{
			if (result.status !== 200)
			{
				console.log("EditarAlumno: Something went wrong :(");
				return;
			}
			return result.json();
		})
		.then(function(data)
		{
			getAlumxCursos();
		});
	}
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

	fetch('http://loop.inhandy.com/loop.php?agregarAlumnosCurso=' + aux, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("AgregarAlumnosCurso: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		getAlumxCursos();
	});
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
			console.log("EliminarAlumno: Something went wrong :(");
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

	actividad.getAt(0).niveles.forEach(function(e)
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

	actividad.getAt(0).niveles.forEach(function(a)
	{
		calificaciones.forEach(function(b)
		{
			if(b.asistencia == 1)
			{
				asistio.value = true;
				comentario.value = b.comentario;

				a.habilidades.forEach(function(e)
				{
					b.habilidades.forEach(function(x)
					{
						if (e.id == x.id)
						{
							x.subHabs.forEach(function(y)
							{
								e.subHabs.forEach(function(z)
								{
									if (y.id == z.id)
									{
										if(y.nota == 3)
										{
											z.logrado = true;

										}else{
											if(y.nota == 2)
											{
												z.medio = true;
											}else{
												z.noLogrado = true;
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
	});

	aux.add(actividad.getAt(0));

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

		actividad.getAt(0).niveles.forEach(function(e)
		{
			e.habilidades.forEach(function(x)
			{
				var inicioSub = 0;

				if(inicio > 0)
				{
					aux = aux + ","
				}else{
					inicio++;
				}

				aux = aux + "{\"habilidad\":" + x.id + ",";
				aux = aux + "\"subHabs\":[";

				x.subHabs.forEach(function(y)
				{
					if(inicioSub > 0)
					{
						aux = aux + ","
					}else{
						inicioSub++;
					}

					aux = aux + "{\"id\":" + y.id + ",";

					if(y.logrado == true)
					{
						aux = aux + "\"nota\": 3}";
					}else{
						if(y.medio == true)
						{
							aux = aux + "\"nota\": 2}";
						}else{
							aux = aux + "\"nota\": 1}";
						}
					}
				});

				aux = aux + "]}";
			});
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
				console.log("AgregarCalificaciones: Something went wrong :(");
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
				console.log("ActualizarCalificaciones: Something went wrong :(");
				return;
			}
			return result.json();
		});
	}
}

//-------- FUNCION CHECKBOX------
function selectHab(arg)
{
	var aux = Observable();

	niveles.forEach(function(e)
	{
		if(e.id == arg.data.nivel)
		{
			e.habilidades.forEach(function(x)
			{
				if(x.id == arg.data.id)
				{
					if (x.activo == true)
					{
						x.activo = false;

						x.subHabs.forEach(function(y)
						{
							y.activo = false;
						});
					}else{

						x.activo = true;

						x.subHabs.forEach(function(y)
						{
							y.activo = true;
						});
					}
				}
			});
		}

		aux.add(e);
	});

	niveles.replaceAll(aux);
}

function selectSubHab(arg)
{
	var aux = Observable();

	niveles.forEach(function(e)
	{
		if( e.id == arg.data.nivel)
		{
			e.habilidades.forEach(function(x)
			{
				if(x.id == arg.data.habilidad)
				{
					var alguno = false;
					
					x.subHabs.forEach(function(y)
					{
						if(y.id == arg.data.id)
						{
							if(y.activo == true)
							{
								y.activo = false;
							}else{
								y.activo = true;
								alguno = true;
							}
						}else
						{
							if(y.activo == true)
							{
								alguno = true;
							}
						}
					});

					x.activo = alguno;
				}
			});
		}

		aux.add(e);
	});

	niveles.replaceAll(aux);
}

function selectN(arg)
{
	var aux = Observable();
	
	actividad.getAt(0).niveles.forEach(function(e)
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
	});

	aux.add(actividad.getAt(0));
	actividad.replaceAll(aux);
}

function selectM(arg)
{
	var aux = Observable();
	
	actividad.getAt(0).niveles.forEach(function(e)
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
	});

	aux.add(actividad.getAt(0));
	actividad.replaceAll(aux);
}

function selectL(arg)
{
	var aux = Observable();
	
	actividad.getAt(0).niveles.forEach(function(e)
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
	});

	aux.add(actividad.getAt(0));
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
			console.log("GetFechasconActividades: Something went wrong :(");
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

module.exports = {
//---Cursos.ux---
	ramas: ramas,
	cursos: cursos,
	niveles: niveles,
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
	selectHab: selectHab,
	selectSubHab: selectSubHab,
	mostrarHabs: mostrarHabs,
	mostrarSubHabs: mostrarSubHabs,
	agregarActividad: agregarActividad,

//---AddAlumno.ux---
	alumnos: alumnos,
	agregarAlumnosCurso: agregarAlumnosCurso,
	selectNewAlumno: selectNewAlumno,
	getAlumxCursos: getAlumxCursos,
	creaEditaAlumno: creaEditaAlumno,
	limpiarDatos: limpiarDatos,
	editarAlumnos: editarAlumnos,
	editarAlumnoCurso: editarAlumnoCurso,
	eliminarAlumnoCurso: eliminarAlumnoCurso,
	mostrarEdicionAlumnos: mostrarEdicionAlumnos,
//---Datos Persona---
	nombre: nombre,
	apellido: apellido,
	correo: correo,
	cel: cel,
	nacimiento: nacimiento,

//---CalificarAlumno.ux---
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