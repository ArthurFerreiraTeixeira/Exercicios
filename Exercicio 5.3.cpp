#include<stdio.h>

#include<stdlib.h>

int main(){
	
	int numero;
	
	printf("Informe um caracter: ");
	numero = getchar();
	fflush(stdin);
	
	printf("\nCaracter: %c\nDecimal: %d\nOctal: %o\nHexadecimal: %x", numero, numero, numero, numero);	
	
return 0;
}
