var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var GlobalE = require("GlobalElem");
var personaActual = Observable(1);

var calificacionesAl = Observable({"calificaciones": "nuevas"});
var actividadesAl = Observable({"actividades": "nuevas"});
var resumenNotas = Observable({"nota": 0, "nombre":"", "radio":0});
var total = Observable(0);
var clases = Observable({"fecha":"","asistencia":"falla","actividad":0,"valido":false});
var actividadAct = Observable();
var comentario = Observable("");
var calificacionAct = Observable({"calificacion":"nueva"});
var habilidadesAlcanzadas = Observable({"habilidad":"nueva"});
var fechasCalificaciones = Observable({"fecha":"2016-06-01","id":0});
var indexFechasCal = Observable(0);
var iniciadoFecha = false;
var today = new Date();
var dia = Observable();
var anio = Observable();

// var timer = Timer.create(function(){
	// cargarFunciones();getPersona();}, 1000, true);

function cargarFunciones()
{
	cargarCalificacionesAlumno();
	cargarActividadesAlumno();
	getResumenNotasAlumno();
}

function getPersona()
{
	personaActual.value = GlobalE.idPerson.value; 
	
	if(personaActual.value != null)
	{
		if(GlobalE.rolPerson.value == 0)
		{
			getResumenNotasAlumno();
		}

		Timer.delete(timer);
	}	
}

function getResumenNotasAlumno()
{
	fetch('http://loop.inhandy.com/loop.php?getResumenNotasAlumno=' + personaActual.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("getResumenNotasAlumno: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		var aux = Observable();
		total.value = 0;

		keys.forEach(function(key, index)
		{
			if (index >= aux.length)
			{
				var nuevo = data[key];
				aux.add(nuevo);

				total.value = total.value + nuevo.nombre;
			}
		});

		aux.forEach(function(e)
		{
			e["radio"] = (e.nota/total.value)*360;
		});

		resumenNotas.replaceAll(aux);
	});
}

//--Carga todas las calificaciones del alumno.
function cargarCalificacionesAlumno()
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
			console.log("cargarCalificacionesAlumno: Something went wrong :(");
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

		calificacionesAl.replaceAll(aux);
	});
}

function cargarActividadesAlumno()
{
	fetch('https://firstloop.firebaseio.com/actividades.json', {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarActividadesAlumno: Something went wrong :(");
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

		actividadesAl.replaceAll(aux);
	});
}

function getFechasClases()
{
	var aux = Observable();
	var contador = 0;

	var dateNames = ["Domingo", "Lunes", "Martes", "Miércoles", "Jueves",
		"Viernes", "Sábado"];

	var monthNames = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

	calificacionesAl.forEach(function(e)
	{
		if(personaActual.value == e.alumno)
		{
			actividadesAl.forEach(function(x)
			{
				if(e.actividad == x.id)
				{
					var auxAsistencia = "falla";
					var auxFecha = "";
					var auxValido = false;
					var auxDia = new Date(x.fecha + "T11:51:00");

					auxFecha = dateNames[auxDia.getUTCDay()] + " " + auxDia.getDate() +
						" de " + monthNames[auxDia.getMonth()];

					if(e.asistencia == 1)
					{
						auxAsistencia = "check";
						auxValido = true;
					}

					aux.add({"fecha":auxFecha,"asistencia":auxAsistencia,"actividad":x.id,"valido":auxValido});
					contador++;
				}
			});
		}
	});

	if(contador < 20)
	{
		for (var i = contador; i < 20; i++)
		{
			aux.add({"fecha":"","asistencia":"","actividad":0,"valido":false});
		}
	}

	clases.replaceAll(aux);
}

function getFechasconActividades()
{	
	var auxFechas = [];
	var auxIdActividad = 0;

	calificacionesAl.forEach(function(e)
	{
		if(personaActual.value == e.alumno)
		{
			actividadesAl.forEach(function(x)
			{
				if(e.actividad == x.id)
				{
					var auxFecha = x.fecha + "T11:51:00";
					auxFechas.push({"fecha":auxFecha,"actividad":x.id});
					
					if (!iniciadoFecha)
					{
						actividadAct = x;
						auxIdActividad = x.id;
					}
				}
			});
		}
	});

	auxFechas.sort(function(a, b) 
		{return a.fecha.localeCompare(b.fecha);});

	fechasCalificaciones.replaceAll(auxFechas);

	if (!iniciadoFecha)
	{
		indexFechasCal.value = fechasCalificaciones.length - 1;
		today = new Date(fechasCalificaciones.getAt(indexFechasCal.value).fecha);
		iniciadoFecha = true;
		
		getCalificacionxActividad(auxIdActividad);
		getFecha();
	}
}

function getCalificacionxActividad(id)
{
	var aux = Observable();
	comentario.value = "";

	calificacionesAl.forEach(function(a)
	{
		if((a.actividad == id) && (personaActual.value == a.alumno))
		{
			if(a.asistencia == 1)
			{
				a.habilidades.forEach(function(x)
				{
					actividadAct.habilidades.forEach(function(y)
					{
						if (y.id == x.habilidad)
						{
							x.subHabs.forEach(function(z)
							{
								y.subHabs.forEach(function(d)
								{
									if (z.id == d.id)
									{
										d["noLogrado"] = "";
										d["medio"] = "";
										d["logrado"] = "";
										
										if(z.nota == 3)
										{
											d.logrado = "check";
										}else

										if(z.nota == 2)
										{
											d.medio = "check";
										}

										if(z.nota == 1)
										{
											d.noLogrado = "check";
										}
									}
								});
							});

							aux.add(y);
						}
					});
				});

				comentario.value = a.comentario;
			}else{
				actividadAct.habilidades.forEach(function(y)
				{
					y.subHabs.forEach(function(d)
					{
						d["noLogrado"] = "";
						d["medio"] = "";
						d["logrado"] = "";
					});
					
					aux.add(x);
				});
			}
		}
	});

	calificacionAct.replaceAll(aux);
}

function selectFechaCalificacion(arg)
{
	var auxFecha = "";
	getFechasconActividades();

	actividadesAl.forEach(function(e)
	{
		if(e.id == arg.data.actividad)
		{
			actividadAct = e;
			auxFecha = e.fecha;
		}
	});

	for(var i = 0; i < fechasCalificaciones.length; i++)
	{
		if((auxFecha + "T11:51:00") == fechasCalificaciones[i])
		{
			indexFechasCal.value = i;
			today = new Date(fechasCalificaciones[indexFechasCal.value]);
		}
	}

	getCalificacionxActividad(arg.data.actividad);
	getFecha();
}

function getFecha()
{
	var monthNames = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

	dia.value = today.getDate() + " de " + monthNames[today.getMonth()];
	anio.value = " / " + today.getFullYear();
}

function getHabilidadesAlcanzadas()
{
	var auxNotas = Observable();
	var auxHabs = Observable();

	calificacionesAl.forEach(function(e)
	{
		if(personaActual.value == e.alumno)
		{
			e.habilidades.forEach(function(x)
			{
				x.subHabs.forEach(function(y)
				{
					if(y.nota == 3)
					{
						auxNotas.add({"actividad":e.actividad,"subHab":y.id});
					}
				});
			});
		}
	});

	actividadesAl.forEach(function(e)
	{
		auxNotas.forEach(function(z)
		{
			if(z.actividad == e.id)
			{
				e.habilidades.forEach(function(x)
				{
					var encontrado = false;
					var auxSubHabs = Observable();

					x.subHabs.forEach(function(y)
					{	
						if(y.id == z.subHab)
						{
							var auxFecha = getFechaAbrev(e.fecha);
							auxSubHabs.add({"subHab":y.subHab,"fecha":auxFecha});
							encontrado = true;
						}
					});

					if(encontrado)
					{
						auxHabs.add({"habilidad":x.habilidad,"subHabs":auxSubHabs});
					}
				});
			}
		});
	});

	habilidadesAlcanzadas.replaceAll(auxHabs);
}

function getFechaAbrev(fechaSub)
{
	var monthNames = ["","Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

	fechaSub = fechaSub.substring(8) + " / " + monthNames[parseInt(fechaSub.substr(5,2))];

	return fechaSub;
}

function nextFechaCalificacion()
{
	var auxIdActividad = 0;

	if(indexFechasCal.value == (fechasCalificaciones.length - 1))
	{
		indexFechasCal.value = 0;
	}else{
		indexFechasCal.value++;
	}

	today = new Date(fechasCalificaciones.getAt(indexFechasCal.value).fecha);

	actividadesAl.forEach(function(e)
	{
		if(e.id == fechasCalificaciones.getAt(indexFechasCal.value).actividad)
		{
			actividadAct = e;
		}
	});

	getCalificacionxActividad(fechasCalificaciones.getAt(indexFechasCal.value).actividad);
	getFecha();
}

function lastFechaCalificacion()
{
	if(indexFechasCal.value == 0)
	{
		indexFechasCal.value = fechasCalificaciones.length - 1;
	}else{
		indexFechasCal.value--;
	}

	today = new Date(fechasCalificaciones.getAt(indexFechasCal.value).fecha);

	actividadesAl.forEach(function(e)
	{
		if(e.id == fechasCalificaciones.getAt(indexFechasCal.value).actividad)
		{
			actividadAct = e;
		}
	});

	getCalificacionxActividad(fechasCalificaciones.getAt(indexFechasCal.value).actividad);
	getFecha();
}

module.exports = {
	resumenNotas: resumenNotas,
	getFechasClases: getFechasClases,
	getHabilidadesAlcanzadas: getHabilidadesAlcanzadas,
	getFechasconActividades: getFechasconActividades,
	selectFechaCalificacion: selectFechaCalificacion,
	habilidadesAlcanzadas: habilidadesAlcanzadas,
	nextFechaCalificacion: nextFechaCalificacion,
	lastFechaCalificacion: lastFechaCalificacion,
	calificacionAct: calificacionAct,
	comentario: comentario,
	clases: clases,
	total: total,
	anio: anio,
	dia: dia
};