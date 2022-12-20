//Vamos a hacer un switch
/*
El switch lo que hace es que realiza una acción segun el valor de una variable.
*/

#include<iostream>

using namespace std;

int main(){
	int resp;
	cout<<"********************"<<endl;
	cout<<"*       MENU       *"<<endl;
	cout<<"********************"<<endl;
	cout<<"1. Volver a mostrar el menu"<<endl;
	cout<<"2. Despedirme"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Elige una opcion (1,2 o 3): "; cin>>resp;
	switch(resp){
		case 1:
			cout<<"********************"<<endl;
			cout<<"*       MENU       *"<<endl;
			cout<<"********************"<<endl;
			cout<<"1. Volver a mostrar el menu"<<endl;
			cout<<"2. Despedirme"<<endl;
			cout<<"3. Salir"<<endl;
			cout<<"Elige una opcion (1,2 o 3): "; cin>>resp;
			break;
		case 2:
			cout<<"Estas despedido"<<endl;
			break;
		case 3:
			break;
		default:
			cout<<"No has elegido ninguna opcion valida"<<endl;
	}
	return 0;
}
