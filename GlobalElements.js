var Observable = require('FuseJS/Observable');
var idPerson = Observable();
var rolPerson = Observable();
var instancia = Observable(1);
var login = Observable(false);

module.exports = {
	login: login,
	idPerson: idPerson,
	rolPerson: rolPerson,
	instancia: instancia
};