#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Titolo: Dati dei numeri trovare il minimo
   Autore: Bosi Alessandro
   Data: 27/12/2016
   Classe: 3INA
   Versione 1.0*/
   int main ()
{
	int n;
	int I;
	int num;
	int min;
	
	printf("Inserire il numero dei numeri da calcolare\n"); //Inserimento in input dei numeri da calcolare
	scanf("%d", &n);
	
	I=0;
	printf("Inserire un altro numero\n"); // Inserimento della variabile num
	scanf("%d", &num);
	
	min=num;
	while(I<n){
		printf("Inserire un numero\n"); // Inserimento min
		scanf("%d", &num);
		while(num<min){
			min=num;
		}
		I++;
	}
	printf("Il numero minore e'%d \n", min); //Stampo il numero minore
	
	system("PAUSE");
}
