#pragma once
#include <iostream>
#include <sstream>

class Grupo
{
private:
	int nrc;
	int numGrupo;
	std::string horario;
	int capacidad;
	int cuposDisponibles;

public:
	Grupo() : nrc(0), numGrupo(0), horario(""), capacidad(0), cuposDisponibles(0) {};
	Grupo(int Nrc, int NumGrupo, std::string hora, int cap, int cupDis) : nrc{ Nrc }, numGrupo{ NumGrupo }, horario{ hora }, capacidad{ cap }, cuposDisponibles{ cupDis } {};
	virtual ~Grupo() {};

	void setNrc(int Nrc) { nrc = Nrc; };
	void setNumGrupo(int num) { numGrupo = num; };
	void setHorario(std::string hora) { horario = hora; };
	void setCapacidad(int cap) { capacidad = cap; };
	void setCuposDisponibles(int cupos) { cuposDisponibles = cupos; };

	int getNrc() { return nrc; };
	int getNumGrupo() { return numGrupo; };
	std::string getHorario() { return horario; };
	int getCapacidad() { return capacidad; };
	int getCuposDisponibles() { return cuposDisponibles; };

	void mostrarGrupo();
	void modGrupo();
};

