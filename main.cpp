#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	char r = 's';
	int op = 0;
	int arreglo[];
	int size = 0;
	int numero = 0;
	while(r== 's'|| r=='S'){
		cout << "1.Ejercicio 1\n"<<"2.Ejercicio 2\n"<<"3.Salir \n";
		cout << "Ingrese su opcion: \n";
		cin>> op;
		switch(op){
			case 1:
			cout<<"Ingrese el grado mas alto del polinomio: ";
			cin >> size;
			for(int i = size; i>=size;i--){
				cout <<"Ingrese el polinomio de x^"<<i<<":";
				cin >> numero;
				arreglo[i] = numero;
			}
			
			break;
			case 2:
			break;
			default:
			break;
		}
	}
}
