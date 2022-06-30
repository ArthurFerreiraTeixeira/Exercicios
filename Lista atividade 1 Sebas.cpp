//ARTHUR FERREIRA TEIXEIRA
//UC21103744
//ENGENHARIA DE SOFTWARE 
#include<stdio.h>

int main (){
	
    float notaAluno[5];

	for(int i = 0; i < 5; i++) {
		printf("Qual a nota da %dº prova? ", i + 1);
		scanf("%f", &notaAluno[i]);
	}
	
	for(int i = 0; i < 5; i++) {
		printf("O %dº Aluno tirou %.2f pontos na media da prova.\n", i + 1, notaAluno[i]);
	}

return 0;	
}
