#include<stdio.h>

#include<string.h>

#include<ctype.h>

int main(){
	
	int idade, maiorIdade, i=1;
	char sexo, corOlhos[9], corCabelos[9];
	float porcentagem, mulherLoiraOlhosVerdes;
	
	mulherLoiraOlhosVerdes=0;
	
	printf("Pesquisa sobre os habitantes de Pomerode\n Responda as questoes a seguir e para encerrar informe a idade 1\n");
	
	do{
		printf("Informe o sexo da %d pessoa (M|F): \n", i);
		scanf("%s", &sexo);
		fflush(stdin);
		
		sexo = toupper(sexo);
		
		printf("Informe a cor dos olhos da %d pessoa (azuis, verdes, castanhos, pretos): \n", i);
		fgets(corOlhos, 9, stdin);
		fflush(stdin);
		
		printf("Informe a cor dos cabelos da %d pessoa (loiros, castanhos, pretos): \n", i);
		fgets(corCabelos, 9, stdin);
		fflush(stdin);
		
		printf("Informe a idade da %d pessoa: \n", i);
		scanf("%d", &idade);
		fflush(stdin);
		
		if((idade>=18 || idade <=35) && sexo=='F'&& strcmp(corOlhos, "verdes")==1 && strcmp(corCabelos, "loiros")==1)
			mulherLoiraOlhosVerdes++;
						
		if(i==1)
			maiorIdade = idade;
		if(maiorIdade<idade)
			maiorIdade = idade;
		
		i++;
	}while(idade>=0);
	
	porcentagem = (mulherLoiraOlhosVerdes/i)*100;
	

	
	printf("A maior idade dos habitantes pesquisados e: %d \n", maiorIdade);
	printf("A porcentagem de individuos do sexo feminino cuja idade esta entre 18 e 35 anos inclusive \n e que tenham olhos verdes e cabelos loiros e: %.1f% \n", porcentagem);
	
	return 0;
}
