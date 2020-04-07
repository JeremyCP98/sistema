#pragma once
#include <iostream>
#include <sstream>

class Carrera
{
private:
	int codigo;
	std::string nombre;
	std::string grado;
	std::string estado;
	std::string escuela;
	std::string facultad;

public:
	Carrera() :codigo(0), nombre(""), grado(""), estado(""), escuela(""), facultad("") {};
	Carrera(int cod, std::string nom, std::string gra, std::string est, std::string esc, std::string facu) :codigo{ cod }, nombre{ nom }, grado{ gra }, estado{ est }, escuela{ esc }, facultad{ facu } {};
	virtual ~Carrera() {};

	void setCodigo(int cod) { codigo = cod; };
	void setNombre(std::string nom) { nombre = nom; };
	void setGrado(std::string gra) { grado = gra; };
	void setEstado(std::string est) { estado = est; };
	void setEscuela(std::string esc) { escuela = esc; };
	void setFacultad(std::string facu) { facultad = facu; };

	int getCodigo() { return codigo; };
	std::string getNombre() { return nombre; };
	std::string getGrado() { return grado; };
	std::string getEstado() { return estado; };
	std::string getEscuela() { return escuela; };
	std::string getFacultad() { return facultad; };

	void modCarrera();
	void mostrarCarrera();
	void operation2();
};

