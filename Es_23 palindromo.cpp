#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int cont;
	int i;
	char parola[100];
	int medio;
	int palindromo;
	
	printf("Inserisci un nome: ");
	scanf("%s",&parola);
	cont=0;
		while(parola[cont]!='\0'){
			cont++;
		}
	i=0;
	medio=cont/2;
		while(i<medio){
			if(parola[cont-1]!=parola[i]){
				palindromo=0;
			}
		cont++;
		i++;
		}
			if(palindromo=1){
				printf("\n\nIl nome e' palindromo");
			}else{
				printf("\n\nIl nome non e' palindromo");
			}
	system("PAUSE");
	}
	
	
