#pragma once
#include <iostream>
#include <sstream>

class Curso
{
private:
	std::string codCarrera;
	std::string nomCurso;
	std::string tipCurso;
	int creditos;
	std::string requesitos;
	int horasSemanales;
	std::string estado;

public:
	Curso() : codCarrera(""), nomCurso(""), tipCurso(""), creditos(0), requesitos(""), horasSemanales(0), estado("") {};
	Curso(std::string cod, std::string nomC, std::string tipC, int cred, std::string req, int hora, std::string est) : codCarrera{ cod }, nomCurso{ nomC }, tipCurso{ tipC }, creditos{ cred }, requesitos{ req }, horasSemanales{ hora }, estado{ est } {};
	virtual ~Curso() {};
	
	void setCodCarrera(std::string cod) { codCarrera = cod; };
	void setNomCurso(std::string nomc) { nomCurso = nomc; };
	void setTipCurso(std::string tipc) { tipCurso = tipc; };
	void setCreditos(int cred) { creditos = cred; };
	void setRequesitos(std::string req) { requesitos = req; };
	void setHorasSemanales(int hora) { horasSemanales = hora; };
	void setEstado(std::string est) { estado = est; };

	std::string getCodCarrera() { return codCarrera; };
	std::string getNomCurso() { return nomCurso; };
	std::string getTipCurso() { return tipCurso; };
	int getCreditos() { return creditos; };
	std::string getRequesitos() { return requesitos; };
	int getHorasSemanales() { return horasSemanales; };
	std::string getEstado() { return estado; };

	void mostrarCurso();
	void modificar();
};

