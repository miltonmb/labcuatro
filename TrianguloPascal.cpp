#include "TrianguloPascal.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

TrianguloPascal::~TrianguloPascal(){
	std::cout<<"Se ha eliminado";
}
TrianguloPascal::TrianguloPascal(int s){
	lineas = s;
}
void TrianguloPascal::imprimir(){
	int num=0; 
    for(int i=0;i<lineas;i++) { 
   		for (int y = 0; y < lineas-i; ++y){
   			std::cout<<" ";
   		}
        num=1; 
        for(int j=0;j<=i;j++) { 
        	if (num%2==0){  
  				std::cout << " ◌";
        	}
        	else{
  				std::cout << " ◉";
        	}
            num = num * (i - j) / (j + 1); 
        } 
     		std::cout<<"\n";
    } 
}
