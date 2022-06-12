#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "Nodo.h"
class ListaEnlazada{
	Nodo* cabeza;
public:
	ListaEnlazada();
	~ListaEnlazada();
	void insertarNodo(int datos);
	void imprimirLista();
};

#endif
