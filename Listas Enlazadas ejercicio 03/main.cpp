/*3. Desarrolle una función que permita ingresar elementos en el medio de dos elementos
de la lista enlazada, como se muestra en la siguiente imagen. Solicite que se ingrese
una posición válida dentro de la lista y permita que el valor ingresado se pueda anexar
en esa posición.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]){
	int dato,posicion, opcion;
	bool posicionValida, terminar;
	terminar=false;
	ListaEnlazada list;
	list.insertarNodo(41);
	list.insertarNodo(8);
	list.insertarNodo(234);
	list.insertarNodo(145);
	list.insertarNodo(73);/*Creo una lista con elementos para usar la funcion de ingreso de elementos entre posiciones.*/
	list.imprimirTamList();
	list.imprimirLista();
	while (true){
		cout<<endl<<"Ingrese un valor entero a ingresar en la lista: ";
		cin>>dato;
		while (true){
			cout<<"Ingrese la posicion en lista (se cuenta desde 1 y debe estar entre 2 posiciones) luego de la cual ingresar el valor: ";
			cin>>posicion;
			posicionValida=list.insertarEnMedio(dato,posicion);
			if (posicionValida==1){
				break;
			}
		}
		list.imprimirTamList();
		list.imprimirLista();
		while (true){
			cout<<endl<<"¿Agregar otro elemento? "<<endl<<"1. Sí"<<endl<<"2. No"<<endl<<"Ingresar opción por número: ";
			cin>>opcion;
			if(opcion==1){
				break;
			}
			else if(opcion==2){
				terminar=true;
				break;
			}
			else{
				cout<<"Opción no válida. "<<endl;
			}
		}
		if(terminar==true){
			break;
		}
	}
	return 0;
}
	
