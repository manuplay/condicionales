/*Ejercicio 11: Hacer un programa que simule un cajero automático con 
un saldo inicial de 1000 Dólares.
*/

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000,opc;
	float extra,saldo = 0,retiro;
	
	cout<<"\tBienvenido a su cajero virtual"<<endl;
	cout<<"\n1. Ingresar dinero en cuanta"<<endl;
	cout<<"2. Regresar dinero de la cuenta"<<endl;
	cout<<"3. Dinero en cuenta"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"\ndigite la Opcion: ";
	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\ndigite la cantidad de dinero que va a ingresar: ";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuanta: "<<saldo;break;
			
		case 2:
			cout<<"\nDigite la cantidad de dinero que va a retirar: ";
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				cout<<"No tiene esa cantidad de dinero ";break;
			}
			else{
				saldo = saldo_inicial-retiro;
				cout<<"Dinero actual en cuenta: "<<saldo;break;
			}
			
		case 3:
			saldo = saldo_inicial;
			cout<<"Dinero en cuenta: "<<saldo;
			
		case 4: break;
	}
	
	return 0;
}
