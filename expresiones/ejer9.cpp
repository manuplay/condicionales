/*Ejercicio 9: Realice un programa que calcule el valor que toma la siguiente
 funci�n para unos valores dados de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)*/
 
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float x,y, resultado = 0;
	
	cout<<"digite el valor de x: "; cin>>x;
	cout<<"digite el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nel resultado es: "<<resultado<<endl;
	
	return 0;
}

