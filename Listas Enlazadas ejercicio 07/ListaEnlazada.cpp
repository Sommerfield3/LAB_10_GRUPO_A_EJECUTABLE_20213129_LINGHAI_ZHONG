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
		cout<<endl<<"Posición no válida."<<endl;
		return;
	}
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
void ListaEnlazada::ordenarAscendentemente(){
	this->tamList();
	if (longitudList==0){
		cout<<endl<<"La lista no contiene elementos."<<endl;
		return;
	}
	else if (longitudList==1){
		return;
	}
	else if (longitudList>1){
		int activ=0;
		Nodo *aux1=cabeza;
		Nodo *aux2=NULL;
		Nodo *aux3=NULL;
		int tam=longitudList;
		for (int i=1;i<longitudList;i++){
			int activ=0;
			aux1=cabeza;
			aux2=NULL;
			aux3=NULL;
			for (int j=1;j<=tam;j++){
				if (activ==1){
					aux3=aux2;
				}
				aux2=aux1;
				aux1=aux1->siguienteNodo;
				if ((aux2->datos)>=(aux1->datos)){
					if (j==1){
						aux2->siguienteNodo=aux1->siguienteNodo;
						aux1->siguienteNodo=aux2;
						cabeza=aux1;
					}
					else if (j>1){
						if (aux2=cabeza->siguienteNodo){
							aux3=cabeza;
							activ=1;
						}
						aux3->siguienteNodo=aux1;
						aux2->siguienteNodo=aux1->siguienteNodo;
						aux1->siguienteNodo=aux2;
					}
				}
			}
			tam--;
		}
	}
}
void ListaEnlazada::ordenarDescendentemente(){
	
}
