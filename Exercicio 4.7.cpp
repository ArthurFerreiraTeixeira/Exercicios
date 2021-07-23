#include<stdio.h> 
#include<ctype.h> 


int main(){

int maior, menor,contador,altura, alturaM, media, mulheres;
char sexo;
	contador = 1;
	mulheres = 0;
	
	while(contador<=50){
		printf("\nInforme a altura da %d pessoa em cm: ", contador);
		scanf("%d",&altura);
		fflush(stdin);
		
		printf("\nInforme o sexo da %d pessoa (M|F): ", contador);
		scanf("%c",&sexo);
		fflush(stdin);
			sexo = toupper(sexo);
			if(altura<30){
				printf("\nAltura invalida! Favor informar a altura em centimetros: ");
				scanf("%d", &altura);
				fflush(stdin);}
			else {
				if(contador == 1){
					menor = altura;
					maior = altura;}
				if(menor > altura)
					menor = altura;
				if(maior < altura)
					maior = altura;
				if(sexo == 'F'){
					alturaM = alturaM + altura;
					mulheres++;}
				}
		contador++;
	}
	
	media = alturaM/mulheres;
	
	printf("\nA Menor Altura e %d\n",menor);
	printf("\nA Maior Altura e %d\n",maior);
	printf("\nA Media de altura das mulheres e %d\n",media);
	
return 0;

}
