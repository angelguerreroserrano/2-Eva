#include<iostream>

using namespace std;

int main(){
	int lista[10], lista_ord[10], lista_mayor[3], lista_par[10];
	int cont,i,j,n_pares=0;
	int aux;
	int suma,media;
	
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
	
	//Creamos la variable lista_ord para ordenar la lista ahi.
	//Lo tenemos que hacer de numero en numero
	for(cont=0;cont<10;cont++){
		lista_ord[cont]=lista[cont];
	}
	//Ordenamos la lista
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(lista_ord[j]<lista_ord[j+1]){
				aux=lista_ord[j];
				lista_ord[j]=lista_ord[j+1];
				lista_ord[j+1]=aux;
			}
		}
	}
	//Mostramos la lista
	cout<<"\nLa lista ordenada es: ";
	for(cont=0;cont<10;cont++){
		cout<<lista_ord[cont]<<" ";
	}
	
	//La variable lista_mayor contiene los tres numeros mayores.
	//Que los sacamos de los tres primeros numeros de la listas ordenada.
	for(cont=0;cont<3;cont++){
		lista_mayor[cont]=lista_ord[cont];
	}
	//Mostramos la lista_mayor
	cout<<"\nLos tres numeros mayores son: ";
	for(cont=0;cont<3;cont++){
		cout<<lista_mayor[cont]<<" ";
	}
	
	//Creamos la variable lista_par para ir añadiendo los numeros pares de uno en uno y ordenados
	for(cont=0;cont<10;cont++){
		if((lista_ord[cont]%2)==0){
			lista_par[n_pares]=lista_ord[cont];
			n_pares++;
		}
	}
	cout<<"\nLos tres primeros pares son: ";
	for(cont=0;cont<3;cont++){
		cout<<lista_par[cont]<<" ";
	}
	
	//Media de los tres valores mayores
	for(cont=0;cont<3;cont++){
		suma=suma+lista_ord[cont];
	}
	media=(suma/3);
	cout<<"\nLa media de los tres valores mayores es de: "<<media;
	return 0;
}
