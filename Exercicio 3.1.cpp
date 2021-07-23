#include<stdio.h>

int main(){
	
	int numero, conta, i;
		
	printf("Digite o numero que deseja fatorar: \n");
	scanf("%i", &numero);
	
	conta=1;
		
	if(numero<0){
		printf("Somente numeros inteiros positivos!");
	} else if(numero==0) {
		printf("Resultado: 1");
	} else {
		for(i=1;i<=numero;i++){
			conta = conta*i;
		}
		printf("Resultado: %i", conta);
	}
	return 0;
}
