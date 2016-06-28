var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var GlobalE = require("GlobalElem");
var personaActual = Observable(1);
var pagActual = Observable("pagMiActividad");

var calificacionesAl = Observable({"calificaciones": "nuevas"});
var actividadesAl = Observable({"actividades": "nuevas"});
var resumenNotas = Observable({"nota": 0, "nombre":"", "radio":0});
var total = Observable(0);
var clases = Observable({"fecha":"","asistencia":"falla","actividad":0,"valido":false});
var comentario = Observable("");
var calificacionAct = Observable({"calificacion":"nueva"});
var habilidadesAlcanzadas = Observable({"habilidad":"nueva"});
var fechasCalificaciones = Observable({"fecha":"2016-06-01","id":0});
var indexFechasCal = Observable(0);
var iniciadoFecha = false;
var today = new Date();
var dia = Observable();
var anio = Observable();

var timer = Timer.create(function(){
	getPersona();}, 1000, true);

function getPersona()
{
	if(GlobalE.login.value)
	{
		personaActual.value = GlobalE.idPerson.value;

		if(GlobalE.rolPerson.value == 0)
		{
			pagActual.value = "pagMiActividad";
			getResumenNotasAlumno();

			GlobalE.login.value = false;
		}
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

				total.value = total.value + nuevo.nota;
			}
		});

		aux.forEach(function(e)
		{
			e["radio"] = (e.nota/total.value)*360;
		});

		resumenNotas.replaceAll(aux);
	});
}

function getFechasClases(verProgreso)
{
	var contador = 0;

	fetch('http://loop.inhandy.com/loop.php?getAsistenciaAlumno=' + personaActual.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("getAsistenciaAlumno: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var keys = Object.keys(data);
		var aux = Observable();
		var auxiliar = Observable();

		var dateNames = ["Domingo", "Lunes", "Martes", "Miércoles", "Jueves",
		"Viernes", "Sábado"];

		var monthNames = ["Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
	 	"Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

		keys.forEach(function(key, index)
		{
			if (index >= aux.length)
			{
				var nuevo = data[key];
				var auxAsistencia = "falla";
				var auxFecha = "";
				var auxValido = false;
				var auxDia = new Date(nuevo.fecha + "T11:51:00");

				auxFecha = dateNames[auxDia.getUTCDay()] + " " + auxDia.getDate() +
					" de " + monthNames[auxDia.getMonth()];

				if(nuevo.asistencia == 1)
				{
					auxAsistencia = "check";
					auxValido = true;
				}

				aux.add({"fecha":auxFecha,"asistencia":auxAsistencia,"actividad":nuevo.id,"valido":auxValido});
				auxiliar.add({"fecha":auxDia,"id":nuevo.id})
				contador++;
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
		fechasCalificaciones.replaceAll(auxiliar);

		if(verProgreso == 1)
		{
			if(fechasCalificaciones.getAt(0).id != 0)
			{
				if (!iniciadoFecha)
				{
					indexFechasCal.value = fechasCalificaciones.length - 1;
					today = new Date(fechasCalificaciones.getAt(indexFechasCal.value).fecha);
					iniciadoFecha = true;
					getFecha();
				}

				cargarCalificacionesAlumno(fechasCalificaciones.getAt(indexFechasCal.value).id)
			}
		}
	});
}

function getFechasconActividades(e)
{
	getFechasClases(1);
}

//--Carga todas las calificaciones del alumno.
function cargarCalificacionesAlumno(idActividad)
{
	fetch('http://loop.inhandy.com/loop.php?cargarCalificaciones=' + idActividad + 
		',' + personaActual.value, {
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
		var aux = Observable();
		var nuevo = data;

		nuevo.habilidades.forEach(function(e)
		{
			if(nuevo.asistencia == 1)
			{
				e.subHabs.forEach(function(x)
				{
					x["noLogrado"] = "";
					x["medio"] = "";
					x["logrado"] = "";
					
					if(x.nota == 3)
					{
						x.logrado = "check";
					}else

					if(x.nota == 2)
					{
						x.medio = "check";
					}

					if(x.nota == 1)
					{
						x.noLogrado = "check";
					}

				});
			}

			aux.add(e);
		});
		
		if (nuevo.asistencia == 0)
		{
			comentario.value = "No Asistió";
		}else{
			comentario.value = nuevo.comentario;
		}

		calificacionAct.replaceAll(aux);
	});
}

function selectFechaCalificacion(arg)
{
	for(var i = 0; i < fechasCalificaciones.length; i++)
	{
		if(arg.data.actividad == fechasCalificaciones.getAt(i).id)
		{
			indexFechasCal.value = i;
			today = new Date(fechasCalificaciones.getAt(indexFechasCal.value).fecha);
		}
	}

	cargarCalificacionesAlumno(arg.data.actividad);
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
	fetch('http://loop.inhandy.com/loop.php?getHabilidadesAlcanzadas=' + personaActual.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("getHabilidadesAlcanzadas: Something went wrong :(");
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

				nuevo.habilidades.forEach(function(e)
				{
					e.subHabs.forEach(function(x)
					{
						x.fecha = getFechaAbrev(x.fecha);
					});
				});

				console.log("Habilidades: " + nuevo.habilidades.length);

				if(nuevo.habilidades.length > 0)
				{
					aux.add(nuevo);
				}
			}
		});

		habilidadesAlcanzadas.replaceAll(aux);
	});
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

	cargarCalificacionesAlumno(fechasCalificaciones.getAt(indexFechasCal.value).id);
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

	cargarCalificacionesAlumno(fechasCalificaciones.getAt(indexFechasCal.value).id);
	getFecha();
}

module.exports = {
	pagActual: pagActual,
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