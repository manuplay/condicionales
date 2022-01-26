/*Ejercicio 4: Ejecute el programa del ejercicio anterior con entradas
 erróneas y observe los resultados. Por ejemplo, introduzca un dato de 
 tipo carácter cuando se espera un dato de tipo entero.*/
 
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







