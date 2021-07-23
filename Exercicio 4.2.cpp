#include<stdio.h> 

#include<stdlib.h> 

#include<string.h> 

#include<ctype.h> 

int main(){

	int dia, mes;
	
	printf("Informe o dia do nascimento: ");
	scanf("%d", &dia);
	fflush(stdin);
	
	printf("\n Informe o mes do nascimento: ");
	scanf("%d", &mes);
	fflush(stdin);
	
	if(mes==1){
		if(dia<=20)	
		printf("\n Voce e do signo de Capricornio!");
			else printf("\n Voce e do signo de Aquario!");
		} 
		else if(mes==2){
			if(dia<=19)
			printf("\n Voce e do signo de Aquario!");
				else printf("\n Voce e do signo de Peixes");
			} else if(mes==3){
				if(dia<=20)
				printf("\n Voce e do signo de Peixes!");
					else printf("\nVoce e do signo de Aries!");
				} else if(mes==4){
					if(dia<=20)
					printf("\n Voce e do signo de Aries!");
						else printf("\n Voce e do signo de Touro!");
					}else if(mes==5){
						if(dia<=20)
						printf("\n Voce e do signo de Touro!");
							else printf("\n Voce e do signo de Gemeos");
						} else if(mes==6){
							if(dia<=20)
							printf("\n Voce e do signo de Gemeos!");
								else printf("\n Voce e do signo de Cancer!");
							}else if(mes==7){
								if(dia<=21)
								printf("\n Voce e do signo de Cancer!");
									else printf("\n Voce e do signo de Leao!");
								} else if(mes==8){
									if(dia<=22)
									printf("\n Voce e do signo de Leao!");
										else printf("\n Voce e do signo de Virgem!");
									} else if(mes==9){
										if(dia<=22)
										printf("\n Voce e do signo de Virgem!");
											else printf("\n Voce e do signo de Libra!");
										}else if(mes==10){
											if(dia<=22)
											printf("\n Voce e do signo de Libra!");
												else printf("\n Voce e do signo de Escorpiao!");
											}else if(mes==11){
												if(dia<=21)
												printf("\n Voce e do signo de Escorpiao!");
													else printf("\n Voce e do signo de Sagitario!");
												}else if(mes==12){
													if(dia<=21)
													printf("\n Voce e do signo de Sagitario!");
														else printf("\n Voce e do signo de Capricornio!");
												}
				
	return 0;
}
