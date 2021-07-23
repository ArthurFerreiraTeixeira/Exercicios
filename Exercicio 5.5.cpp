#include<stdio.h>

#include<ctype.h>

int main(){

	char sexo;
	
	do{
	printf("Digite o seu sexo (M|F): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	sexo = toupper(sexo);
	
	}while(sexo!='M'&&sexo!='F');
		
	sexo == 'F' ? printf("Feminino") : printf("Masculino");
	
return 0;
}
