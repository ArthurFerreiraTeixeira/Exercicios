#include <stdio.h>


int main(){
	
	int velocidade;
	char placaDoCarro[7];
	
	printf("Digite a placa do carro: \n");
	scanf("%s", &placaDoCarro);
	fflush(stdin);
	
	printf("Digite a velocidade: \n");
	scanf("%i", &velocidade);
	fflush(stdin);
	
	if (velocidade>80){
		printf("Velocidade registrada: %iKM/H, acima do limite permitido. O veiculo de placa %s sera multado!", velocidade, placaDoCarro);
	}
	
	return 0;
}
