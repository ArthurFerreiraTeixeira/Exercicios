#include<stdio.h>

#include<ctype.h>

int main(){
	
	int numImaginado, chutes, i=1;
	
	printf("Informe o numero imaginado: ");
	scanf("%d", &numImaginado);
	fflush(stdin);
	
	while(chutes != numImaginado){
			
		printf("%d° chute: ", i);
		scanf("%d", &chutes);
		fflush(stdin);
		
		if(chutes<numImaginado)
			printf("\nMais\n");
			else if(chutes>numImaginado)
				printf("\nMenos\n");
					else printf("\nAcertou!\n");
		
		
		i++;		
	}
	
	printf("\nO número imaginado foi: %d", numImaginado);
	
	return 0;
}
