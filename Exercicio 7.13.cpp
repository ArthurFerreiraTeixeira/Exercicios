#include<stdio.h>

int main(){

	int letraA = 0, branco = 0, par = 0, contador, contador2;
	char frase[80],repete[80];
	
	printf("digite uma frase: ");
	fgets(frase,80,stdin);
	
	for(contador=0;contador<80;contador++){
		if(frase[contador]==' ')branco++;
		if(frase[contador]=='a' && frase[contador]=='A')letraA++;
		
		for(contador2=0;contador2<80;contador2++){
			if(frase[contador]==frase[contador2]){
			repete[contador]=frase[contador];
			}	}	}
			printf("o numero de letras a e %i\n",letraA);
			printf("o numero de brancos e %i\n",branco);
			for(contador=0;contador<par;contador++){
				printf("as letras que repetem sao: %c",repete[contador]);
			}

			return 0;
}
