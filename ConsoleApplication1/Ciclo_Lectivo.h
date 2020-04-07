#pragma once
#include <iostream>
#include <sstream>

class Ciclo_Lectivo
{
private:
	int annio;
	std::string ciclo;

public:
	Ciclo_Lectivo() :annio(0), ciclo("") {};
	Ciclo_Lectivo(int anno, std::string Ciclo) :annio{ anno }, ciclo{ Ciclo } {};
	virtual ~Ciclo_Lectivo() {};

	void setAnnio(int anno) { annio = anno; };
	void setCiclo(std::string Ciclo) { ciclo = Ciclo; };

	int getAnnio() { return annio; };
	std::string getCiclo() { return ciclo; };

	void modCiclo();
};

