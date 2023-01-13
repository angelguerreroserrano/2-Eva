#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	char letra;
	char *p_letra;	//El * es porque p_letra es un "puntero"
	letra='A';
	p_letra=&letra;
	printf("Letra= %c\n", letra);
	printf("pletra= %x", p_letra);
	return 0;
}
