/*Ejercicio 3: Realice un programa que lea un valor entero y determine si 
se trata de un número par o impar.
*/

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"digite un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"el numero es cero";
	}
	else if(numero%2==0){
		cout<<"el numero es par: ";
	}
	else{
		cout<<"el numero es inpar: ";
	}
	
	return 0;
}
