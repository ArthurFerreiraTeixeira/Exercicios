#include<stdio.h>

#include<ctype.h>

#include<stdlib.h>

int main(){

	int frutas;
	char auxi;
	
do{	

	printf("Feira da Hora \n Temos disponiveis as seguintes frutas: \n 1 - Abacaxi \n 2 - Maca \n 3 - Pera \n Informe a fruta desejada: ");
	scanf("%i", &frutas);
	fflush(stdin);
	
	if(frutas == 0){
		printf("Fruta inexistente!");
	}else {
	switch(frutas){
		case 1: printf("Abacaxi", frutas); break;
		case 2: printf("Maca", frutas); break;
		case 3: printf("Pera", frutas); break;
		default: printf("Fruta inexistente!", frutas);
	}}
	
	do{
		printf("\n Deseja outra fruta ?(S|N) \n");
		scanf("%c", &auxi);
		fflush(stdin);
		auxi = tolower(auxi); 
		if(auxi != 'S' && auxi != 'N')
				printf("\n Opcao invalida!");
	}while(auxi != 'S' && auxi != 'N');
		
}while(auxi == 'S');

	return 0;
}
