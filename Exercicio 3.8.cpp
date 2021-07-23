#include<stdio.h>

#include<ctype.h>

int main(){
	
	char identificacao[20], auxi;
	int qtdProdutos,i;
	float precoAtual, novoPreco;	
	
	printf("Informe quantos produtos serao calculados: \n");
	scanf("%d", &qtdProdutos);
	fflush(stdin);
	
	for (i=1;i<=qtdProdutos;i++){
		printf("Informe a identificaçao do produto %d: \n", i);
		fgets(identificacao, 20, stdin);
		fflush(stdin);
		
		if(i < qtdProdutos){
			printf("Informe o preço atual do produto %d: \n", i);
			scanf("%f", &precoAtual);
			fflush(stdin);
		
			novoPreco = precoAtual * 1.1;
		
			printf("O novo preço do produto %d - %s é: %.2f \n", i, identificacao, novoPreco);
				
			printf("Deseja informar outro produto? (S|N) \n");
			scanf("%c", &auxi);
			fflush(stdin);
		
			auxi = toupper(auxi);
			
			do {
				if(auxi != 'S' && auxi!= 'N')
				printf("Opçao invalida!");
			}while(auxi != 'S' && auxi!= 'N');
			
		}else {
			printf("ultimo produto! Preco e -1.");
		}
		
		if(auxi == 'N') {
			i = qtdProdutos;
		}
	}
	
	
	return 0;
}
