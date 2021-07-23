#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int menor, maior, numero1, numero2, numero3, meio;
	
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero1);
	fflush(stdin);
			
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &numero2);
	fflush(stdin);
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &numero3);
	fflush(stdin);
			
	system("cls");
	
	if(numero1<numero2&&numero1<numero3)
		menor = numero1;
		else
			if(numero2<numero1&&numero2<numero3)
				menor = numero2;
				else
					if(numero3<numero1&&numero3<numero2)
						menor = numero3;
						
	if(numero1>numero2&&numero1>numero3)
		maior = numero1;
		else
		if(numero2>numero1&&numero2>numero3)
			maior = numero2;
			else
				if(numero3>numero1&&numero3>numero2)
					maior = numero3;
	
	if((numero1>numero2&&numero1<numero3)||(numero1<numero2&&numero1>numero3))
		meio = numero1;
		else
		if((numero2>numero1&&numero2<numero3)||(numero2<numero1&&numero2>numero3))
			meio = numero2;
			else
			if((numero3>numero1&&numero3<numero2)||(numero3<numero1&&numero3>numero2))
			meio = numero3;
				
	
	printf("Ordem crescente: %d - %d - %d", menor, meio, maior);
	
return 0;
}
