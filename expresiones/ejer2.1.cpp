/*Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado = 0;
	
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	cout<<"digite el valor de c: "; cin>>c;
	cout<<"digite el valor de d: "; cin>>d;
	
	resultado = (a+b) / (c+d);
	
	cout<<"\nel resultado es: "<<resultado<<endl;
	
	return 0;
}
