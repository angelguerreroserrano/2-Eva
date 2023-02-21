#include<iostream>

using namespace std;

int main(){
	int lista[10], lista_ord[10], lista_mayor[3];
	int cont,i,j;
	int aux;
	
	//Primero pedimos los 10 numeros y los vamos guardando en lista
	for(cont=0;cont<10;cont++){
		cout<<"Dime el numero["<<cont<<"]: ";
		cin>>lista[cont];
	}
	//Mostramos la lista para ver que todo funciona correctamente
	cout<<"La lista de numeros es: ";
	for(cont=0;cont<10;cont++){
		cout<<lista[cont]<<" ";
	}
	
	//Creamos la variable lista_ord para ordenar la lista ahí
	lista_ord[10]=lista[10];
	//Ordenamos la lista
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(lista[j]<lista[j+1]){
				aux=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=aux;
			}
		}
	}
	//Mostramos la lista
	cout<<"\nLa lista ordenada es: ";
	for(cont=0;cont<10;cont++){
		cout<<lista[cont]<<" ";
	}
	
	//La variable lista_mayor contiene los tres numeros mayores. Que los sacamos de los tres primeros numeros de la listas ordenada.
	for(cont=0;cont<3;cont++){
		lista_mayor[cont]=lista_ord[cont];
	}
	//Mostramos la lista_mayor
	cout<<"\nLos tres numeros mayores son: ";
	for(cont=0;cont<3;cont++){
		cout<<lista_mayor[cont]<<" ";
	}
	return 0;
}
