#include<stdio.h>

int main(){
	
	int i;
	float anacleto, felisberto;
	
	anacleto = 1.5;
	felisberto = 1.1;
	
	while(felisberto<anacleto){
		anacleto = anacleto + 0.02;
		felisberto = felisberto + 0.03;
		i++;
		
		printf("Ano %d - altura Anacleto: %.2f | altura Felisberto: %.2f\n", i, anacleto, felisberto);
	};
		
	printf("\nAnos necessários para Felisberto ultrapassar Anacleto: %d", i);
	
	return 0;
}


