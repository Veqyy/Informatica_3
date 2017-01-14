#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Tabellina di tutti i numeri
   Autore: Bosi Alessandro
   Data: 16/12/2016
   Classe: 3INA
   Versione 1.0*/

  int main()
{
	int n; //Variabile n	
	int tab; //Variabile che indica la tabellia da effettuare che dipende dal numero inserito in input precedentemente
	int I; //Variabile contatore
	
	n=2; //Inizializzazione di n=2
	tab=0;
	while(n<=10){	//Ciclo while che si effettua solo se n<=10
		for(I=0;I<=10;I++){	//Ciclo for con I=0, I<=10 e poi con l'inceremento del contatore I
			
			tab=n*I;
			printf("La tabellina e' %d ", tab); //Stampo la tabellina da effettuare
			
		}
		printf("\n");
		n++; //Incremento del numero
	}
}
