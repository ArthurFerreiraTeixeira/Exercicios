#include<stdio.h>

int main(){
	
	float numero;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	fflush(stdin);
	
	if (numero<0){numero = -(numero);
		printf("Modulo do numero digitado: %.0f", numero);
	} else {printf("Modulo do numero digitado: %.0f", numero);
	}
	
	return 0;
}

