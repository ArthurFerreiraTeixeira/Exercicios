#include<stdio.h>

int main(){
	
	int i, numero1, numero2, conta;
	
	printf("Digite 2 numeros inteiros: \n");
	scanf("%i%i", &numero1,&numero2);
	
	conta=0;
	
	for(i=1;i<=numero1;i++){
		conta = conta + numero2;
	}
	
	printf("Resultado: %i", conta);
	
	return 0;
}
