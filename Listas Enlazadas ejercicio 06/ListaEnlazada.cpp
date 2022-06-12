#include "ListaEnlazada.h"

ListaEnlazada::ListaEnlazada(){
	cabeza=NULL;
}

ListaEnlazada::~ListaEnlazada(){
	
}
void ListaEnlazada::tamList(){
	longitudList=0;
	if (cabeza==NULL){
		return;
	}
	Nodo* auxExtra=cabeza;
	while (auxExtra!=NULL){
		auxExtra=auxExtra->siguienteNodo;
		longitudList++;
	}
}
void ListaEnlazada::imprimirTamList(){
	this->tamList();
	cout<<endl<<"La lista contiene "<<longitudList<<" elemento(s), actualmente."<<endl;
}
void ListaEnlazada::insertarNodo(int datos){
	Nodo* nuevoNodo= new Nodo(datos);
	if (cabeza==NULL){
		cabeza=nuevoNodo;
		return;
	}
	Nodo* aux=cabeza;
	while (aux->siguienteNodo!=NULL){
		aux=aux->siguienteNodo;
	}
	aux->siguienteNodo=nuevoNodo;
}
void ListaEnlazada::insertarEnMedio(int datos,int posicion){
	Nodo* nuevoNodo= new Nodo(datos);
	this->tamList();
	if (longitudList>1 && posicion<longitudList && posicion>0){
		Nodo* aux1=cabeza;
		Nodo* aux2=NULL;
		while (posicion-->=1){
			aux2=aux1; /*posicion del elemento actual*/
			aux1=aux1->siguienteNodo;
		}
		aux2->siguienteNodo=nuevoNodo;
		nuevoNodo->siguienteNodo=aux1;
		return;
	}
	else{
		cout<<endl<<"Posici�n no v�lida."<<endl;
		return;
	}
}
bool ListaEnlazada::borrarElemento(int indice){
	this->tamList();
	Nodo *aux1=cabeza;
	Nodo *aux2=NULL;
	if (cabeza==NULL){
		cout<<endl<<"No se puede eliminar nada: la lista est� vac�a."<<endl;
		return true; 
	}
	else if (indice>longitudList || indice<1){
		cout<<endl<<"Ingrese un �ndice v�lido."<<endl;
		return false;
	}
	else if (indice==1){
		cabeza=cabeza->siguienteNodo;
		delete aux1;
		this->tamList();
		return true; 
	}
	while (indice-- >1){
		aux2=aux1;
		aux1=aux1->siguienteNodo; /*Avanzamos un elemento seg�n la lista en cada apuntador*/
	}
	aux2->siguienteNodo=aux1->siguienteNodo;/*Cambiamos el siguiente del nodo al que apunta aux2 por NULL*/
	delete aux1; /*Borramos el nodo seleccionado*/
	this->tamList();
	return true;
}
void ListaEnlazada::imprimirLista(){
	Nodo* aux=cabeza;
	if (cabeza==NULL){
		cout<<"La lista est� vac�a."<<endl;
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
