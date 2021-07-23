#include<stdio.h>

#include<ctype.h>

int main(){
	
	char nome[25];
	char sexo;
	int feminino, masculino;
	
	printf("Digite o nome: ");
	fgets(nome, 25, stdin); 
	fflush(stdin);
	
	printf("Digite o sexo (F/M): ");
	scanf("%c", &sexo);
	fflush(stdin);
		
	if (toupper(sexo)=='F'){
		printf("Ilma. Sra. %s\n", nome);}
		else if (toupper(sexo)=='M') {
			printf("Ilmo Sr. %s\n", nome);}
			else {printf("Valor digitado: %c.\n Informação de sexo inválida!", sexo);
	}
	
	return 0;
}
