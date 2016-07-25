var Observable = require('FuseJS/Observable');
var Timer = require('FuseJS/Timer');
var Camera = require('FuseJS/Camera');
var GlobalE = require("GlobalElem");

var persona = Observable();
var postPersona = Observable({"imagen":"","perfil":""});
var posts = Observable({"imagen":"","perfil":""});

var imagen = Observable();
var base64String = Observable();
var textPublica = Observable("");

var timer = Timer.create(function(){
	getPersona()}, 1000, true);

function getPersona()
{
	if(GlobalE.login.value > 0)
	{
		cargarPerfilPersona(GlobalE.idPerson.value);
		cargarPostRamasPersona();

		if(GlobalE.login.value > 1)
		{
			GlobalE.login.value = 0;
		}else{
			GlobalE.login.value ++;	
		}
	}
}

function cargarPerfilPersona(id)
{
	fetch('http://loop.inhandy.com/loop.php?cargarPerfilPersona', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: JSON.stringify({"id": id})
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarPerfilPersona: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var d = new Date();
		data.imagen = data.imagen + "&t=1" + d.getTime();
		data.nombre = data.nombre.toUpperCase();
		data.apellido = " " + data.apellido.toUpperCase();
		data["numRamas"] = data.ramas.length;
		persona.value = data;

		cargarFotosxPersona(id);
	});
}

function cargarFotosxPersona(id)
{
	fetch('http://loop.inhandy.com/loop.php?cargarFotosxPersona', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: JSON.stringify({"id": id})
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarFotosxPersona: Something went wrong :(");
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
				var d = new Date();

				if(nuevo.imagen.length > 0)
				{
					nuevo.imagen = nuevo.imagen + "&t=" + d.getTime() + aux.length;
					console.log("Foto: " + nuevo.imagen);
				}

				nuevo["perfil"] = persona.value.imagen;
				nuevo["nombre"] = persona.value.nombre;
				aux.add(nuevo);
			}
		});

		postPersona.replaceAll(aux);
	});
}

function cargarPostRamasPersona()
{
	fetch('http://loop.inhandy.com/loop.php?cargarPostRamasPersona', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: JSON.stringify({"id": GlobalE.idPerson.value})
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("cargarPostRamasPersona: Something went wrong :(");
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
				var d = new Date();

				if(nuevo.imagen.length > 0)
				{
					nuevo.imagen = nuevo.imagen + "&t=" + d.getTime() + aux.length;
					console.log("Post: " + nuevo.imagen);
				}

				nuevo["pagina"] = 0;
				nuevo["indice"] = aux.length;
				nuevo["numComments"] = nuevo.comentario + " comentarios";
				nuevo["comentarios"] = Observable();
				nuevo["nuevoC"] = Observable("");
				aux.add(nuevo);
			}
		});

		posts.replaceAll(aux);
	});
}

function cargarComentarios(arg)
{
	console.log('http://loop.inhandy.com/loop.php?FEEDCOMMENTGET=' + arg.data.id 
		+ '&PAGINA=' + arg.data.pagina);
	fetch('http://loop.inhandy.com/loop.php?FEEDCOMMENTGET=' + arg.data.id 
		+ '&PAGINA=' + arg.data.pagina, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("FEEDCOMMENTGET: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		console.log("CargarComentario");
		var keys = Object.keys(data);
		var aux = Observable();
		var auxiliarN = Observable(); 
		var auxiliar = posts.getAt(arg.data.indice);

		keys.forEach(function(key, index)
		{
			if (index >= aux.length)
			{
				var nuevo = data[key];

				data.comment.forEach(function(e)
				{
					console.log("Comentario: " + e.comentario);
					auxiliarN.add(e);
				});
			}
		});

		for( var i=0; i < auxiliar.comentarios.length; i++)
		{
			auxiliarN.add(auxiliar.comentarios.getAt(i));
		}

		auxiliar.comentarios = auxiliarN;
		auxiliar.pagina = data.siguiente_indice;
		
		posts.replaceAt(arg.data.indice,auxiliar);
	});
}

function takePicture()
{
	Camera.takePicture({targetWidth: 1000, targetHeight: 1000}).then(function(file){
		imagen.value = file;
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

function limpiarImagen()
{
	textPublica.value = "";
}

function mostrarMiPerfil()
{
	cargarPerfilPersona(GlobalE.idPerson.value);
}

function mostrarPerfil(arg)
{
	cargarPerfilPersona(arg.data.persona);
}

function crearPost()
{
	fetch('http://loop.inhandy.com/loop.php?crearPosteo=', {
		method: 'POST',
		headers: { "Content-type": "application/json"},
		body: JSON.stringify({
			id: GlobalE.idPerson.value,
			texto: textPublica.value,
			imagen: base64String
		})
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("crearPosteo: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		console.log("guardado" + data.estado);
		cargarPostRamasPersona();
	});
}

function crearComentario(arg)
{
	fetch('http://loop.inhandy.com/loop.php?FEEDCOMMENTADD=' + arg.data.id 
		+ '&UID=' + GlobalE.idPerson.value + '&TXT=' + arg.data.nuevoC.value, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("crearComentario: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		var aux = posts.getAt(arg.data.indice);
		
		aux.comentarios.add({"nombre":persona.value.nombre,"id_usuario":GlobalE.idPerson.value,
			"comentario":aux.nuevoC.value,"fecha":"Ahora"});
		
		aux.nuevoC.value = "";
		posts.replaceAt(arg.data.indice,aux);
	});
}

function darLike(arg)
{
	fetch('http://loop.inhandy.com/loop.php?FEEDLIKE=' + GlobalE.idPerson.value
		+ '&FID=' + arg.data.id, {
		method: 'GET',
		cache: 'default',
		headers: { "Content-type": "application/json"}
	})
	.then(function(result)
	{
		if (result.status !== 200)
		{
			console.log("FEEDLIKE: Something went wrong :(");
			return;
		}
		return result.json();
	})
	.then(function(data)
	{
		if(data.status == "ok")
		{
			var aux = posts.getAt(arg.data.indice);

			aux.likes = arg.data.likes + 1;
			posts.replaceAt(arg.data.indice,aux);
		}
	});
}

module.exports = {
	persona: persona,
	posts: posts,
	imagen: imagen,
	textPublica: textPublica,
	postPersona: postPersona,

	darLike: darLike,
	crearPost: crearPost,
	takePicture: takePicture,
	limpiarImagen: limpiarImagen,
	mostrarPerfil: mostrarPerfil,
	mostrarMiPerfil: mostrarMiPerfil,
	crearComentario: crearComentario,
	cargarComentarios: cargarComentarios,
};