/*Ejercicio 5: Escriba un programa que lea de la entrada estándar un 
carácter e indique en la salida estándar si el carácter es una vocal 
minúscula o no.
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"digite un caracter: ";
	cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"es una vocal minuscula: ";break;
		default : cout<<"no es una vocal minuscula: ";break;
	}
	
	return 0;
}

