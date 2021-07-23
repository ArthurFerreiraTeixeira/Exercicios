#include<stdio.h>

int main(){

	int numero,soma=0,opcao,vezes=0;
	
	do{
	
	printf("digite um numero: ");
	scanf("%i",&numero);
	soma+=numero;
	
	printf("digite 1 para continuar ou 2 para finaliza: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	vezes++;}
	
	while(opcao==1 && vezes!=100);
	printf("o resultado da soma e %i\n",soma);

	return 0;
}
