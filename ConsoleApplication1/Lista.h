#pragma once
#include <iostream>
#include <sstream>
#include "Nodo.h"

class Lista
{
private:
	nodo* head;
	int numNodos;

public:
	Lista() : head(NULL), numNodos(0) {};
	virtual ~Lista() {};

	nodo* getHead() { return head; };

	void mostrar();
	void insertar();
};

