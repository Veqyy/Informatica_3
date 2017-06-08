/*Esercizio 15
Bosi Alessandro 3INA */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int i;
	int pos;
	int v[10];
	int tot;
	printf("Inserisci la posizione ");
	scanf("%d",&pos);
	for(i=pos;i<tot-1;i++){
		v[i]=v[i]+1;
	}
	tot--;
	for(i=0;i<tot;i++){
		printf("%d",v[i]);
	}
}

