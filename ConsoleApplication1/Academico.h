#pragma once
#include <iostream>
#include <sstream>

class Academico
{
private:
	std::string gradoAcademico;
	std::string escuela;

public:
	Academico() : gradoAcademico(""), escuela("") {};
	Academico(std::string grado, std::string esc) : gradoAcademico{ grado }, escuela{ esc } {};
	virtual ~Academico() {};

	void setGradoAcademico(std::string grado) { gradoAcademico = grado; };
	void setEscuela(std::string esc) { escuela = esc; };

	std::string getGradoAcademico() { return gradoAcademico; };
	std::string getEscuela() { return escuela; };
};

