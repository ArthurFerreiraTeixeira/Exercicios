//ARTHUR FERREIRA TEIXEIRA
//UC21103744
//ENGENHARIA DE SOFTWARE 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	int qtdeSecoes = 0, qtdePessoas = 0, qtddePessoasM = 0, qtddePessoasF = 0, opcaoMenu, idade, qtdePessoasSexoMMaioresIdade = 0, qtdePessoasM = 0,
		qtdePessoasSexoFMaioresIdade = 0, qtdePessoasF = 0, qtdeCriancas = 0, qtdeAdolecentes = 0, qtdeAdultos = 0, qtdeIdosos = 0;
	char nomeFilme[20], sexo[3], * limparBuffer;

	do {
		printf("1 - SEJA BEM-VINDO AO CINEMA DE BRASILIA! \n"); //Mensagem a ser escrita na tela
		scanf("%d", &opcaoMenu); //expressão de controle
		scanf("%c", &limparBuffer); //expressão de controle
		fflush(stdin); //descarrega os buffers de saída de um fluxo de dados
		system("cls");

		switch (opcaoMenu) {
		case 1:

			do {
				printf("Qual a quantidade de sessoes que seram realizadas ? \n"); //Mensagem a ser escrita na tela
				scanf("%d", &qtdeSecoes); //expressão de controle
				scanf("%c", &limparBuffer); //expressão de controle
				fflush(stdin); //descarrega os buffers de saída de um fluxo de dados

				if (qtdeSecoes != 2) { //operador logico
					printf("quantidade invalida digite novamente: \n"); //Mensagem a ser escrita na tela
				}

			} while (qtdeSecoes != 2); // comandos a serem repetidos

			system("cls");

			do {
				printf("Digite o nome do filme: \n"); //Mensagem a ser escrita na tela
				fgets(nomeFilme, sizeof(nomeFilme), stdin);
				fflush(stdin); //descarrega os buffers de saída de um fluxo de dados

				if (strlen(nomeFilme) < 4) { //operador logico
					printf("Nome do filme invalido \n"); //Mensagem a ser escrita na tela
				}

			} while (strlen(nomeFilme) < 4); // comandos a serem repetidos

			system("cls");

			do {
				printf("Digite a quantidade de pessoas que irao assistir o filme: \n"); //Mensagem a ser escrita na tela
				scanf("%d", &qtdePessoas); //expressão de controle
				scanf("%c", &limparBuffer); //expressão de controle
				fflush(stdin); //descarrega os buffers de saída de um fluxo de dados

				if (qtdePessoas <= 9) { //operador logico
					printf("Quantidade invalida, digite novamente: \n");
				}
			} while (qtdePessoas <= 9); // comandos a serem repetidos

			system("cls");

			for (int i = 0; i < qtdePessoas; i++) { //comando de inicialização
				do {
					printf("digite o sexo da pessoa (M ou F) - %d\n", i + 1); //Mensagem a ser escrita na tela
					fgets(sexo, 2, stdin);
					fflush(stdin); //descarrega os buffers de saída de um fluxo de dados
					scanf("%c", &limparBuffer); //expressão de controle


					if (strcmp(sexo, "M") != 0 && strcmp(sexo, "F") == 0 && strcmp(sexo, "m") != 0 && strcmp(sexo, "f") != 0) { //operador logico
						printf("Sexo invalido, digite novamente !\n"); //Mensagem a ser escrita na tela
					}
				} while (strcmp(sexo, "M") != 0 && strcmp(sexo, "F") != 0 && strcmp(sexo, "m") != 0 && strcmp(sexo, "f") != 0); // comandos a serem repetidos

				system("cls");

				do {
					fflush(stdin);
					printf("digite a idade da pessoa: \n"); //Mensagem a ser escrita na tela
					scanf("%d", &idade); //expressão de controle
					fflush(stdin); //descarrega os buffers de saída de um fluxo de dados
					scanf("%c", &limparBuffer); //expressão de controle
					if (idade < 3 && idade>100) { //operador logico
						printf("idade errada, digite novamente: \n"); //Mensagem a ser escrita na tela
					}
				} while (idade < 3 && idade>100); // comandos a serem repetidos

				system("cls");

				if (strcmp(sexo, "M") == 0 || strcmp(sexo, "m") == 0) { //operador logico
					if (idade >= 3 && idade <= 13) { // operador logico
						qtdePessoasM++;
						qtdeCriancas++;
					}
					else if (idade >= 14 && idade <= 17) { //operador de erro
						qtdePessoasM++;
						qtdeAdolecentes++;
					}
					else if (idade >= 18 && idade <= 64) { //operador de erro
						qtdePessoasM++;
						qtdePessoasSexoMMaioresIdade++;
						qtdeAdultos++;
					}
					else if (idade >= 65 && idade <= 100) { //operador de erro
						qtdePessoasM++;
						qtdePessoasSexoMMaioresIdade++;
						qtdeIdosos++;
					}
				}
				if (strcmp(sexo, "F") == 0 || strcmp(sexo, "f") == 0) { // operador logico
					if (idade >= 3 && idade <= 13) { // operador logico
						qtdePessoasF++;
						qtdeCriancas++;
					}
					else if (idade >= 14 && idade <= 17) { //operador de erro
						qtdePessoasF++;
						qtdeAdolecentes++;
					}
					else if (idade >= 18 && idade <= 64) { //operador de erro
						qtdePessoasF++;
						qtdePessoasSexoFMaioresIdade++;
						qtdeAdultos++;
					}
					else if (idade >= 65 && idade <= 100) { //operador de erro
						qtdePessoasF++;
						qtdePessoasSexoFMaioresIdade++;
						qtdeIdosos++;
					}		
				}
			}


			system("cls");
			printf("NOME DO FILME: %s \n", nomeFilme); //Mensagem a ser escrita na tela
			printf("TOTAL DE PESSOAS DO SEXO MASCULINO: %d \n", qtdePessoasM); //Mensagem a ser escrita na tela
			printf("TOTAL DE PESSOAS DO SEXO FEMININO: %d \n", qtdePessoasF); //Mensagem a ser escrita na tela
			printf("TOTAL DE CRIANCAS: %d \n", qtdeCriancas); //Mensagem a ser escrita na tela
			printf("TOTAL DE ADOLESCENTES: %d \n", qtdeAdolecentes); //Mensagem a ser escrita na tela
			printf("TOTAL DE ADULTOS: %d \n", qtdeAdultos); //Mensagem a ser escrita na tela
			printf("TOTAL DE IDOSOS: %d \n\n\n", qtdeIdosos); //Mensagem a ser escrita na tela

			system("PAUSE");

			system("cls");
			printf("NOME DO FILM: %s \n", &nomeFilme); //Mensagem a ser escrita na tela
			printf("QUANTIDADE DE PESSOAS DO SEXO MASCULINO MAIORES DE IDADE %d \n", qtdePessoasSexoMMaioresIdade); //Mensagem a ser escrita na tela
			printf("QUANTIDADE DE PESSOAS DO SEXO FEMININO MAIORES DE IDADE %d \n\n\n", qtdePessoasSexoFMaioresIdade); //Mensagem a ser escrita na tela

			system("PAUSE");

			system("cls");
			break;

		default:
			printf("Digite a opcao 1 \n"); //Mensagem a ser escrita na tela
			break;
		}


	} while (opcaoMenu != 1 && opcaoMenu != 2 && opcaoMenu != 3); // comandos a serem repetidos
	return 0;
}
