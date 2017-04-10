/*Bosi Alessandro
3INA 2016-2017
Esercizio 12
Stampa inversa Array */ 
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>
 
int main() { 
	int n[10]; 
  	int x; 
    x=0; 
    while(x<=9){ 
        printf("\nInserisci numero:"); 
        scanf("%d",&n[x]); 
        x++; 
    } 
    while(x>=0){ 
        if(n[x]!=0){ 
            printf(" %d",n[x]); 
        } 
        x--; 
    } 
system("PAUSE"); 
}

