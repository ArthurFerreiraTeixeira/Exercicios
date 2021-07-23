#include<stdio.h>

int main(){
	
	float num1, num2, sub;
	
	printf("Digite dois numeros: \n");
	scanf("%f%f", &num1, &num2);
	fflush(stdin);
	
	if (num1>num2){sub = num1 - num2;
		printf("A subtração entre os dois numeros e igual a: %.1f", sub);
		} else{sub = num2 - num1;
			printf("A subtração entre os dois numero e igual a: %.1f", sub);
			}
	
	
	return 0;
}
