#include<stdio.h>

#include<string.h>

#include<ctype.h>

int main(){
	
	char nomeFinalista1[50], nomeFinalista2[50], nomeFinalista3[50], vencedor[50];
	int i, qtdJuizes, nota, nota1=0, nota2=0, nota3=0, maiorNota;
	
	printf("13 Concurso de piadas \n Informe a quantidade de juízes do dia: \n");
	scanf("%d", &qtdJuizes);
	fflush(stdin);
	
	printf("Digite o nome do primeiro finalista:  ");
	fgets(nomeFinalista1, 60, stdin);
	fflush(stdin);
	
	printf("Digite o nome do segundo finalista:  ");
	fgets(nomeFinalista2, 60, stdin);
	fflush(stdin);
	
	printf("Digite o nome do terceiro finalista:  ");
	fgets(nomeFinalista3, 60, stdin);
	fflush(stdin);
	
	i=1;
		do{
			printf("\n %dº juiz, favor informar a nota do %s: ", i, nomeFinalista1);
			scanf("%d", &nota);
			fflush(stdin);
			
			do{
				if(nota<0 && nota>100){
					printf("Nota invalida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 && nota>100);
			
			nota1= nota1 + nota;
			
			printf("\n %dº juiz, favor informar a nota do %s: ", i, nomeFinalista2);
			scanf("%d", &nota);
			fflush(stdin);
			
			do{
				if(nota<0 && nota>100){
					printf("Nota invalida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 && nota>100);
			
			nota2= nota2 + nota;
			
			printf("\n %dº juiz, favor informar a nota do %s: ", i, nomeFinalista3);
			scanf("%d", &nota);
			fflush(stdin);
			
			do{
				if(nota<0 && nota>100){
					printf("Nota invalida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 && nota>100);
			
			nota3= nota3 + nota;
						
			i++;
						
		}while(i<=qtdJuizes);
	
			if(nota3>nota2 && nota3>nota1){
				strcpy(vencedor, nomeFinalista3);
				maiorNota = nota3;
				} else if(nota2>nota3 && nota2>nota1){
					strcpy(vencedor, nomeFinalista2);
					maiorNota = nota2;
					} else if(nota1>nota2 && nota1>nota3){
						strcpy(vencedor, nomeFinalista1);
						maiorNota = nota1;
						}
					
			printf("\n Nota do finalista 1 - %s: %d \n", nomeFinalista1,nota1);
			printf("\n Nota do finalista 2 - %s: %d \n", nomeFinalista2,nota2);
			printf("\n Nota do finalista 3 - %s: %d \n", nomeFinalista3,nota3);
			printf("\n O vencedor do 13 concurso de piadas e:\n\n%s\n Com o total de pontos: %d", vencedor, maiorNota);			
	
	return 0;
}
