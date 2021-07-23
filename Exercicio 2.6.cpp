#include<stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &numero);
	fflush(stdin);
	
	if (numero % 2 == 0){
		printf("O numero apresentado e par.");
	} else {
		printf("O número apresentado e impar.");
	}
	
	
	return 0;
}
