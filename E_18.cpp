/*Esercizio 18
Bosi Alessandro 3INA */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int i1;
	int a;
	int v[100];
	i1=0;
	for(i=9;i>i1;i--){
		a=v[i];
		v[i]=v[i1];
		v[i1]=a;
	}
}
