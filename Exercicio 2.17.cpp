#include<stdio.h>

int main(){
	
	int anoNasc, anoAtual, dias;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%i", &anoNasc);
	fflush(stdin);
	
	printf("Informe o ano atual: ");
	scanf("%i", &anoAtual);
	fflush(stdin);
	
	if(anoAtual<anoNasc){
		printf("Idade negativa, invalido!");
		} else if(anoNasc<0 or anoAtual<0){
			printf("O ano atual ou o ano de nascimento nao pode ser negativo!");
			} else{	
				dias = ((anoAtual - anoNasc)*365);
				
				printf("Voce ja viveu %i dias (aprox.) em sua vida", dias);
			}
			
	return 0;
}
