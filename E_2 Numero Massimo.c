/*Problema n2: Dati tre numeri indicare fra questi qual è il numero che ha valore massimo */
#include<stdio.h>
main()
{
	int N1; // indica la variabile contenente il primo numero
	int N2; // indica la variabile contenente il secondo numero
 	int N3; // indica la variabile contenente il terzo numero
 	int Max; // indica la variabile di lavoro conentente il numero massimo fra i tre numeri principali
	printf("inserire il valore del primo numero: ");
	scanf("%d",&N1);
	printf("inserire il valore del secondo numero: ");
	scanf("%d",&N2);
	printf("inserire il valore del terzo numero: ");
	scanf("%d",&N3);
	if(N1>N2) //Indica se il valore del primo numero è maggiore del secondo numero
		Max=N1; //Se il primo numero è maggiore allora viene assegnato alla variabile Max
	else
		Max=N2; //Se il secondo numero è maggiore allora viene assegnato alla variabile Max
	if(N3>Max) //Indica se il valore del terzo numero è maggiore del numero massimo
		Max=N3; //Se il terzo numero è maggiore allora viene assegnato alla variabile Max
	printf("Il valore massimo fra i tre numeri e': %d",Max);
}
