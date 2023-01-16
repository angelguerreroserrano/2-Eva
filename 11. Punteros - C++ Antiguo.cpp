#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	char letra[]="historia";
	int i;
	for(i=0;i<=7;i++){
		printf("Dame la letra[%d]=%c en la posicion=%x\n",i,letra[i],&letra[i]);
	}
	return 0;
}
