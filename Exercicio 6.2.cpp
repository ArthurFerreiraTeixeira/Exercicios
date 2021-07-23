#include<stdio.h>

int main(){
	
	int valor, fatorial = 1;
		
	printf("Calculo de Fatorial\n");
	printf("Digite um valor: ");
		
	while(scanf("%d",&valor)!=1){
		while(getchar()!=1);
	}
		
	if(valor==0){
	printf("Fatorial de %d e igual a: 1",valor);
	}
	
	while(valor>0){
	fatorial = fatorial * valor;
	valor = valor -1;
	}
	
	printf("O numero fatorado e: %d",fatorial);
	
	return 0;
}
