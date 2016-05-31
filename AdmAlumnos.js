var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var personaActual = Observable(1);

var calificacionesAl = Observable({"calificaciones": "nuevas"});
var resumenNotas = Observable({"nota": 0, "nombre":"", "radio":0});
var total = Observable(0);

var timer = Timer.create(function(){
	cargarCalificacionesAlumno();getResumenNotasAlumno();}, 1000, true);

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
				aux.add(nuevo);
			}
		});

		calificacionesAl.replaceAll(aux);
	});
}

function getResumenNotasAlumno()
{
	var aux = Observable();
	var aux1 = 0;
	var aux2 = 0;
	var aux3 = 0;
	total.value = 0;

	calificacionesAl.forEach(function(e)
	{
		if(personaActual.value == e.alumno)
		{
			e.habilidades.forEach(function(x)
			{
				x.subHabs.forEach(function(y)
				{
					if (y.nota == 3)
					{
						aux3 ++;
					}else{
						if (y.nota == 2)
						{
							aux2 ++;
						}else{
							aux1 ++;
						}
					}
					total.value ++;
				});
			});
		}
	});

	aux.add({"nota": aux1, "nombre":"SEGUIR TRABAJANDO"});
	aux.add({"nota": aux2, "nombre":"CASI LOGRADAS"});
	aux.add({"nota": aux3, "nombre":"LOGRADAS!"});

	aux.forEach(function(e)
	{
		e["radio"] = (e.nota/total.value)*360;
	});

	resumenNotas.replaceAll(aux);
}

module.exports = {
	resumenNotas: resumenNotas,
	total: total
};