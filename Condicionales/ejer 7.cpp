/*Ejercicio 7: Escriba un programa que solicite una edad (un entero)
 e indique en la salida est�ndar si la edad introducida est� en el 
 rango [18-25].
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"digite su edad: ";
	cin>>edad;
	//10 19 20 21 22 23 24 25
	if((edad>=18)&&(edad<=25)){
		cout<<"su edad esta en el rango de [18-25]";
	}
	else{
		cout<<"su edad no esta en el rango";
	}
	
	return 0;
}
