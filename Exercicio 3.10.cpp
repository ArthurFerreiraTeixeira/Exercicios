#include<stdio.h>

int main(){

	int i=0, numInteiro;
		
	do{
		printf("Informe um numero inteiro: ");
		scanf("%d", &numInteiro);
		fflush(stdin);
		
		i++;
	}while(numInteiro>=0 && i<=100);
	
	printf("Total de valores lidos: %d", i);
	
	return 0;
}
