#include<stdio.h>

#include<ctype.h>

int main(){
	
	int i=1;
	float total=0, tinto=0, branco=0, rose=0,percTinto, percBranco, percRose;
	char vinho;
	
	printf("Para adicionar um vinho ao estoque informe o tipo do vinho:\n\nT - tinto\nB - branco\nR - rose\n\n");
	printf("Caso queira finalizar a entrada de vinhos, digite F\n\n");
	
	do{
		printf("%dª garrafa [T,B ou R]: ", i);
		scanf("%c", &vinho);
		fflush(stdin);
		
		vinho = toupper(vinho);
		
		switch(vinho){
			case 'T': tinto++;
					  total++; break;
			case 'B': branco++;
					  total++; break;
			case 'R': rose++;
					  total++; break;
			case 'F': printf("\n\nEntrada de vinho no estoque finalizada!");break;
			default: printf("\nOpcao Invalida!\n");
		};
		
		i++;
		
	}while(vinho != 'F');
	
	percTinto = (tinto/total)*100;
	percBranco = (branco/total)*100;
	percRose = (rose/total)*100;
	
	printf("\n\nNo estoque temos um total de %.0f garrafas de vinho, sendo:\n\n%.1f%% de vinho tinto\n%.1f%% de vinho branco\n%.1f%% de vinho rose", total, percTinto, percBranco, percRose);
	
	return 0;
}
