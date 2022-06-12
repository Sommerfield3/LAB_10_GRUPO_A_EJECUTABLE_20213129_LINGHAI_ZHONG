/*5. Desarrolle una función que permita eliminar el primer elemento de una lista sin perder
referencia de los demás elementos que ya se encuentran almacenados en la estructura
.(Evite copiar los elementos en una nueva lista para completar la eliminación de los
elementos)*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]){
	ListaEnlazada list;
	list.insertarNodo(52);
	list.insertarNodo(68);
	list.insertarNodo(230);
	list.insertarNodo(97);
	list.insertarNodo(30);
	list.insertarNodo(86);
	list.imprimirTamList();
	list.imprimirLista();
	cout<<endl<<"Eliminando el primer elemento de la lista actual. "<<endl;
	list.borrarElementoInicial();
	list.imprimirTamList();
	list.imprimirLista();
	cout<<endl<<"Insertando un nuevo elemento."<<endl;
	list.insertarNodo(326);
	list.imprimirTamList();
	list.imprimirLista();
	cout<<endl<<"Eliminando el primer elemento de la lista actual. "<<endl;
	list.borrarElementoInicial();
	list.imprimirTamList();
	list.imprimirLista();
	return 0;
}
