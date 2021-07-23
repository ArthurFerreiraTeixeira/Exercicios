#include<stdio.h> 

int main(){
	
	int ddd;
	
	printf("Informe o DDD: "); //Mensagem a ser escrita na tela
	scanf("%i", &ddd);//expressão de controle
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		
	switch(ddd){//Uma forma de reduzir a complexidade de vários if
		case 61: printf("DDD %i, Brasilia", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 71: printf("DDD %i, Salvador", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 11: printf("DDD %i, Sao Paulo", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 21: printf("DDD %i, Rio de Janeiro", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 32: printf("DDD %i, Juiz de Fora", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 19: printf("DDD %i, Campinas", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 27: printf("DDD %i, Vitoria", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		case 31: printf("DDD %i, Belo Horizonte", ddd); break; //Uma forma de reduzir a complexidade de vários if 
		default: printf("DDD %i, Invalido", ddd); //Uma forma de reduzir a complexidade de vários if 
	}
	
	return 0;
}
