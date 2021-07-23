#include<stdio.h> 

int main(){

	
	float numero1, numero2, numero3;
	
	printf("Digite tres numeros: \n"); //Mensagem a ser escrita na tela
	scanf("%f%f%f", &numero1, &numero2, &numero3); //expressão de controle
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
	
	
	if (numero1<numero2 and numero1<numero3){printf("O menor numero digitado e: %.1f", numero1); //Mensagem a ser escrita na tela //operador logico
		}else if (numero2<numero1 and numero2<numero3){printf("O menor numero digitado e: %.1f", numero2); //Mensagem a ser escrita na tela //operador de erro
			}else {printf("O menor numero digitado e: %.1f", numero3); //Mensagem a ser escrita na tela //operador de erro
			}
	
	return 0;
}
