#include<stdio.h>
#include<stdlib.h> 
#include <math.h>
 /* Bosi Alessandro
   3INA 
   19/12/2016 
   Stampa quadrato 
   Versione 1.0 */ 
 int main() { 
 	int n; 
 	int i; 
 	int c; 
 	do{ 
 		printf("\n\nInserisci un lato compreso tra 2 e 20: "); 
 		scanf("%d",&n); 
 	}while(n<2 || n>20); 
 	i=0; 
 	while(i<n){ 
 		printf("*"); 
 		c=0; 
 		while(c<(n-1)) { 
 			if((i=0) || (i=n-1)) { 
 				printf(" "); 
 			}else{ 
 				printf("*"); 
 			} 
 			c++; 
 		} 
 		printf("\n"); 
 		i++; 
 	} 
 system("PAUSE");
 } 

