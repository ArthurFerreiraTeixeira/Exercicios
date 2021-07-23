#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int contadorMas = 0, contadorFem = 0,alturaFem, alturaMasc, menorAlturaMasc = 0,menorAlturafem = 0,sexo;
	int feminino = 0, masculino = 0,maiorAlturaFem,maiorAlturaMasc, media;
	int somaFem, i;
	
	
	printf("Analizador\n");
	
		for(i=0;i<10;i++){
			printf("Escolha de sexo\n");
			printf("(1) Feminino\n");
			printf("(2) Masculino\n");
			printf("Digite o sexo desejado: ");
			
				while(scanf("%d",&sexo)!=1){
					while(getchar()!='\n');
				}
				
				switch(sexo){
					
					case 1:
						feminino = feminino + 1;
					break;
				
					case 2:
						
						masculino = masculino + 1;
					break;
		}
		fflush(stdin);
	}
		
if(feminino>0){	
	do{
		printf("A altura da mulher: ");
			scanf("%d",&alturaFem);
			fflush(stdin);
			maiorAlturaFem = alturaFem;
			if(alturaFem>maiorAlturaFem){
				maiorAlturaFem = alturaFem;
			}
			if(alturaFem<menorAlturafem){
				menorAlturafem = alturaFem;
			}
			somaFem = somaFem + alturaFem;
			somaFem = contadorFem + 1;
	}while(contadorFem<feminino)	;
}

if(masculino>0){
	while(contadorMas<masculino){
		printf("A altura do homem: ");
		scanf("%d",&alturaMasc);
		fflush(stdin);
		maiorAlturaMasc = alturaMasc;
		if(alturaMasc > maiorAlturaMasc){
			maiorAlturaMasc = alturaMasc;
		}
		if(alturaMasc<menorAlturaMasc){
			menorAlturaMasc = alturaMasc;
		}
		fflush(stdin);
		contadorMas = contadorMas + 1;
	}
}

media = somaFem/feminino;
printf("Quantidade de homens: %d\n",masculino);
printf("A média da altura das mulheres é: %d\n",media);
if(maiorAlturaMasc>maiorAlturaFem){
	printf("A maior altura do grupo é : %d\n",maiorAlturaMasc);
}else if(maiorAlturaFem>maiorAlturaMasc){
	printf("A maior altura do grupo é: %d\n",maiorAlturaFem);
}
if(menorAlturafem<menorAlturaMasc){
	printf("A menor altura do grupo é: %d",menorAlturafem);
}else if(menorAlturaMasc<menorAlturafem){
	printf("A menor altura do grupo é: %d",menorAlturaMasc);
}
	return 0;
}
