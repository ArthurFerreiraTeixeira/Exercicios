#include<stdio.h>

int main(){

	float lado1, lado2, lado3;
	
	printf("Digite 3 numeros: \n");
	scanf("%f%f%f", &lado1, &lado2, &lado3);
	fflush(stdin);
	
	if (lado1<(lado2+lado3) and lado2<(lado1+lado3) and lado3<(lado1+lado2)){
			printf("Triangulo valido!, Lados %.1f, %.1f e %.1f", lado1, lado2, lado3);
			} 
		
	return 0;
}
