#include<stdio.h>

#include<stdlib.h>
int main(){

	int maior,num1, num2, num3;

	printf("Solicitamos informar 3 numeros inteiros\n\nPrimeiro numero: ");
	scanf("%d",&num1);
	fflush(stdin);
		
	printf("Segundo numero: ");
	scanf("%d",&num2);
	fflush(stdin);
	
	printf("Terceiro numero: ");
	scanf("%d",&num3);
	fflush(stdin);
	
	if(num1>num2 && num1>num3)
		maior = num1;
		else if(num2>num1 && num2>num3)
			maior = num2;
			else
				maior = num3;
				
	printf("O maior numero e: %d", maior);
	
	return 0;
}
