#include<stdio.h>

#include<ctype.h>

int main(){
	
	float percentual, calculo;
	char auxi;
	
	do{
	
	printf("Informe o percentual desejado: ");
	scanf("%f", &percentual);
	fflush(stdin);
	
	calculo = 555*(percentual/100);
	
	printf("\nValor calculado: %.1f\n", calculo);
	
	printf("\nDeseja informar outro percentual (S|N)? ");
	scanf("%c", &auxi);
	
	auxi = toupper(auxi);
	
	}while(auxi == 'S');

return 0;
}
