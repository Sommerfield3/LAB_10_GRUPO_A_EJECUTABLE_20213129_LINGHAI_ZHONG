/*4. Elabore una función que permita eliminar el último elemento de una lista enlazada.
(Evite copiar los elementos en una nueva lista para completar la eliminación del
elemento )*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]){
	ListaEnlazada list;
	list.insertarNodo(3);
	list.insertarNodo(546);
	list.insertarNodo(97);
	list.insertarNodo(15);
	list.insertarNodo(763);
	list.insertarNodo(802);
	list.imprimirTamList();
	list.imprimirLista();
	cout<<endl<<"Eliminando el último elemento. "<<endl;
	list.borrarElementoFinal();
	list.imprimirTamList();
	list.imprimirLista();
	list.insertarNodo(326);
	list.imprimirTamList();
	list.imprimirLista();
	return 0;
}
