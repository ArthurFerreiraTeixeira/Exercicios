#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int movel;
	
	printf("\n\nLoja de moveis\n\n");
	printf("Em nosso estoque temos os moveis abaixo:\n\n");
	printf("1 - Cadeira\n");
	printf("2 - Mesa de computador\n");
	printf("3 - Estante de livros\n");
	printf("4 - Mesa de impressora\n");
	printf("5 - Estante de CD\n");
	printf("\nInforme a opcao desejada: ");
	scanf("%d", &movel);
	fflush(stdin);
	
	
	switch(movel){
		case 1: printf("\nProvidenciaremos sua cadeira neste momento\n"); break;
		case 2: printf("\nProvidenciaremos sua mesa de computador neste momento\n"); break;
		case 3: printf("\nProvidenciaremos sua estante de livros neste momento\n"); break;
		case 4: printf("\nProvidenciaremos sua mesa de impressora neste momento\n"); break;
		case 5: printf("\nProvidenciaremos sua estante de CD neste momento\n"); break;
		default: printf("\nNao possuimos este movel em nosso estoque.");
	};
	
	
	return 0;
}
