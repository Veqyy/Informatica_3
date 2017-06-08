/*Esercizio 22
Bosi Alessandro 3INA */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a;
	int b;
	int s;
	int p;
	int somma_n;
	int prodotto_n;
	printf("Inserisci il valore di A ");
	scanf("%d",&a);
	printf("Inserisci il valore di B ");
	scanf("%d",&b);
	s=somma_n(a,b);
	p=prodotto_n(a,b);
	printf("%d",s);
	printf("%d",p);
}
int somma_n(int n1, int n2){
	int s;
	s=n1+n2;
	return s;
}

int prodotto_n(int n1, int n2){
	int p;
	p=n1*n2;
	return p;
}
