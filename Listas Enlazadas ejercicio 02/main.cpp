/*2. Con la implementaci�n de la lista enlazada anterior, desarrolle una funci�n que
permita ingresar los elementos al inicio de todos los dem�s elementos. Tendr� que
modificar el comportamiento del puntero que tiene referencia al primer elemento para
que sea redireccionado al nuevo elemento por ingresar.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]){
	ListaEnlazada lista;
	cout<<"Ingresando los nuevos nodos al inicio de la lista y cambiando la referencia de cabeza a cada nuevo elemento ingresado: "<<endl<<endl;
	lista.insertarNodo(25);
	lista.insertarNodo(20);
	lista.insertarNodo(16);
	lista.insertarNodo(13);
	lista.insertarNodo(11);
	lista.imprimirLista();
	return 0;
}
