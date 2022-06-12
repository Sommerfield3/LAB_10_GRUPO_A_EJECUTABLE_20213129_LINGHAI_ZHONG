/*1. Defina una lista enlazada que permita insertar elementos al final de todos los
elementos que ya se hayan ingresado. Por el momento no es necesario preservar un
orden, simplemente los elementos nuevos deben de ingresar como el último elemento.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]){
	ListaEnlazada lista;
	lista.insertarNodo(72);
	lista.insertarNodo(34);
	lista.insertarNodo(18);
	lista.insertarNodo(6);
	lista.insertarNodo(809);
	lista.imprimirLista();
	return 0;
}
