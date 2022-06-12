#include "ListaEnlazada.h"

ListaEnlazada::ListaEnlazada(){
	cabeza=NULL;
}

ListaEnlazada::~ListaEnlazada(){
	
}
void ListaEnlazada::insertarNodo(int datos){
	Nodo* nuevoNodo= new Nodo(datos);
	nuevoNodo->siguienteNodo=cabeza;
	cabeza=nuevoNodo;
	
	/*Nodo ingresado va al inicio*/
}
void ListaEnlazada::imprimirLista(){
	Nodo* aux=cabeza;
	if (cabeza==NULL){
		cout<<"La lista está vacía."<<endl;
		return; 
	}
	cout<<"Los elementos de la lista enlazada son: ";
	while (aux!=NULL){
		if ((aux->siguienteNodo)!=NULL){
			cout<<aux->datos<<", ";
		}
		else{
			cout<<aux->datos;
		}
		aux=aux->siguienteNodo;
	}
	cout<<endl;
}
