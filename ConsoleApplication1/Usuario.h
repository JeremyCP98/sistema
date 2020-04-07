#pragma once
#include <iostream>
#include <sstream>

class Usuario
{
private:
	std::string id;
	std::string nombre;
	std::string clave;
	std::string tipUsuario;
	std::string estUser;
	int telefono;

public:
	Usuario() : id(""), nombre(""), clave(""), tipUsuario(""), estUser(""), telefono(0) {};
	Usuario(std::string Id, std::string nom, std::string cla, std::string tipU, std::string estU, int tel) : id{ Id }, nombre{ nom }, clave{ cla }, tipUsuario{ tipU }, estUser{ estU }, telefono{ tel } {};
	virtual ~Usuario() {};

	void setId(std::string Id) { id = Id; };
	void setNombre(std::string nom) { nombre = nom; };
	void setClave(std::string cla) { clave = cla; };
	void setTipUsuario(std::string tipU) { tipUsuario = tipU; };
	void setEstUser(std::string estU) { estUser = estU; };
	void setTelefono(int tel) { telefono = tel; };

	std::string getId() { return id; };
	std::string getNombre() { return nombre; };
	std::string getClave() { return clave; };
	std::string getTipUsuario() { return tipUsuario; };
	std::string getEstUser() { return estUser; };
	int getTelefono() { return telefono; };

	void modificarUser();
	void mostrarUser();
};

