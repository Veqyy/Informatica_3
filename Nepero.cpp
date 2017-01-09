#include <stdio.h>
main(){
int n; // Variabile che indica il numero da inserire
int conta; // Variabile conta
int i; // Variabile di lavoro
int fatt; // Variabile che indica il fattoriale
int e; // Variabile che indica il numero di Nepero
do {
	printf("Inserisci il valore di n minore di 10 e maggiore di 1: ");
	scanf ("%d",&n);
}while((n<1)||(n>10));
	e==0;
while(conta<=n){
	fatt==1;
for(i=conta;i>=0;i--){
	fatt=fatt*i;
	}	
	e=e+1/fatt;
	conta=conta+1;
	}
	printf("Il numero di nepero e': %d",&e);
}


