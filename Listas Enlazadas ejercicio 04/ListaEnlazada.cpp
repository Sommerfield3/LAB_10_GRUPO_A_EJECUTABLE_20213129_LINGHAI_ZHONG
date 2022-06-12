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
		cout<<endl<<"Posicion no valida."<<endl;
		return;
	}
}
void ListaEnlazada::borrarElementoFinal(){
	this->tamList();
	Nodo *aux1=cabeza;
	Nodo *aux2=NULL;
	if (cabeza==NULL){
		cout<<endl<<"No se puede borrar nada: la lista está vacía."<<endl;
		return; 
	}
	else if (cabeza->siguienteNodo==NULL){
		cabeza=NULL;
		delete cabeza;
		return; 
	}
	int tam;
	tam=longitudList;
	while(tam-->1){
		aux2=aux1;
		aux1=aux1->siguienteNodo;
	}
	aux2->siguienteNodo=aux1->siguienteNodo;
	delete aux1;
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
