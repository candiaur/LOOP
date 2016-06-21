var Observable = require("FuseJS/Observable");
var GlobalE = require("GlobalElem");
			
var tag = Observable();
var currentPage = Observable("login");
var leftPage = Observable("calificacion");
var perfilPage = Observable("pagPerfil");
var mensajeError = Observable("");
var mensajeClave = Observable("");

var persona = Observable(
	new Person("", "","","","Assets/FuseLogo.png","0"));
var email = Observable();
var clave = Observable();
var claveAct = Observable("");
var nuevaClave1 = Observable("");
var nuevaClave2 = Observable("");

var nombre = Observable("");
var apellido = Observable("");
var cel = Observable("");
var nacio = Observable("");
var imagen = Observable("");
var fechaNacio = Observable("");

function Person(nombre, apellido, correo, cel, nacio, imagen, rol)
{
	var monthNames = ["", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];
	var fecha = "";

	try
	{
		var fecha = nacio.substr(8) + " de " + monthNames[parseInt(nacio.substr(5,2))] + " de " + nacio.substr(0,4);
		nacio = nacio.substr(8) + nacio.substr(4,4) + nacio.substr(0,4);
	}catch(err){
		fecha = "";
		nacio = "";
	}

	this.nombre = nombre.toUpperCase();
	this.apellido = apellido.toUpperCase();;
	this.correo = correo;
	this.cel = cel;
	this.fechaN = nacio;
	this.nacio = fecha;
	this.imagen = imagen;
	this.rol = rol;
}

function load(idUser)
{
	fetch('http://loop.inhandy.com/loop.php?cargarPersona=' + idUser + ',' + 
		GlobalE.instancia.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("CargarPersona: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		persona.value = new Person(data.nombre, data.apellido, data.email, data.cel, data.nacimiento, data.imagen, data.rol);
		GlobalE.rolPerson.value = data.rol;

		if(data.rol == "0")
		{
			leftPage.value = "informe";
		}else{
			
			leftPage.value = "calificacion";
		}
	});
};

function submit()
{
	fetch('https://firstloop.firebaseio.com/instancia.json', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: JSON.stringify({"nombre": tag.value})
	});

	tag.value = "";
}

function loginUser()
{
	var estadoLogin = Observable();

	fetch('http://loop.inhandy.com/loop.php?login=' + email.value +'&pwd=' + clave.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("Login: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		estadoLogin = data;

		if(estadoLogin.estado == 0)
		{
			load(estadoLogin.uid);
			GlobalE.idPerson.value = estadoLogin.uid;

			currentPage.value = "inicio";
		}else{
			if(estadoLogin.estado == 2)
			{
				mensajeError.value =  "La clave que ingresó es incorrecta. Inténtalo nuevamente.";
			}else{
				mensajeError.value = "El email que ingresó es incorrecto. Inténtalo nuevamente.";
			}
		}
	});
}

function limpiarClaves()
{
	claveAct.value = "";
	nuevaClave1.value = "";
	nuevaClave2.value = "";
	mensajeClave.value = "";
}

function modificarClave()
{
	if((claveAct.value != "") && (nuevaClave1.value != "") && (nuevaClave2.value != ""))
	{
		if((claveAct.value == clave.value))
		{
			if(nuevaClave1.value == nuevaClave2.value)
			{
				var aux = "{ \"id\":" + GlobalE.idPerson.value + ",";
				aux = aux + "\"clave\":\"" + nuevaClave1.value + "\"}";
				aux = encodeURIComponent(aux);

				fetch('http://loop.inhandy.com/loop.php?cambiarClave=' + aux, {
					method: 'GET',
					cache: 'default',
					headers: { "Content-type": "application/json"}
				})
				.then(function(result)
				{
					if (result.status !== 200)
					{
						console.log("modificarClave: Something went wrong :(");
						return;
					}
					return result.json();
				})
				.then(function(data)
				{
					clave.value = nuevaClave1.value;
					perfilPage.value = "pagConfigura";
					mensajeClave.value = "";
				});
			}else{
				mensajeClave.value = "Claves Nuevas no coinciden";
			}	
		}else{
			mensajeClave.value = "Clave Actual Incorrecta";
		}
	}else{
		mensajeClave.value = "Debes rellenar todos los cuadros";
	}
}

function limpiarDatos()
{
	nombre.value = persona.value.nombre;
	apellido.value = persona.value.apellido;
	email.value = persona.value.correo;
	cel.value = persona.value.cel;
	nacio.value = persona.value.nacio;
	fechaNacio.value = persona.value.fechaN;
	imagen.value = " ";
}

function modificarDatos()
{	
	if(fechaNacio.value.trim().length == 10)
	{
		fechaNacio.value = fechaNacio.value.substr(6) + fechaNacio.value.substr(2,4) + fechaNacio.value.substr(0,2);
	}

	var aux = "{\"id\":" + GlobalE.idPerson.value + ",";
	aux = aux + "\"nombre\": \"" + nombre.value + "\",";
	aux = aux + "\"apellido\": \"" + apellido.value + "\",";
	aux = aux + "\"cel\": \"" + cel.value + "\",";
	aux = aux + "\"correo\": \"" + email.value + "\",";
	aux = aux + "\"imagen\": \"" + imagen.value + "\",";
	aux = aux + "\"nacimiento\": \"" + fechaNacio.value + "\"}";
	aux = encodeURIComponent(aux);

	fetch('http://loop.inhandy.com/loop.php?editarDatosPersona=' + aux, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("modificarDatos: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		load(GlobalE.idPerson.value);
	});
}

module.exports = {
	tag: tag,
	submit: submit,
	persona: persona,
	leftPage: leftPage,
	perfilPage: perfilPage,
	currentPage: currentPage,
	nombre: nombre,
	apellido: apellido,
	cel: cel,
	nacio: nacio,
	email: email,
	clave: clave,
	fechaNacio: fechaNacio,
	loginUser: loginUser,
	mensajeError: mensajeError,
	mensajeClave: mensajeClave,
	claveAct: claveAct,
	nuevaClave1: nuevaClave1,
	nuevaClave2: nuevaClave2,
	limpiarDatos: limpiarDatos,
	limpiarClaves: limpiarClaves,
	modificarClave: modificarClave,
	modificarDatos: modificarDatos,
};