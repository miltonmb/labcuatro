#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	char r = 's';
	int op = 0;
	int size = 0;
	int numero = 0;
	void ruffini(int);
	while(r== 's'|| r=='S'){
		cout<<endl;
		cout << "1.Ejercicio 1\n"<<"2.Ejercicio 2\n"<<"3.Salir \n";
		cout << "Ingrese su opcion: \n";
		cin>> op;
		switch(op){
			case 1:{
				cout << "Ingrese el nivel mas alto del coeficiente:\n";
				cin >> size;
				ruffini(size);
	
			}			
				break;
			

			case 2:{
				break;
			}

			default:{
				break;
			}
		}
	}
}

void ruffini(int x){
	int arreglo[x];
	int arreglo_dos[x];
	int a = 0;
	for(int i = x; i>=0;i--){
		cout <<"Ingrese el polinomio de x^"<<i<<":\n";
		cin >> arreglo[i];
	}
	cout << "Ingrese a: ";
	cin >> a;
	cout <<endl;
	for(int i = x; i>=0; i--){
		if(i == x){
			arreglo_dos[i] = arreglo[i];
		i--;	
		}
		arreglo_dos[i] = a*arreglo_dos[i+1]+arreglo[i];
	}
	cout<<"El cociente es:";
	for(int i = x; i>=0;i--){
		if(i == 1){
			cout<<arreglo_dos[i]<<endl;
			break;
		}else{
			cout << arreglo_dos[i]<<"x^"<<i-1<<"+";
		}
	}
	cout<<"El residuo es: "<<arreglo_dos[0]<<endl;
	for(int i = x; i>=0;i--){
		if(i==0){
			cout<<arreglo[i]<<"|"<<a<<endl;
		}else{
			cout << arreglo[i]<<"\t";
		}
	}
	int y[x];
	for (int i = x;i>=0;i--){
		y[i] = 0;
	}
	for(int i = x; i>=0;i--){
		if(i == x){
			cout<<y[i]<<"\t";
		i--;
		}
		if(i==0){
		cout<<a*arreglo_dos[i+1]<<"|";
		break;
		}
		cout << a*arreglo_dos[i+1]<<"\t";
	}
	cout << endl;
	cout<<"----------------------------------"<<endl;
	for(int i= x;i>=0;i--){
		cout<<arreglo_dos[i]<<"\t";
	}
	cout <<endl;

}
