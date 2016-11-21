#include <stdio.h>
main()
{
	int d; //Disabile
	int ac; //Accompagnatore del disabile
	int al; //Altezza
	int s; //Supplemento del biglietto
	int p; //Prezzo
	printf("Il cliente è un disabile?(1=Si, 0=No)"); 									//Se si allora chiedere al disabile se dispone di un accompagnatore// 
	scanf("%f",&d);																		  
	if (d==0){
		printf("Il disabile dispone di un proprio accompagnatore?(1=Si, 0=No)"); 		//Chiedere se il disabile dispone di un accompagnatore
		scanf("%f".&ac);
		if(ac==0){
			printf("Inserire l'altezza del cliente"); 									//Chiedere l'altezza del cliente
			scanf("%f",&al);
			if(al<=100){
				p=0
				printf("Il cliente desidera un supplemento? (1=Si,0=No)");				//Chiedere se il cliente vuole un supplemento
				scanf("%f"&s);
				if(s==1){                                                            	//Dire il prezzo del supplemento
					p=p+7,50;
					
				}
				else{
					if(al<=140);														//Se l'altezza è 140cm o meno allora il prezzo è di 28 euro
						p=28;															//Il prezzo è di 28 euro
						printf("Il cliente desidera un supplemento?(1=Si, 0=No)");
						scanf("%f",&s);
						if(s==1)
							p=p+7,50
							
				}
				else{																	//Vedere se l'altezza del cliente non è minore di 140cm
				 	p=34,90																//Il prezzo è di 34,90
					printf("Il cliente desidera un supplemento?(1=Si, 0=No)");			//Richiesta al cliente se vuole o no un supplemento
					scanf("%f",&s);															
					if(s==1)															
						p=p+9,50														//Prezzo 9,50
					
				}
							
			}
		else{
			
		}
		
		}
	}	
}

