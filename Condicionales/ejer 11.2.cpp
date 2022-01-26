/*Ejercicio 12: Hacer un menú que considere las siguientes opciones:
*/

#include<iostream>

using namespace std;

int main(){
	int opc;
	float n1,n2, resultado = 0;
	
	cout<<"\tBienvenido a tu calculadora"<<endl;
	cout<<"1.Sumar"<<endl;
	cout<<"2.Restar"<<endl;
	cout<<"3.Multiplicar"<<endl;
	cout<<"4.Dividir"<<endl;
	cout<<"5.Salir"<<endl;
	cout<<"Digite su Opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"digite el valor de n1: "; cin>>n1;
			cout<<"digite el valor de n2: "; cin>>n2;
			
			resultado = n1 + n2;
			
			cout<<"\nel resultado es: "<<resultado<<endl;
		case 2:
		case 3:
		case 4:
		case 5:
		}
	
	return 0;
}
