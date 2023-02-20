#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int cuenta_letras(char *p_nombre){
    int cont=0;
    while(*(p_nombre+cont)!='\0'){
        cont++;    
    }
    return cont;
   
}

int main(){
    char *reyes[3];
    char nombre[10];
    int longitud;
    int cont,cont1,fil,rep;
    char *aux;
    for(cont=0;cont<3;cont++){
        //Pedimos el nombre del rey mago
        cout<<"\nDime el nombre del rey mago "<<cont<<": ";
        cin>>nombre;
        printf("\nHas introducido %s",nombre);
        //Verificamos que lo hemos leido bien mostrandolo
        //por pantalla
        cout<<"\nHas introducido el nombre de "<<nombre;
        //Contamos cuantas letras tiene el nombre
        longitud=cuenta_letras(nombre);    
        //Lo deletreamos en vertical
        //for(cont=0;cont<longitud;cont++){
        //    printf("\n%c",*(nombre+cont));
        //}
        //reservamos memoria para el nombre
        reyes[cont]=(char *) malloc((longitud+2)*sizeof(char));
        printf("\nLongitud= %d",longitud);
        //Trasladamos la palabra letra a letra
        for(cont1=0;cont1<=longitud;cont1++){
            *(*(reyes+cont)+cont1)=nombre[cont1];
            printf("\nTrasladada la letra %c",*(*(reyes+cont)+cont1));
        }
    }
    //Comprobación
    cout<<endl;
    cout<<"***********************************"<<endl;
    cout<<"*        The magic Kings          *"<<endl;
    cout<<"***********************************"<<endl;
    for(cont=0;cont<3;cont++){
        printf("%s\n",reyes[cont]);    
    }
    /*Para ordenarlos utilizamos el metodo burbuja.ç
    Lo que se hace es ir comparando cada variable con el de su derecha y si no estan ordenadas
    las cambiamos. Así pasando de uno en uno. De manera que hay que hacerlo n-1 veces.*/
    for(rep=0;rep<2;rep++){
	    for(fil=0;fil<2;fil++){
	    	//Para saber si una letra esta en orden alfabetico con otra. Se compara si es mayor o menor. (C++ utiliza el numeor ACI).
	    	if(*(*(reyes+fil))>*(*(reyes+fil+1))){
	    		//Hay que utilizar la variable auxiliar para poder intercambiar dos variables
	    		aux=reyes[fil];
	    		reyes[fil]=reyes[fil+1];
	    		reyes[fil+1]=aux;
			}
		}
	}
	cout<<"\nLos reyes magos bien ordenados: "<<endl;
	cout<<reyes[0]<<endl;
	cout<<reyes[1]<<endl;
	cout<<reyes[2];

    return 0;
}
