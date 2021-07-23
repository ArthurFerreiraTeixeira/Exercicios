#include<stdio.h>

#include<ctype.h>

#include<stdlib.h>

int main(){
	
	float notaFinal, alunoF, alunoM, notaF, notaM, mediaF, mediaM;
	int i;
	char sexo, aux;
	
	i=1;
	alunoF = 0;
	alunoM = 0;
	notaF = 0;
	notaM = 0;
	mediaF = 0;
	mediaM = 0;
	
	do{
		
	printf("\n Digite o sexo do aluno (M|F) %d: ", i);
	scanf("%c", &sexo);
	fflush(stdin);
	
	sexo = toupper(sexo);
	
		do{
			if (sexo!= 'F'&& sexo != 'M'){
				printf("\n Sexo inválido!\n Informe o sexo do aluno (M|F) %d: ", i);
				scanf("%c", &sexo);
				fflush(stdin);
				sexo = toupper(sexo);
		}}while(sexo!= 'F'&& sexo != 'M');
	
	printf("\n Digite a nota do aluno %d: ", i);
	scanf("%f", &notaFinal);
	fflush(stdin);
	
		if(sexo == 'F'){
			alunoF++;
			notaF = notaF + notaFinal;
			}else if(sexo == 'M'){
			alunoM++;
			notaM = notaM + notaFinal;
			}
			
		if(alunoM ==0)
			notaM = 0;
			else 
			mediaM = notaM/alunoM;
		
		if(alunoF ==0)
			mediaF = 0;
			else 
			mediaF = notaF/alunoF;
			
		i++;
			
	}while(notaFinal >=0); 
	
	printf("\n Media dos alunos: %.2f", mediaM);
	printf("\n Media das alunas: %.2f", mediaF);
	
	return 0;
}
