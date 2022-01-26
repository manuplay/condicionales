/*Ejercicio 12: Hacer un menú que considere las siguientes opciones:
*/

#include<iostream>

using namespace std;

int main(){
	int opc;
	float n1,n2, resultado = 0;
	
	cout<<"\tBienvenido a tu calculadora"<<endl;
	cout<<"\n1.Sumar"<<endl;
	cout<<"2.Restar"<<endl;
	cout<<"3.Multiplicar"<<endl;
	cout<<"4.Dividir"<<endl;
	cout<<"5.Salir"<<endl;
	cout<<"\nDigite su Opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\tSumar";
			cout<<"\ndigite el valor de n1: "; cin>>n1;
			cout<<"digite el valor de n2: "; cin>>n2;
			
			resultado = n1 + n2;
			
			cout<<"\nel resultado es: "<<resultado<<endl;break;
			
		case 2:
			cout<<"\tRestar";
			cout<<"\ndigite el valor de n1: "; cin>>n1;
			cout<<"digite el valor de n2: "; cin>>n2;
			
			resultado = n1 - n2;
			
			cout<<"\nel resultado es: "<<resultado<<endl;break;
			
		case 3:
			cout<<"\tMultiplicar";
			cout<<"\ndigite el valor de n1: "; cin>>n1;
			cout<<"digite el valor de n2: "; cin>>n2;
			
			resultado = n1 * n2;
			
			cout<<"\nel resultado es: "<<resultado<<endl;break;
			
		case 4:
			cout<<"\tDividir";
			cout<<"\ndigite el valor de n1: "; cin>>n1;
			cout<<"digite el valor de n2: "; cin>>n2;
			
			resultado = n1 / n2;
			
			cout<<"\nel resultado es: "<<resultado<<endl;break;
			
		case 5:	break;
	}
	
	return 0;
}
