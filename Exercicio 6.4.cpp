#include<stdio.h>

#include<ctype.h>

int main(){
	
	
	float meses,meses24,feminino,masculino,fCriancas,ano,quantidade,i;
	float taxaMasculino,taxa24, taxaFTotais;
	char sexo;
	
	printf("Taxa de Mortalidade Infantil\n");
	
	printf("Digite o ano do nascimento da criancas:  ");
		scanf("%d",&ano);
	printf("Digite a quantidade de criancas que nasceram nesce periodo: ");
		scanf("%f",&quantidade);
	printf("Quantidade de criancas que morreram no periodo: ");
		scanf("%f",&fCriancas);
		
	for(i=0;i<fCriancas;i++){
		
		fflush(stdin);
		printf("Qual o sexo da crian�a: ");
			scanf("%c",&sexo);
			sexo=toupper(sexo);
			
			if(sexo=='F'){
				feminino = feminino + 1;
				printf("Quantos meses a crian�a viveu: ");
					scanf("%f",&meses);
					if(meses<=24){
						meses24 = meses24 + 1;
					}
			}
			else if(sexo=='M'){
				masculino = masculino + 1;
				printf("Quantos meses a crian�a viveu: ");
					scanf("%f",&meses);
					if(meses<=24){
						meses24 = meses24 + 1;
					}
			}
			
	}
	
	taxaFTotais = (fCriancas/quantidade)*100;
	taxaMasculino = (masculino/fCriancas)*100;
	taxa24 = (meses24/fCriancas)*100;
	
	printf("Taxa de crian�as falecidas: %.1f\n",taxaFTotais);
	printf("Taxa de crian�as masculinas mortas: %.1f\n",taxaMasculino);
	printf("Taxa de crian�as que viveram menos 24 ou menos de 24 meses: %.1f\n",taxa24);
	return 0;
}
