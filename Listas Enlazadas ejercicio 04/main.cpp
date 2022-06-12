/*3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
en esa posición.*/
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
