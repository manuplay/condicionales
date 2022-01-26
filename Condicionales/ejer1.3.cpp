/*Ejercicio 1: Escriba un programa que lea dos números y determine cuál de ellos es el mayor.
*/

#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"digite dos numeros: "; 
	cin>>n1>>n2;
	
	if(n1=n2){
		cout<<"ambos numeros son iguales";
	}
	
	else if(n1>n2){
		cout<<"el mayor en: "<<n1;
	}
	else{
		cout<<"el mayor es: "<<n2;
	}	
	
	return 0;
}
