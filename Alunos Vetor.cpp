#include <stdio.h>

int main(){
	char qntAlunos = 0;
	
	printf("Qual a quantidade de alunos? ");
	scanf("%d", &qntAlunos);
	
	float notas[qntAlunos];
	
	for(int i = 0; i < qntAlunos; i++) {
		printf("Qual a nota do %dº aluno? ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	for(int i = 0; i < qntAlunos; i++) {
		printf("O %dº Aluno tirou %.f pontos.\n", i + 1, notas[i]);
	}

	return 0;
}
