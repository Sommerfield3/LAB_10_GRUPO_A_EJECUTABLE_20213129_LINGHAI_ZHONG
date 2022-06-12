/*6. Dado una posici�n v�lida dentro de la lista, permita al usuario eliminar un elemento
de cualquier posici�n sin perder referencia de los dem�s elementos.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include <random>
#include "ListaEnlazada.h"
using namespace std;

int main (int argc, char *argv[]){
	int limite=10000;/*Para conseguir los valores, usamos un l�mite ya que ser�n pseudoaleatorios.*/
	int opc,indice;
	bool validar,salir;
	srand(time(0));
	ListaEnlazada list;
	for(int i = 0; i<10; i++) { //generate 10 random numbers
		list.insertarNodo(rand()%limite);
	}
	while (true){
		list.imprimirTamList();
		list.imprimirLista();
		while (true){
			cout<<"Ingrese el �ndice del elemento a eliminar de la lista (comienza en 1, en caso de tener elementos): ";
			cin>>indice;
			validar=list.borrarElemento(indice);
			if (validar==true){
				break;
			}
		}
		cout<<endl<<endl<<"Datos actualizados: "<<endl;
		list.imprimirTamList();
		list.imprimirLista();
		if (list.longitudList==0){
			cout<<"No hay m�s elementos por eliminar"<<endl;
			break;
		}
		else{
			while (true){
				cout<<endl<<"�Desea eliminar otro elemento?: "<<endl<<"1. S�"<<endl<<"2. No"<<endl<<"Ingrese la opci�n num�rica: ";
				cin>>opc;
				if (opc==1){
					break;
				}
				else if (opc==2){
					salir=true;
					break;
				}
				else{
					cout<<"Opci�n no v�lida."<<endl<<endl;
				}
			}
		}
		if (salir==true){
			break;
		}
	}
	system("pause");
	return 0;
}
	
