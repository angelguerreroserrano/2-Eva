#include<iostream>

using namespace std;

int espitagorica(int num1,int num2,int num3){
	//Decidimos cual es la hipotenusa
	int c1,c2,hip;
	int respuesta=0;
	if (num1>num2 && num1>num3){
		hip=num1;
		c1=num2;
		c2=num3;
	}
	else if (num2>num1 && num2>num3){
		hip=num2;
		c1=num1;
		c2=num3;
	}
	else{
		hip=num3;
		c1=num1;
		c2=num2;
	}
	if (hip*hip==c1*c1+c2*c2){
		respuesta=1;
	}
	return respuesta;
}

int main(){
	int c1,c2,hip;
	int respuesta;
	int num1,num2,num3;
	cout<<"Introduce 3 numeros y te dire si son una terna pitagorica:"<<endl;
	cout<<"Primer numero: "; cin>>num1;
	cout<<"Segundo numero: "; cin>>num2;
	cout<<"Tercer numero: "; cin>>num3;
	respuesta=espitagorica(num1,num2,num3);
	if (respuesta==0){
		cout<<num1<<", "<<num2<<" y "<<num3<<" NO son una terna pitagorica.";
	}
	else{
		cout<<num1<<", "<<num2<<" y "<<num3<<" SI es una terna pitagorica.";
	}
	return 0;
}
