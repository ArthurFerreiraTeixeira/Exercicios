#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int pele = 0,maradona = 0,brancos ,nulos, numero, numeroVotos,i ;
	

	printf("Votação Futebol\n");
	printf("Quantos votos serao realizados: ");
		while(scanf("%d",&numeroVotos)!=1){
			fflush(stdin);
			printf("Digite apenas valores inteiros: ");
			while(getchar()!='\n');
		}
		do{
			fflush(stdin);
		printf("Escolha de jogadores\n");
		printf("(25) Pele\n");
		printf("(33) Maradona\n");
		printf("Escolha seu jogador: ");
			while(scanf("%d",&numero)!=1){
				fflush(stdin);
				printf("Digite apenas valores inteiros: ");
				while(getchar()!='\n');
			}
			if(numero==25){
				pele = pele +1;
			}else if(numero==33){
				maradona = maradona + 1;
			}else if(numero==0){
				brancos = brancos + 1;
			}else {
				nulos = nulos + 1;	
			}
			i = i + 1;
	}while(i<numeroVotos);
	
	printf("Quantidade de votos\nPele: %d\nMaradona: %d\n",pele,maradona);
	printf("Brancos: %d\nNulos: %d\n",brancos,nulos);
	if(pele>maradona){
		printf("Candidato vencedor: Pele");
	}else if(maradona>pele){
		printf("Candidato vencedor: Maradona\n");
	}else if(pele==maradona){
		printf("Empate tecnico ambos os jogadores tiveram a mesma quantidade de votos\n");
	}
	
	return 0;
}
