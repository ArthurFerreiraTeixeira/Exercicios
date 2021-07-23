#include<stdio.h>

int main(){
	
	float altura1, altura2, altura3;
	char nome1[20], nome2[20], nome3[20];
	
	printf("Digite o nome de 3 pessoas: \n");
	fgets(nome1, 20, stdin);
	fflush(stdin);
	fgets(nome2, 20, stdin);
	fflush(stdin);
	fgets(nome3, 20, stdin);
	fflush(stdin);
	
	printf("Digite a altura (em metros) das 3 pessoas informadas anteriormente: ");
	scanf("%f%f%f", &altura1, &altura2, &altura3);
	fflush(stdin);
	
	if (altura1<altura2 && altura1<altura3){
		printf("A menor pessoa e %s com %.2fm de altura.", nome1, altura1); 
		}
		else if (altura2<altura1 && altura2<altura3){
			printf("A menor pessoa e %s com %.2fm de altura.", nome2, altura2);
			}
			else {
				printf("A menor pessoa e %s com %.2fm de altura.", nome3, altura3); 
				}
		
	return 0;
}

