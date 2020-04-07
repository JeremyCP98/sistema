#pragma once
#include <iostream>
#include <sstream>

class Estudiante
{
private:
	std::string id;

public:
	Estudiante() : id("") {};
	Estudiante(std::string Id) : id{ Id } {};
	virtual ~Estudiante() {};

	void setId(std::string Id) { id = Id; };

	std::string getId() { return id; };
};

