/*Esercizio 14
Bosi Alessandro 3INA */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int v[10];
	int i;
	int n;
	int trovato;
	int pos;
	printf("Inserisci un numero: ");
	scanf("%d",n);
	i=0;
	trovato=0;
	while(i<10&&!=trovato){
		if(n==n[i]){
			pos=1;
			trovato=1;
		}
		i++;
	}
	if (trovato=1){
		printf("N nella posizione: ",pos);
	}else{
		printf("Il numero non è stato trovato");
	}
}
