/*Ejercicio 5: Escriba un fragmento de programa que intercambie los valores de dos variables.

x = 10
y = 5

x = 5
y = 10
*/

#include<iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"digite el valor de x: "; cin>>x;
	cout<<"digite el valor de y: "; cin>>y;

	/*
	x = 10
	y = 5
	
	aux = 10
	x = 5
	y = aux
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"\nEl nuevo valor de y es: "<<y<<endl;

	return 0;
}

