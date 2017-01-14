#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Il fattoriale di un numero
   Autore: Bosi Alessandro
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int fattoriale;
	int n;
	int I;
	
	printf("Inserire un numero\n"); //Inserimento della variabile n
	scanf("%d", &n);

	fattoriale=1; // Inzializzazione del fattoriale = 0
	
	for(I=n; I>0; I--){ // Ripeto il ciclo fino a che I è maggiore di 0 
		fattoriale=fattoriale*I;
	}
	printf("Il fattoriale del numero e'\n %d", fattoriale); //Stampo il fattoriale come risultato
	
	system("PAUSE");
	
}
