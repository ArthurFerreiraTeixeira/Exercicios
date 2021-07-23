#include<stdio.h>

int main(){
	
	int numero, i, fatorial;
	
	printf("Digite um numero inteiro para fatorar: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	i=1;
	
	if(numero<0){
		printf("Somente numeros inteiros positivos!");
	} else if(numero==0) {
		printf("Fatorial de 0 e: 1");
	} else {
	while(i<= numero){
		fatorial = fatorial*i;
		i++;
	}}
	
	printf("Fatorial de %d e: %d", numero, fatorial);
	
	return 0;
}
