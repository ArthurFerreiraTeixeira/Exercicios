//ARTHUR FERREIRA TEIXEIRA
//UC21103744
//ENGENHARIA DE SOFTWARE 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>

int main (){
	
    float notaAluno[3], mediaAri, notas[3];

	for(int i = 0; i < 3; i++) {
		printf("Qual a nota da %d� prova? ", i + 1);
		scanf("%f", &notaAluno[i]);
	}
	
  mediaAri = (notas[0] + notas[1] + notas[2])/3;

    printf("A media aritim�tica e: %d", mediaAri);
 
	

 return 0;	
}
