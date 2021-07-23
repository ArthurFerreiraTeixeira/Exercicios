#include<stdio.h>

int main(){

	int contador, menor, altura;

	contador = 1;
	
	while(contador<=10){
		printf("Informe a altura da %d pessoa em cm: ", contador);
		scanf("%d",&altura);
		fflush(stdin);
			if(altura<30){
				printf("Altura invalida! Favor informar a altura em centimetros: ");
				scanf("%d", &altura);
				fflush(stdin);}
			else {
				if(contador == 1)
					menor = altura;
				if(menor > altura)
					menor = altura;}
		contador++;
	}
	printf("\na menor altura e %d\n", menor);
	
	return 0;
}
