#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int regiao;
	
	printf("\nTURISMO ");
	printf("\n\n  Seja Bem-vindo ao site da Turismo!\n\n  Digite o pa�s que iremos te levar?\n\n");
	printf("1 - Norte\n");
	printf("2 - Nordeste\n");
	printf("3 - Centro-Oeste\n");
	printf("4 - Sudeste\n");
	printf("5 - Sul\n");
	printf("0 - Sair do programa\n");
	scanf("%d", &regiao);
	
	if(regiao == 0);
	
		else{ 
		system("cls");
			switch(regiao){
				case 1: printf("Regi�o escolhida: Norte\n\n"); break;
				case 2: printf("Regi�o escolhida: Nordeste\n\n"); break;
				case 3: printf("Regi�o escolhida: Centro-Oeste\n\n"); break;
				case 4: printf("Regi�o escolhida: Sudeste\n\n"); break;
				case 5: printf("Regi�o escolhida: Sul\n\n"); break;
				default:printf("\n\nRegi�o inv�lida!");
			};
	}	
	
return 0;
}
