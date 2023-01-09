//Tabla de multiplicar del número que des

#include<iostream>

using namespace std;

int main(){
	int cont, num=0;
	cout<<"Dime un numero: ";cin>>num;
	cout<<endl;
	
	for(cont=1;cont<=10;cont++){
		cout<<num<<"*"<<cont<<"="<<num*cont<<endl;
		
	}
	
	return 0;
}
