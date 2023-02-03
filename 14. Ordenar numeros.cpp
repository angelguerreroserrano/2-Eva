//Este programa ordena por el método de la burbuja

#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	//Reservo memeoria para un vector de numeros enteros
	//sin repeticion
	int numeros[5];
	//Leemos los 5 numeros
	int cont;
	for (cont=0;cont<5;cont++){
		printf("Dime un numero: ");
		scanf("%d", &numeros[cont]);
	}
	printf("\nLa lista desordenada es: ");
	for(cont=0;cont<5;cont++){
		printf("%d, ", numeros[cont]);
	}
	return 0;
}
