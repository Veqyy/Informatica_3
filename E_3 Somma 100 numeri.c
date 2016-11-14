/*Problema n3: Fare la somma dei primo cento numeri e indicarne il risultato */
#include<stdio.h>
main()
{
	int S; // Indica la somma effettuata per i primi cento numeri
	int I; // Indica la variabile di lavoro
	S=0;
	I=1;
	while(I<=100){
		S=S+I;
		I=I+1;
	}
	 printf("La somma dei primi cento numeri e': %d",S);    
}
