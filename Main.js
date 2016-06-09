var Observable = require("FuseJS/Observable");
var GlobalE = require("GlobalElem");
			
var tag = Observable();
var currentPage = Observable("login");
var leftPage = Observable("calificacion");

var persona = Observable(
	new Person("", "","","","Assets/FuseLogo.png","0"));
var email = Observable();
var clave = Observable();

function Person(nombre, apellido, correo, cel, nacio, imagen, rol)
{
	var monthNames = ["", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"];

	var fecha = nacio.substr(8) + " de " + monthNames[parseInt(nacio.substr(5,2))] + " de " + nacio.substr(0,4);

	this.nombre = nombre.toUpperCase();;
	this.apellido = apellido.toUpperCase();;
	this.correo = correo;
	this.cel = cel;
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
			console.log("Something went wrong :(");
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
			console.log("Something went wrong :(");
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
		}
	});
}

module.exports = {
	tag: tag,
	persona: persona,
	submit: submit,
	currentPage: currentPage,
	leftPage: leftPage,
	email: email,
	clave: clave,
	loginUser: loginUser,
};