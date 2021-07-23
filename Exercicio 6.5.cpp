#include<stdio.h>

int main(){
	int valor;
	int faturamento;
	
	printf("Teatro\n");
	printf("Valores dos ingressos\n");
	printf("R$ 15\n");
	printf("R$ 13\n");
	 printf("digite o valor do ingresso para analizar: ");
	 	scanf("%d",&valor);
	 		if(valor!=15 && valor!=13){
	 			while(valor!=15 && valor!=13){
	 				fflush(stdin);
	 				printf("valor incorreto!\nDigite 15 ou 13: ");
	 					scanf("%d",&valor);
	 					fflush(stdin);
				 }
			 }
if(valor==15){
	faturamento = 15*120;
	printf("Valores das despesas: R$ 600,00\n");
	printf("Valor do faturamento: R$ %d\n",faturamento);
	printf("Lucro esperado: R$ 1.200,00\n");
}else if(valor==13){
	faturamento = 13*146;
	printf("Valores das despesas: R$ 600,00\n");
	printf("Valor do faturamento: R$ %d\n",faturamento);
	printf("Lucro esperado: R$ 1.298,00\n");
}
	return 0;
}
