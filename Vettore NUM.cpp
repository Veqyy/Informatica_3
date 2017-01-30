/*Scrivere un programma in pseudocodifica e successivamente in linguaggio C, dato un vettore di k elementi con k compreso fra n1 e n2 con n2 minore di mille
e dispari ed uno scalare(variabile semplice) NUM, effettui il prodotto tra lo scalare ed il vettore. */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main(){
	int n1;
	int n2;
	int i;
	int k;
	int vettore[1000];
	int NUM;
	do{
		printf("Inserisci il numero 1: ");
		scanf("%d",&n1);
	}while(n1<0 || n1>999);
	do{
		printf("Inserisci il numero 2: ");
		scanf("%d",&n2);
	}while(n2>1000 || n2<=n1);
	do{
		printf("Inserisci il valore di K: ");
		scanf("%d",&k);
   }while(k>n2 || k<n1);
	i=0;
	while(i<k){
		printf("Inserisci un numero: ");
		scanf("%d",&vettore[i]);
		i=i+1;
	}
	printf("Inserisci il valore di NUM per effettuare il prodotto: ");
	scanf("%d",&NUM);
	i=0;
	while(i<k){
		vettore[i]=vettore[i]*NUM;
		printf("%d  ",vettore[i]);
		i=i+1;
	}
}
