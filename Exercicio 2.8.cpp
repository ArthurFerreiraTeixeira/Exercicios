#include<stdio.h>

#include<ctype.h>

int main(){
	
	char nome[25];
	char sexo;
	float altura, peso;
	
	printf("Digite o nome: ");
	fgets(nome, 25, stdin);
	fflush(stdin);
	
	printf("Digite o sexo (F/M): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	if (toupper(sexo)== 'F' or toupper(sexo)== 'M'){
		printf("Digite altura em metros: ");
		scanf("%f", &altura);
		fflush(stdin);
			if (altura>2.5 or altura < 0.3){printf("Informaçao de altura invalida!");
			}else {
			
				if (toupper(sexo)=='F'){peso = (62.1 * altura)-44.7;
					printf("Ilma Sra. %s \n Seu peso ideal e: %.1f", nome, peso);}
					else if (toupper(sexo)=='M') {peso = (72.5 * altura)-58;
						printf("Ilmo Sr. %s \n Seu peso ideal e: %.1f", nome, peso);}
						else {printf("Informaçoes invalidas!");}
			}
		} else {
			printf("Informaçao de sexo invalida!");
		}
	return 0;
}
