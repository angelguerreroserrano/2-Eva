//Factorial de un número

#include<iostream>

using namespace std;

int main(){
	int num, factorial = 1;
	cout<<"Introduce un número para saber su factorial: "; cin>>num;
	for(int j = 1; j<=num; j++){
		factorial = factorial * j;
	}
	cout<<factorial;
	return 0;
}
