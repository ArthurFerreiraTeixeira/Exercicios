#include<stdio.h>

#include<ctype.h>

int main(){


	int i, num;
	float numPar, totalPar, mediaPar;	
	
	printf("Para sair do programa digite 0\n");
	
	do{
	
		printf("DIgite um numero inteiro: ");
		scanf("%d", &num);
		fflush(stdin);
						
		if(num % 2 ==0 && num !=0){
			numPar = numPar + num;
			totalPar++;
		}
					
	}while(num !=0);
	
	mediaPar = numPar/totalPar;
	
	printf("\n\nA media dos numeros pares e: %.1f", mediaPar);	
	
	return 0;
}
