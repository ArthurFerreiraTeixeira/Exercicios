#include <stdio.h>

int main(){
	
	char qntDados = 0, somaDados = 0;
	
	do{
		printf("Qual a quantidade de dados? \n");
		scanf("%d", &qntDados);
	}while((qntDados <= 0) && (qntDados > 100));
	
	int dados[qntDados];
	
	for(int i = 0; i < qntDados; i++) {
		printf("Qual o valor do %dº dado? \n", i + 1);
		scanf("%d", &dados[i]);
		somaDados += dados[i];
	}
	
	printf("A soma dos %d dados e: %d", qntDados, somaDados);

	return 0;
}


