#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "Nodo.h"
class ListaEnlazada{
	Nodo* cabeza;
	int longitudList;
public:
	ListaEnlazada();
	~ListaEnlazada();
	void insertarNodo(int datos);
	void tamList();
	void imprimirTamList();
	bool insertarEnMedio(int datos,int posicion);
	void imprimirLista();
};

#endif
