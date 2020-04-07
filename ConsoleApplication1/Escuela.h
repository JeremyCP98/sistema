#pragma once
#include <iostream>
#include <sstream>

class Escuela
{
private:
	std::string nombre;
	std::string facultad;

public:
	Escuela() : nombre(""), facultad("") {};
	Escuela(std::string nom, std::string facu) : nombre{ nom }, facultad{ facu } {};
	virtual ~Escuela() {};

	void setNombre(std::string nom) { nombre = nom; };
	void setFacultad(std::string facu) { facultad = facu; };

	std::string getNombre() { return nombre; };
	std::string getFacultad() { return facultad; };

	void addProfesor();
	void mostrarPlan();
	void mostrarGrupo();
};

