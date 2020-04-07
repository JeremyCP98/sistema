#pragma once

template <typename T>

struct Nodo
{
	T* obj;
	Nodo* next;

	Nodo() : next(nullptr), obj(nullptr) {};
	Nodo(T*) : T(obj) {};
	virtual ~Nodo() {};

	void setNext(Nodo* n) { next = n; };
	void setObj(T* ob) { obj = ob; };

	Nodo* getNext() { return next; };
	T* getObj() { return obj; };

	void mostrar();
}; 
typedef struct nodo;