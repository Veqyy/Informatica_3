#include <stdio.h>
int main ()
{
	float d;		//Disabile
	float ac;		//Accompagnatore
	float al;		//Altezza
	float s;		//Supplemento
	float p;		//Prezzo
	printf("Il cliente e' un disabile? (1=Si, 0=No) ");	 						//Chiedere se il cliente è un disabile oppure no
	scanf("%f",&d);
	if(d==0){																	//Se il cliente non è disabile allora
		printf("Il cliente e' un accompagnatore? (1=Si, 0=No) ");	 			//chiediamo se il cliente è un accompagnatore oppure no
		scanf("%f",&ac);													
		if (ac==0){																//Se il cliente non è un accompagnatore allora
			printf("Inserire l'altezza ");										//Chiediamo quant'è alto il cliente
			scanf("%f",&al);
			if(al<=100){														//Se l'altezza del cliente è minore di 100cm allora
				p=0;															//Il prezzo complessivo del biglietto sarà di zero euro
				printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");		//Chiediamo se il cliente vuole o no un supplemento
				scanf("%f",&s);									
				if (s==1)														//Se il cliente vuole il supplemento allora
					p=p+7.50;													//Il prezzo equivale al prezzo inziale piu 7,50
			}
			else{																//L'altezza del cliente non è minore di 100cm allora
				if(al<=140){													//Se l'altezza del cliente è minore di 140cm ma maggiore di 100cm allora
					p=28;														//Il prezzo complessivo è di €28
					printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");	//Chiediamo se il cliente desidera un supplemento 										
					scanf("%f",&s);
					if (s==1)													//Se il cliente vuole il supplemento allora 
						p=p+7.50;												//Il prezzo equivale al prezzo iniziale più € 7,50
				}
				else{															//Se l'altezza del cliente non è minore di 140cm allora
					p=34.90;												 	//Il prezzo complessivo sarà di € 34,90	
					printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");	//Chiediamo se il cliente desidera un supplemento 										
					scanf("%f",&s);
					if (s==1)													//Se il cliente vuole il supplemento allora 
						p=p+90.50;												//Il prezzo complessivo è il prezzo più € 9,50
				}
			}					
		}
		else{																	//Se il cliente è un accompagnatore allora
			p=25.50;															//Il prezzo è 25,50
			printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");			//Chiediamo se il cliente desidera un supplemento 										
			scanf("%f",&s);
			if (s==1)															//Se il cliente vuole il supplemento allora 
				p=p+9.50;														//Il prezzo complessivo è quello iniziale più € 9,50	
		}	
	}		
	else{																		//Se il cliente è disabile 
		p=0;
		printf("Il cliente vuole il supplemento? (1=Si, 0=No) ");				//Chiediamo se il cliente desidera il supplemento 										
		scanf("%f",&s);
		if (s==1)																//Se il cliente vuole il supplemento allora 
			p=p+7.50;															//Il prezzo complessivo è il prezzo iniziale più € 7,50
	}
	printf("il prezzo da pagare e' %f",p);										//Stampare il prezzo finale da pagare 
}
	 

