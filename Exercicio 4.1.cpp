#include<stdio.h> 

#include<stdlib.h> 

#include<string.h> 

#include<ctype.h>

int main(){
	
	int dia, mes, ano, validadeDiaMes, validadeAno;
	
	do{
		validadeDiaMes = 0;
		do{
			printf("Digite um valor para dia (numero com ate dois digitos): ");
			scanf("%d", &dia);
			fflush(stdin);
			
				if(dia<1 || dia>31)
					printf("Dia invalido! \n");
		}while(dia<1 || dia>31);
		
		do{	
			printf("Digite um valor para mes (numero com ate dois digitos): ");
			scanf("%d", &mes);
			fflush(stdin);
			
				if(mes<1 || mes>12)
					printf("\n Mes invalido!");
		}while(mes<1 || mes>12);
		
			if((mes == 2|| mes ==4|| mes == 6|| mes == 9|| mes == 11) && dia == 31){
				printf("%d/%d nao existe! Tente novamente \n", dia, mes);
				validadeDiaMes = 1;}
				
			if(mes == 2 && dia == 30){
				printf("%d/%d nao existe! Tente novamente \n", dia, mes);
				validadeDiaMes = 1;}
	}while(validadeDiaMes==1);
	
	do{
		validadeAno=0;
		printf("\n Digite um valor para ano (numero com ate quatro digitos): ");
		scanf("%d", &ano);
		fflush(stdin);
			if(ano<1 || ano>9999){
				printf("\nAno invalido!");
				validadeAno = 1;
			}
			if (mes == 2 && dia ==29){
				if((( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )){
				}
			 else {
				printf("%d/%d/%d nao e uma data valida, pois o ano %d nao e bissexto \n", dia, mes, ano, ano);
				validadeAno=1;
			}}
	}while(validadeAno==1);

		printf("%d/%d/%d", dia, mes, ano);
	
	return 0;
}
