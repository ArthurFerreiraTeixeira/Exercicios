#include<stdio.h>

int main(){
	
	int valorUser,i;
	
	printf("Valores Pares\n");
		printf("Digite um valor: ");
			while(scanf("%d",&valorUser)!=1){
				while(getchar()!='\n');
			}
	if(valorUser>2000){
		printf("Valor nao aceito! Digite outro valor:");
	}	

	for(valorUser;valorUser<=2000;valorUser++){
		if(valorUser%2==0){
			printf("\n%d||",valorUser);
		}
	}
	return 0;
}
