/*Problema n1: Date due variabili contenenenti due valori, scambiaer il contenuto delle due variabili */
#include <stdio.h>
main()
{
	int A; // Variabile che contiene il primo numero
	int B; // Variabile che contiene il secondo numero
	int C; // Variabile di lavoro
	printf("Inserisci il valore di A ");
	scanf("%d",&A);
	printf("Inserisci il valore di B ");
	scanf("%d",&B);
	C=A; // Indica il primo scambio fra la variabile di lavoro(C) e A
	A=B; // Indica il secondo scambio fra le variabili A e B
	B=C; // Indica il terzo scambio fra la veriabile di lavoro(C) e la variabile B
	printf("Effettuando lo scambio fra le variabili, la variabile A contiene il valore di: %d \n",A);
	printf("Effettuando lo scambio fra le variabili, la variabile B contiene il valore di: %d \n",B);
}
