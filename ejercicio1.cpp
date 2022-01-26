/*Ejercicio 1: Escribe un programa que lea de la entrada estándar dos 
números y muestre en la salida estándar su suma, resta, multiplicación
 y división.*/
 
 #include<iostream>
 
 using namespace std;

int main(){
	int n1,n2, suma = 0, resta = 0, multiplicacion=0, division=0;
	
	cout<<"digite un numero: ", cin>>n1;
	cout<<"digite otro numero: ",cin>>n2;
	
	//suma = n1 + n2;
	//resta = n1 - n2;
	//multiplicacion = n1 * n2;
//	division = n1 / n2;
	
	cout<<"\nla suma es: "<<n1 + n2<<endl;
	cout<<"la resta es: "<<n1 - n2<<endl;
	cout<<"la multiplicacion es: "<<n1 * n2<<endl;
	cout<<"la division es: "<< n1 / n2<<endl;
	
	return 0;
}
