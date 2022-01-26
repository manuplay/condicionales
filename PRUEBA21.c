//directivas del preprocesador y variables

#include<stdio.h> //libreria

#define PI 3.1416 //macro

int y = 5; //cariable global

int main(){
	int x = 10;//variable local
	
	float suma = 0;
	
	suma = PI + x;
	
	printf("la suma es: %f",suma);

	return 0;
}
