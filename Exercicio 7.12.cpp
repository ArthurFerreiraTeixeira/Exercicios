#include<stdio.h>

int main(){

	int contador, contador2, matricula[50], recente1, recente2, recente3, meses[50];
	
	
	for(contador=0;contador<50;contador++){
		printf("digite a matricula funcional do empregado: ");
		scanf("%i",&matricula[contador]);
		
		if(matricula[contador]==0){
			for(contador2=0;contador2<contador;contador2++){ if(contador2==0) recente1=meses[contador2];
			else if(recente1<meses[contador2]) recente1=meses[contador2];}
			
			for(contador2=0;contador2<contador;contador2++) if(recente1=meses[contador2]){
			meses[contador2]=999;
			recente1=matricula[contador2];}
			
			for(contador2=0;contador2<contador;contador2++){
			if(contador2==0) recente2=meses[contador2];
			else if(recente2<meses[contador2]) recente2=meses[contador2];}
			
			for(contador2=0;contador2<contador;contador2++) if(recente2=meses[contador2]){
			meses[contador2]=999;
			recente2=matricula[contador2];}
			
			for(contador2=0;contador2<contador;contador2++){
			if(contador2==0) recente3=meses[contador2];
			else if(recente3<meses[contador2]) recente3=meses[contador2];}
			
		printf("a matricula funcional dos funcionarios mais recentes s�o %i\%i\%i",recente1,recente2,recente3);
			return 0;
		}
		printf("digite o numero de meses de trabalho deste empregado: ");
		scanf("%i",&meses[contador]);	
	}
		return 0;
}
