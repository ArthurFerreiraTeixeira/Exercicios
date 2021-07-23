#include<stdio.h> 

int main(){

	int i, x, n1, n2, nMaior, nMenor;
	
	printf("Algoritmo para informar os numeros primos entre dois numeros escolhidos!\n");
	
	do{
		printf("Informe o primeiro numero inteiro: ");
		scanf("%d", &n1);
		fflush(stdin);
		
		printf("\nInforme o segundo numero inteiro: ");
		scanf("%d", &n2);
		fflush(stdin);
	}while(n1<1&&n2<1);
	
	if(n1>n2){
		nMaior = n1;
		nMenor = n2;}
		else {nMaior = n2;
			 nMenor = n1;}
	
			while(nMenor<=nMaior){
				x=0;
				for(i=2;i<=nMenor-1;i++){
					if(nMenor%i ==0)
					x=1;
					}
				if(x==0)
					printf("\n%d", nMenor);
			nMenor++;
			}
		
	return 0;
}
