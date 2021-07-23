#include<stdio.h>

int main(){

	float H, n, i;
	
	printf("Informe o denominador maximo: ");
	scanf("%f",&n);
	
	H=0;
		
	if(n<0 && n==0){
		printf("Somente numeros inteiros positivos e diferente de 0!");
	} else {
		for(i=1;i<=n;i++){
			
			H = H + (1/i);
		
		}
	printf("\n Resultado Final: %.2f\n",H);
	}
	
	return 0;
}
