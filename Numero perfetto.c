#include<stdio.h>
/*Bosi Alessandro
3°INA
28/11/2016
Algoritmo del numero perfetto
Versione 1.0*/
int main(){
	int n1; // variabile per mettere i criteri del numero da verificare
	int n2; // seconda variabile per mettere i criteri del numero da verificare
	int n; // numero che viene verificato
	int d; //variabile che serve a dividere
	int s;// variabile che indica la somma dei valori
	
	d=0;
	s=0;
	do  													// verifico se n1 rispetta le condizioni
	{
		printf("Inserisci un numero pari e anche minore di 10.000\n");
		scanf("%d", &n1);
	}while(((n1%2)!=0) || (n1>=10000));
    do														// verifico se n2 rispetta le condizioni
	{
		printf("Inserisci il secondo numero che dev'essere maggiore del primo e dispari'\n");
		scanf("%d", &n2);
	}while((n2<=n1) || (n2%2)==0);
	do														// verifico se n rispetta le condizioni
	{
		printf("Inserisci il numero che si vuole verificare che dev'essere compreso fra :%d   %d\n",n1,n2);
		scanf("%d", &n);
	}while((n<=n1) || (n>=n2));                             /*faccio ripetere il ciclo finche il divisore non è la metà	del numero da verificare, poi assegno alla somma dei divisor al divisore se il resto porta 0*/
	while(d<=(n/2)) {
		d=d+1;
		if((n %2)==0) {
		}
	}
	if(s=n) {												/* se la somma dei divisori è uguale al numero allora il numero risultante sarà perfetto, altrimenti no*/
		printf("\nIl numero e' perfetto");
		}else{
			printf("\nIl numero non e' perfetto");
		}
	}
	


