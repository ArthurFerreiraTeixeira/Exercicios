#include<stdio.h> 

#include<stdlib.h> 

#include<string.h> 

int main(){


	int i, ouro[3], prata[3], bronze[3], soma[3], priSoma, segSoma, tercSoma;
	int priOuro, priPrata, priBronze, segOuro, segPrata, segBronze;
	int tercOuro, tercPrata, tercBronze;
	char pais[3][10], primeiro[10], segundo[10], terceiro[10];
	
	for(i=1;i<=3;i++){
		printf("Informe o nome do pais: ");
		fgets(pais[i], 10, stdin);
		fflush(stdin);
	}
	
	system("cls"); 
	
	for(i=1;i<=3;i++){
		printf("\nInforme a quantidade de medalhas de ouro do %s: ", pais[i]);
		scanf("%d", &ouro[i]);
		fflush(stdin);
	}
	
	system("cls"); 
	
	for(i=1;i<=3;i++){
		printf("\nInforme a quantidade de medalhas de prata do %s: ", pais[i]);
		scanf("%d", &prata[i]);
		fflush(stdin);
	}
	
	system("cls");
	
	for(i=1;i<=3;i++){
		printf("\nInforme a quantidade de medalhas de bronze do %s: ", pais[i]);
		scanf("%d", &bronze[i]);
		fflush(stdin);
		
		soma[i] = (ouro[i]*3) + (prata[i]*2) + bronze[i];
	}

	if(soma[1]>soma[2]&&soma[1]>soma[3]){
		strcpy(primeiro, pais[1]);
		priSoma = soma[1];
		priOuro = ouro[1];
		priPrata = prata[1];
		priBronze = bronze[1];}
		else if(soma[2]>soma[1]&&soma[2]>soma[3]){
			strcpy(primeiro, pais[2]);
			priSoma = soma[2];
			priOuro = ouro[2];
			priPrata = prata[2];
			priBronze = bronze[2];}
			else {strcpy(primeiro, pais[3]);
				priSoma = soma[3];
				priOuro = ouro[3];
				priPrata = prata[3];
				priBronze = bronze[3];}
	
	if((soma[1]>soma[2]&& soma[1]<soma[3])||(soma[1]<soma[2]&& soma[1]>soma[3])){
		strcpy(segundo, pais[1]);
		segSoma = soma[1];
		segOuro = ouro[1];
		segPrata = prata[1];
		segBronze = bronze[1];}
		else if((soma[2]>soma[1]&&soma[2]<soma[3])||(soma[2]<soma[1]&&soma[2]>soma[3])){
			strcpy(segundo, pais[2]);
			segSoma = soma[2];
			segOuro = ouro[2];
			segPrata = prata[2];
			segBronze = bronze[2];}
			else {
			strcpy(segundo, pais[3]);
			segSoma = soma[3];
			segOuro = ouro[3];
			segPrata = prata[3];
			segBronze = bronze[3];}
			
	if(soma[1]<soma[2]&& soma[1]<soma[3]){
		strcpy(terceiro, pais[1]);
		tercSoma = soma[1];
		tercOuro = ouro[1];
		tercPrata = prata[1];
		tercBronze = bronze[1];}
		else if(soma[2]<soma[1]&&soma[2]<soma[3]){
			strcpy(terceiro, pais[2]);
			tercSoma = soma[2];
			tercOuro = ouro[2];
			tercPrata = prata[2];
			tercBronze = bronze[2];}
			else {strcpy(terceiro, pais[3]);
				tercSoma = soma[3];
				tercOuro = ouro[3];
				tercPrata = prata[3];
				tercBronze = bronze[3];}

	printf("\n                QUADRO DE MEDALHAS                     \n\n\n");
	
	printf("\nPais ||  Ouro  ||  Prata  ||  Bronze  ||  Total  ||");
	printf("\n1° %s||    %d  ||     %d  ||     %d   ||       %d||", primeiro, priOuro, priPrata, priBronze, priSoma);
	printf("\n2° %s||    %d  ||     %d  ||     %d   ||       %d||", segundo, segOuro, segPrata, segBronze, segSoma);
	printf("\n3° %s||    %d  ||     %d  ||     %d   ||       %d||", terceiro, tercOuro, tercPrata, tercBronze, tercSoma);
	
	return 0;
}

