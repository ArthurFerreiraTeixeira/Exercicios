#include<stdio.h>

int main(){

	float lado1, lado2, lado3;
	
	printf("Digite 3 numeros: \n");
	scanf("%f%f%f", &lado1, &lado2, &lado3);
	fflush(stdin);
	
	if (lado1<=0 or lado2<=0 or lado3<=0){printf("Numeros invalidos!");
	} 
		else if (lado1<(lado2+lado3) && lado2<(lado1+lado3) && lado3<(lado1+lado2)){ 
			if (lado1==lado2 && lado2==lado3){
				printf("Triangulo equilatero, Lados %.1f, %.1f e %.1f", lado1, lado2, lado3);
				}
				else if ((lado1==lado2 && lado2!=lado3)or(lado1!=lado2 && lado2==lado3)or (lado1==lado3 && lado2!=lado1)){ 
					printf("Triangulo isosceles, Lados %.1f, %.1f, %.1f", lado1, lado2, lado3);
					}
					else if(lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
						printf("Triagulo escaleno, Lados %.1f, %.1f, %.1f", lado1, lado2, lado3);
						}
		}
		else { 
		printf("Não e possivel formar um triangulo");
		}
		
	return 0;
}
