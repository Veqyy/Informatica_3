#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Media di N numeri
   Autore: Bosi Alessandro
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int n; // Variabile n presa in input
	int somma; 
	int I; // Contatore
	int num; // Variabile num presa in inputa
	int media; // Variabile che indica la media dei numeri da effettuare
	
	printf("Inserire un numero\n");
	scanf("%d", &n);
	somma=0;
	I=0;
	while(I<n){ // Il ciclio si ripete finchè il contatore I è minore della variabile n
		printf("Inserire un' altro numero\n");
		scanf("%d", &num);
		somma=somma+num; // Fa la somma dei numerii presi in input
		I++; // Incremento il conntatore
	}
	media=somma/n;
	printf("La media dei numeri e'%d\n", media); // Viene stampata la media come risultato finale
	
	 system("PAUSE");
}
