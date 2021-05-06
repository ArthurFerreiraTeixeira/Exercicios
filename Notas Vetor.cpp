//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.

#include<stdio.h>

int main (){
	
    float notaAluno[30];

	for(int i = 0; i < 30; i++) {
		printf("Qual a nota do %dº aluno? ", i + 1);
		scanf("%f", &notaAluno[i]);
	}
	
	for(int i = 0; i < 30; i++) {
		printf("O %dº Aluno tirou %.2f pontos.\n", i + 1, notaAluno[i]);
	}

return 0;	
}

