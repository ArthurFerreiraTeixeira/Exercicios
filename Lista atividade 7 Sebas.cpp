//ARTHUR FERREIRA TEIXEIRA
//UC21103744
//ENGENHARIA DE SOFTWARE 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){

	setlocale(LC_CTYPE,"portuguese");
	char palavra[60]; // Um vetor para armazenar a palavra
	char letra[1]; // Um vetor para armazenar a letra
	int i,j = 0; 

	printf("\nDigite uma letra\n");
	scanf("%c",&letra);

	printf("\nDigite uma palavra\n");
	scanf("%s",&palavra);

	for(i=0; i < strlen(palavra); i++ ) { // aqui no par�metro do for, usei a fun��o strlen() como limite pro loop
            if(letra[1] == palavra[i]) { // utilizei o for e o if para percorrer cada �ndice do vetor e comparar as strings
                j++; // o j++ est� servindo apenas para contar quantas vezes a letra se repete
            }
            else {
                continue; // caso a letra n�o se repetir, o la�o continua
            }
        }

    printf("\nA letra %c aparece %d vezes na palavra %s \n", letra[1] ,j ,palavra); 




    system("pause");
	return 0;
}
