#include<stdio.h>

int main(){

	int contador, idade[100], opcao, ciclo = 0, totalIdade, maisVelha;
	float media;
	
	for(contador=0;contador<100;contador++){
	printf("informe uma idade: ");
	scanf("%i",&idade[contador]);
	
	printf("digite 0 se deseja finalizar: ");
	scanf("%i",&opcao);
	ciclo++;
	if(opcao==1)contador=101;}
	
	for(contador=0;contador<ciclo;contador++){
		totalIdade+=idade[contador];
		media=1.0f*(totalIdade/ciclo);
		if(contador==0)maisVelha=idade[contador] ;
		else{
		 if(maisVelha<idade[contador] )maisVelha=idade[contador];
		}
	}
	printf("a media e: %.2f\n",media);
	for(contador=0;contador<ciclo;contador++){
		if(maisVelha==idade[contador]) printf("localizacao da idade mais velha: %i \n",contador);
	}

	return 0;
}
