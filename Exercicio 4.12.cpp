#include<stdio.h>

int main(){

	
	int voto;
	float i, percCadidato1, percCadidato2, percCadidato3, percCadidato4, percNulo, percBranco;
	float candidato1, candidato2, candidato3, candidato4, nulo, branco;	
	
	do{
		printf("Eleicoes 2021\n\n\nInforme o numero do candidato escolhido (1 a 4), 5 para nulo ou 6 para branco\n\n");
		printf("Para finalizar a entrada de votos digite 0\n\nDigite o numero do candidato: ");
		scanf("%d", &voto);
		fflush(stdin);
		
		switch(voto){
			
			case 1: printf("\nVoto computado com sucesso para o candidato 1\n\n");
					candidato1++;
					i++; break;
			case 2: printf("\nVoto computado com sucesso para o candidato 2\n\n");
					candidato2++;
					i++; break;
			case 3: printf("\nVoto computado com sucesso para o candidato 3\n\n");
					candidato3++;
					i++; break;
			case 4: printf("\nVoto computado com sucesso para o candidato 4\n\n");
					candidato4++;
					i++; break;
			case 5: printf("\nVoto nulo computado com sucesso\n\n");
					nulo++;
					i++; break;
			case 6: printf("\nVoto branco computado com sucesso\n\n");
					branco++;
					i++; break;
			case 0: printf("\nEncerrado\n\n");break;
			default: printf("\nOpção invalida!\n\n");
		};		
	}while(voto != 0);

	percCadidato1 = (candidato1/i)*100;
	
	percCadidato2 = (candidato2/i)*100;
	
	percCadidato3 = (candidato3/i)*100;
	
	percCadidato4 = (candidato4/i)*100;
	
	percNulo = (nulo/i)*100;
	
	percBranco = (branco/i)*100;
	
	
	printf("\nFim da eleicao!\n\n\nCanditato 1 - %.0f votos - %.1f%% dos votos", candidato1,percCadidato1);
	printf("\nCandidato 2 - %.0f votos - %.1f%% dos votos", candidato2,percCadidato2);
	printf("\nCandidato 3 - %.0f votos - %.1f%% dos votos", candidato3,percCadidato3);
	printf("\nCandidato 4 - %.0f votos - %.1f%% dos votos", candidato4,percCadidato4);
	printf("\nNulos - %.0f votos - %.1f%% dos votos", nulo,percNulo);
	printf("\nBrancos - %.0f votos - %.1f%% dos votos", branco,percBranco);
	
	return 0;
}
