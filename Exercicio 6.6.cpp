#include<stdio.h>

#include<string.h>

int main(){
	
	int valor;

	printf("Analisador\n");
	
		printf("Digite um valor inteiro: ");
		
			while(scanf("%d",&valor)!=1){
				printf("Digite apenas valores inteiros: ");
				fflush(stdin);
				while(getchar()!='\n');
			}
			
			
			printf("O valor inteiro: %d tem um tamanho de: %zu algarismos",valor,sizeof(valor));
	
	return 0;
}
