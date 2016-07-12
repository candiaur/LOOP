var Observable = require("FuseJS/Observable");
var Camera = require('FuseJS/Camera');
var GlobalE = require("GlobalElem");
			
var tag = Observable();
var currentPage = Observable("login");
var leftPage = Observable("calificacion");
var perfilPage = Observable("pagPerfil");
var mensajeError = Observable("");
var mensajeClave = Observable("");
var volverInicio = Observable(false);

var persona = Observable(new Person("", "","","","Assets/FuseLogo.png","0"));
var email = Observable();
var clave = Observable();
var claveAct = Observable("");
var nuevaClave1 = Observable("");
var nuevaClave2 = Observable("");

var nombre = Observable("");
var apellido = Observable("");
var cel = Observable("");
var nacio = Observable("");
var imagen = Observable();
var fechaNacio = Observable("");

var base64String = Observable();
var imgCargada = Observable(true);
var showImg = Observable(false);

autoLogin();

function autoLogin()
{
	if((localStorage.getItem("email") != null) && (localStorage.getItem("email").length > 0))
	{
		currentPage.value = "inicio";
		email.value = localStorage.getItem("email");
		clave.value = localStorage.getItem("password");
		loginUser();
	}
}

function logOut()
{
	localStorage.setItem("email","");
	localStorage.setItem("password","");
	currentPage.value = "login";
	volverInicio.value = true;
}

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
		if(data.imagen.trim().length > 0)
		{
			var d = new Date();
			data.imagen = data.imagen + "&t=" + d.getTime();

			showImg.value = true;
		}else{
			showImg.value = false;
		}
		
		persona.value = new Person(data.nombre, data.apellido, data.email, data.cel, data.nacimiento, data.imagen, data.rol);
		GlobalE.rolPerson.value = data.rol;
		GlobalE.login.value = true;

		if(data.rol == "0")
		{
			leftPage.value = "informe";
		}else{
			
			leftPage.value = "calificacion";
		}

		volverInicio.value = false;
	});
}

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
			
			localStorage.setItem("email",email.value);
			localStorage.setItem("password",clave.value);

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

					localStorage.setItem("password",clave.value);
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
	imgCargada.value = true;
}

function modificarDatos()
{
	if(fechaNacio.value.trim().length == 10)
	{
		fechaNacio.value = fechaNacio.value.substr(6) + fechaNacio.value.substr(2,4) + fechaNacio.value.substr(0,2);
	}

	if(imgCargada.value == true)
	{
		base64String = 0;
	}

	fetch('http://loop.inhandy.com/loop.php?editaPersona=', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: JSON.stringify({
			id: GlobalE.idPerson.value,
			nombre: nombre.value,
			apellido: apellido.value,
			cel: cel.value,
			correo: email.value,
			imagen: base64String,
			nacimiento: fechaNacio.value
		})
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
		localStorage.setItem("email",email.value);
		load(GlobalE.idPerson.value);
	});
}

function takePicture()
{
	Camera.takePicture({targetWidth: 1000, targetHeight: 1000}).then(function(file){
		imagen.value = file;
		imgCargada.value = false;
		CompressImage(file);
	});
}

function CompressImage(file)
{
	var reader  = new FileReader();
	
	reader.onloadend = function () {
		base64String = reader.result.split(',')[1];
	}

	if(file)
	{
		reader.readAsDataURL(file);
	}
}

module.exports = {
	tag: tag,
	submit: submit,
	persona: persona,
	showImg: showImg,
	imgCargada: imgCargada,

	//-- Page Control--
	leftPage: leftPage,
	perfilPage: perfilPage,
	currentPage: currentPage,
	volverInicio: volverInicio,

	//-- Datos Generales--
	cel: cel,
	email: email,
	clave: clave,
	nacio: nacio,
	imagen: imagen,
	nombre: nombre,
	apellido: apellido,
	fechaNacio: fechaNacio,

	//-- Modificación Clave--
	claveAct: claveAct,
	nuevaClave1: nuevaClave1,
	nuevaClave2: nuevaClave2,

	//-- Mensajes Error--
	mensajeError: mensajeError,
	mensajeClave: mensajeClave,

	//-- Funciones--
	logOut: logOut,
	loginUser: loginUser,
	takePicture: takePicture,
	limpiarDatos: limpiarDatos,
	limpiarClaves: limpiarClaves,
	modificarDatos: modificarDatos,
	modificarClave: modificarClave,
};