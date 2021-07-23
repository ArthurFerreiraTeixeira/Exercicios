#include<stdio.h> 

int main(){
	
	float numero1, numero2, numero3;
	
	printf("Digite tres numeros: \n"); 
	scanf("%f%f%f", &numero1, &numero2, &numero3); 
	fflush(stdin); 
	
	if (numero1>numero2 && numero1>numero3){printf("O maior numero digitado e: %.1f", numero1); 
		}else if (numero2>numero1 && numero2>numero3){printf("O maior numero digitado e: %.1f", numero2);
			}else {printf("O maior numero digitado e: %.1f", numero3); 
			}
		
	return 0;
}
