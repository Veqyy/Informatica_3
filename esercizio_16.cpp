#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int N[]={2,4,10,13,14,17,19,23,25,27,30,31,35,41,78,81,83,88,93,97};
	int min;
	int max;
	int trovato;
	int num;
	int centro;
	printf("Inserisci un numero");
	scanf("%d,N");
	min=0;
	max=0;
	trovato=0;
	while(trovato=0 && min<=max){
		centro=min+max/2;
			if(N=num[centro]){
				trovato=1;
			}else{
				if(N>num[centro]){
					min=c+1;
				}else{
					max=c-1;
						}
					}
				}
			}
	}
	if(trovato=1){
		printf("il numero è stato trovato",trovato);
	}else{
		printf("Il numero non è stato trovato",trovato);
		}
	system("PAUSE")
}
