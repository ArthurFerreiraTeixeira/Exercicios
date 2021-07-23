#include<stdio.h>

int main(){

	int ciclo=0,contador,letra[30],opcao;
	
	for(contador=0;contador<30;contador++){
	printf("digite uma letra: ");
	setbuf(stdin,0);
	scanf("%c",&letra[contador]);
	
	printf("digite 1 se deseja finalizar: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	ciclo++;
	if(opcao==1)contador=30;}
	
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='A') printf("posicao 1 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='B') printf("posicao 2 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='C') printf("posicao 3 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='D') printf("posicao 4 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='E') printf("posicao 5 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='F') printf("posicao 6 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='G') printf("posicao 7 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='H') printf("posicao 8 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='I') printf("posicao 9 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='J') printf("posicao 10 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='K') printf("posicao 11 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='L') printf("posicao 12 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='M') printf("posicao 13 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='N') printf("posicao 14 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='O') printf("posicao 15 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='P') printf("posicao 16 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Q') printf("posicao 17 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='R') printf("posicao 18 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='S') printf("posicao 19 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='T') printf("posicao 20 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='U') printf("posicao 21 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='V') printf("posicao 22 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='W') printf("posicao 23 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='X') printf("posicao 24 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Y') printf("posicao 25 \n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Z') printf("posicao 26 \n");}
		
		return 0;
}
