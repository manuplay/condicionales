/*Ejercicio 3: Realice un programa que lea de la entrada est�ndar los 
siguientes datos de una persona:

	Edad: dato de tipo entero.
 	Sexo: dato de tipo car�cter.
 	Altura en metros: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida est�ndar.*/

 #include<iostream>
 
 using namespace std;
 
 int main(){
 	int edad;
 	char sexo[10];
 	float altura;
 	
 	cout<<"digite su edad: "; cin>>edad;
 	cout<<"digite su sexo: "; cin>>sexo;
 	cout<<"digite su altura: "; cin>>altura;
 	
 	cout<<"\nEdad "<<edad<<endl;
 	cout<<"Sexo: "<<sexo<<endl;
 	cout<<"Altura en metros: "<<altura<<endl;
 	
 	return 0;
 }

