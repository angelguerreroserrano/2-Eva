#include<iostream>
#include<stdio.h>	//Librer�a que nos permite utilizar algunas funciones del antiguo C++
using namespace std;

int main(){
	float y=4.35;
	int x;
	int *px;	//De esta manera guardas x y px. Pero px tendra los valores que tenga x
	x=3;
	px=&x;	//& equivale a la direcci�n de x
	printf("x=%d\n",x);
	printf("px=%x\n,",px);	//Aqu� ponemos %x porque queremos poner la direcci�n de x
	printf("nuemro1=%d, numero2=%f",x,y);	//Funciona como un cout. %d es un entero, %f en un decimal (float)
	return 0;
}
