//Condicionales

#include<iostream>

using namespace std;

int main(){
	int edad;
	cout<<"Introduce tu edad: "; cin>>edad;
	if(edad>=18){
		//Rama Verdadera
		cout<<"Eres mayor de edad"<<endl;
	}
	else{
		//Rama Falsa
		cout<<"Eres menor de edad"<<endl;
	}
	return 0;
}
