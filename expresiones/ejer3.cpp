/*Ejercicio 3: Escribe la siguiente expresi�n como expresi�n en C++: 
(a+(b/c))/(d+(e/f))
*/

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"digite el valor de a: "; cin>>a;
	cout<<"digite el valor de b: "; cin>>b;
	cout<<"digite el valor de c: "; cin>>c;
	cout<<"digite el valor de d: "; cin>>d;
	cout<<"digite el valor de e: "; cin>>e;
	cout<<"digite el valor de f: "; cin>>f;

	resultado = (a +(b/c))/(d +(e/f));
	
	cout.precision(3);
	cout<<"\nel resultado es: "<<resultado<<endl;
	
	return 0;
}




