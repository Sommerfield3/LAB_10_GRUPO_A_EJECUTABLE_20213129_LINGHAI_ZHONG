/*7. Desarrolle un algoritmo de ordenamiento que permita ordenar los elementos de forma
ascendente y descendente de acuerdo a la elección del usuario. Se debe poder simular
el ingreso de 10 mil elementos de forma aleatoria y ordenarlos en el menor tiempo
posible ( < 2 seg).*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include<cstdlib>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]) {
	ListaEnlazada list;
	int opcion;
	list.insertarNodo(2343);
	list.insertarNodo(14);
	list.insertarNodo(78);
	list.insertarNodo(327);
	list.imprimirTamList();
	list.imprimirLista();
	while (true){
		cout<<endl<<"¿De qué forma ordenar la lista?: "<<endl<<"1. Ascendtemente"<<endl<<"2. Descendentemente"<<endl;
		cout<<"Ingrese una opción numérica: ";
		cin>>opcion;
		if (opcion==1){
			list.ordenarAscendentemente();
			break;
		}
		else if(opcion==2){
			list.ordenarDescendentemente();
			break;
		}
		else{
			cout<<endl<<"Ingresar una opción válida."<<endl<<endl;
		}
	}
	list.imprimirTamList();
	list.imprimirLista();
	system("pause");
	return 0;
}

