#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "Nodo.h"
class ListaEnlazada{
	Nodo* cabeza;
public:
	int longitudList;
	ListaEnlazada();
	~ListaEnlazada();
	void insertarNodo(int datos);
	void tamList();
	void insertarEnMedio(int datos,int posicion);
	bool borrarElemento(int indice);
	void imprimirTamList();
	void imprimirLista();
};

#endif
