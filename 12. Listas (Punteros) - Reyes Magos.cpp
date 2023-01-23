/*
En este programa quiero guardar el nombre de los tres reyes magos
Para ello, hay que tener en cuenta el número de letras (M E L C H O R \0) (G A S P A R \0) (B A L T A S A R \0)
En la variable reyes, guardará los tres nombres, cada uno con una dirección.
Dentro de cada dirección, estará la dirección de cada rey.
*/

#include<stdio.h>
#include<iostream>

using namespace std;

int cuenta_letras(char *p_nombre){
	int longitud, cont=0;
	while(*(p_nombre+cont)!='\0'){
		longitud++;
		cont++;
	}
	
	return longitud;
}

int main(){
	char *reyes[3];
	char nombre[10];
	int longitud, cont;
	
	cout<<"Dime el nombre del primer rey mago: "; cin>>nombre;
	cout<<"\nHas introducido el nombre de "<<nombre<<endl;
	longitud=cuenta_letras(nombre);
	for (cont=0;cont<longitud;cont++){
		printf("%c\n",*(nombre+cont));
		malloc();	//memory allocation
	}
	printf("Longitud = %d", longitud);
	return 0;	
}
