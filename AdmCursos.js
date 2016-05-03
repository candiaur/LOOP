var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');

//---Cursos.ux---
var cursos = Observable();
var actividades = Observable();
var habilidadesAct = Observable({"habilidad":"nueva"});
var cursoAct = Observable({"id":"","nombre":"","nuevo":true});
var usado = Observable(0);

//---CrearActividad.ux---
var habilidades = Observable();
var subHabs = Observable();
var mensaje = Observable("Collapsed");

var timer = Timer.create(function(){
	cargarTodo();}, 1000, true);

function cargarTodo()
{
	cargarCursos();
	cargarActividades();
	cargarHabilidades();
}

//----Cursos.ux----
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
		
		
		keys.forEach(function(key, index)
		{
			if (index >= cursos.length)
			{
				var nuevo = data[key];
				cursos.add(nuevo);
			}
		})
	});
}

function cargarActividades()
{
	var aux = Observable();

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
		
		if(usado == 0)
		{
			keys.forEach(function(key, index)
			{
				if (index >= actividades.length)
				{
					var nuevo = data[key];
					actividades.add(nuevo);
				}
			});
			
			usado.value = 1;
		}else{
			keys.forEach(function(key, index)
			{
				if (index >= aux.length)
				{
					var nuevo = data[key];
					nuevo["llave"] = key;
					aux.add(nuevo);
				}
			});

			actividades.replaceAll(aux);
		}
	});
}

function selectCurso(arg)
{
	cursoAct.value = {"id":arg.data.id,"nombre":arg.data.curso,"nuevo":true};
	getHabxCursos();
}

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
				cursoAct.value.nuevo = false;
			});
		}
	});

	habilidadesAct.replaceAll(aux);
}

function removeItem(sender)
{
	cursos.remove(sender.data);
}


//----CrearActividad.ux----
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
		})
	});
}

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
		})
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

function agregarActividad()
{
	var today = new Date().toISOString().slice(0, 10);
	var aux = "{\"curso\":" + cursoAct.value.id + ",";
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
			aux = aux + "\"subHab\":[";

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

					aux = aux + "{\"habilidad\":" + x.habilidad + ",";
					aux = aux + "\"subHab\":\"" + x.subHab + "\",";
					aux = aux + "\"id\":" + x.id + "}";
				}
			});

			aux = aux + "]}";
		}
	});

	aux = aux + "]}";

	if(cursoAct.value.nuevo == true)
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


module.exports = {
//---Cursos.ux---
	cursos: cursos,
	habilidadesAct: habilidadesAct,
	removeItem: removeItem,
	selectCurso: selectCurso,
	cursoAct: cursoAct,

//---CreaActividad.ux---
	habilidades: habilidades,
	selectAll: selectAll,
	selectSubHab: selectSubHab,
	agregarActividad: agregarActividad,
	mensaje: mensaje
};