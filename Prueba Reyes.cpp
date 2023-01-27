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
    int cont, j, i;
    for(cont=0;cont<3;cont++){
        //Pedimos el nombre del rey mago
        cout<<"Dime el nombre del rey mago "<<cont<<": ";
        cin>>nombre;
        //Verificamos que lo hemos leido bien mostrandolo
        //por pantalla
        cout<<"Has introducido el nombre de "<<nombre;
        //Contamos cuantas letras tiene el nombre
        longitud=cuenta_letras(nombre);    
        //Lo deletreamos en vertical
        
        
        for(i=0;i<longitud;i++){
            printf("\n%c",*(nombre+i));
        }
        
        
        //reservamos memoria para el nombre
        reyes[cont]=(char *) malloc((longitud+1)*sizeof(char));
        printf("\nLongitud= %d\n",longitud);
        printf("\n");
        //Trasladamos la palabra letra a letra
        for(j=0;j<=longitud;j++){
            *(*(reyes+cont)+j)=nombre[j];
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

    return 0;
}
