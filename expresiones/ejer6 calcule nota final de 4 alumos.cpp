/*Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.
*/

#include<iostream>

using namespace std;

int main(){
	float e1,e2,e3,e4, resultado = 0;
	
	cout<<"digite el valor de e1: "; cin>>e1;
	cout<<"digite el valor de e2: "; cin>>e2;
	cout<<"digite el valor de e3: "; cin>>e3;
	cout<<"digite el valor de e4: "; cin>>e4;

	resultado = (e1 + e2 + e3 + e4) / 4;
	
	cout<<"\nel resultado es: "<<resultado<<endl;
	
	return 0;
}
