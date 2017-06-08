/*Esercizio 17
Bosi Alessandro 3INA */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int tot;
	int max;
	int i;
	int num[50];
	int x;
	int trov=0;
	printf("Inserisci un numero: ");
	scanf("%d",&n);
	tot=5;
	max=10;
	while(tot<max){
		i=0;
		trov=0;
		if(i<tot && trov==0){
			if(n<=num[i]){
				trov=1;
			}else{
				i++;
			}
		}
	}
	x=tot-1;
	while(x>=i){
		num[x+1]=num[x];
		x--;		
	}
	num[i]=n;
	tot++;
}
