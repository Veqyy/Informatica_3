/*Esercizio 21
Bosi Alessandro 3INA */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1;
	int n2;
	n1=input_n(n);
	n2=input_n();
	if(n1>n2){
		printf("%d",n1);
	}else{
		printf("%d",n2);
	}
}
int input_n(int n){
	do{
	printf("inserisci un numero da 0 a 100: ");
	scanf("%d",&n);
	}while(n<0 || n>100)
	return n,n;
}
