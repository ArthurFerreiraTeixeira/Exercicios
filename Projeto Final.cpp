//ARTHUR FERREIRA TEIXEIRA
//UC21103744
//ENGENHARIA DE SOFTWARE 

//NAO CONSEGUIR COLOCAR AS LETRAS COM MATRIZ

#include <stdio.h>


#include <stdlib.h>


#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcaoMenu = 0, acento = 0, opcaoViagem = 0, regiaoViagem = 0, destinoViajem = 0, qtdPassagens = 0, numAcentos =0, lugarViagem = 0;
	int qtdPessoas = 0, qtdCriancas = 0, qtdAdultos = 0, destino = 0, passagens = 0, criancas = 0, adultos = 0, pessoas = 0;
	char limparBuffer;
	
do{//Comandos a serem repetidos

		printf("1 - Seja bem vindo ao SALUMAR LINHAS AEREAS!\n");//Mensagem a ser escrita na tela
		printf("2 - Lugares Disponiveis\n");//Mensagem a ser escrita na tela
		printf("3 - Reservas\n");//Mensagem a ser escrita na tela
		printf("4 - Vendas Confirmadas\n");//Mensagem a ser escrita na tela
		printf("5 - Fecha o programa\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite um numero correspondente ao menu: ");//Mensagem a ser escrita na tela
		scanf("%d",&opcaoMenu);//express�o de controle
		scanf("%c",&limparBuffer);//express�o de controle
		system("cls");// limpar a tela de sa�da de programa
	
   
	switch(opcaoMenu)//Uma forma de reduzir a complexidade de v�rios if
	{
		case 1://Uma forma de reduzir a complexidade de v�rios if
		
		printf("SEJA BEM VINDO AO MELHOR SITE DE VIAGENS!\n\n");//Mensagem a ser escrita na tela
		printf("Essa parte do nosso site fala um pouco como funcionamos, nossas empresas aereas, tudo sobre o site\n\n");//Mensagem a ser escrita na tela
		printf("Nascemos da ideia de que podemos ajudar pessoas \na realizar sonhos e viver grandes experi�ncias sem gastar muito!\n");//Mensagem a ser escrita na tela
		printf("Adquirimos milhas a�reas no mercado e emitimos passagens \npor valores, na grande maioria das vezes, muito mais baratos em\n");//Mensagem a ser escrita na tela
		printf("compara��o com outros meios de aquisi��o. Portanto, voc� voa \npara onde quiser, pagando muito menos por isso!");//Mensagem a ser escrita na tela
		printf("Utilizando a tecnologia como recurso, \numa necessidade de mercado e a solu��o de um problema como ideal, criamos \numa plataforma");//Mensagem a ser escrita na tela
		printf("que contribui para a melhoria das rela��es de consumo, tornando-as \nmais justas e harm�nicas para todos.\n");//Mensagem a ser escrita na tela
		printf("\n");
		
		break;
		
		case 2://Uma forma de reduzir a complexidade de v�rios if 
		  printf("Lugares disponiveis para viagens: \n");//Mensagem a ser escrita na tela
			
		  printf("Escolha um dos estados que voc� queira viajar para ver os lugares disponiveis!\n");//Mensagem a ser escrita na tela
		  printf("1-Regi�o Norte\n");//Mensagem a ser escrita na tela
		  printf("2-Regi�o Nordeste\n");//Mensagem a ser escrita na tela
		  printf("3-Regi�o Centro-Oeste\n");//Mensagem a ser escrita na tela
		  printf("4-Regi�o Sudeste\n");//Mensagem a ser escrita na tela
		  printf("5-Regi�o Sul\n\n");//Mensagem a ser escrita na tela
		  
		  printf("Digite um n�mero correspondente a sua regi�o de sua viagem: ");//Mensagem a ser escrita na tela
		  scanf("%d",&opcaoViagem);//express�o de controle
		  
		
		  switch(opcaoViagem)//Uma forma de reduzir a complexidade de v�rios if
		    {
		    do{//Comandos a serem repetidos
		    		
	         printf("Deseja retornar ao menu ?");//Mensagem a ser escrita na tela
	         fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
	         scanf("%c",&opcaoMenu);//express�o de controle
	         system("cls");// limpar a tela de sa�da de programa
			
		    case 1://Uma forma de reduzir a complexidade de v�rios if
		    	printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
		    	printf("Acre      | Rio Branco\n");//Mensagem a ser escrita na tela
		    	printf("Amazonas  | Manaus\n");//Mensagem a ser escrita na tela
		    	printf("Rond�nia  | Porto Velho\n");//Mensagem a ser escrita na tela
		    	printf("Roraima   | Boa Vista\n");//Mensagem a ser escrita na tela
		    	printf("Amap�     | Macap�\n");//Mensagem a ser escrita na tela
		    	printf("Par�      | Bel�m\n");//Mensagem a ser escrita na tela
		    	printf("Tocantins | Palmas\n\n");//Mensagem a ser escrita na tela
		    	
		    	printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//express�o de controle
		    	
		    	break;
			
			case 2://Uma forma de reduzir a complexidade de v�rios if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Maranh�o            | S�o Lu�s\n");//Mensagem a ser escrita na tela
				printf("Piau�               | Teresina\n");//Mensagem a ser escrita na tela
				printf("Bahia               | Salvador\n");//Mensagem a ser escrita na tela
				printf("Cear�               | Fortaleza\n");//Mensagem a ser escrita na tela
				printf("Rio Grande Do Norte | Natal\n");//Mensagem a ser escrita na tela
				printf("Para�ba             | Jo�o Pessoa\n");//Mensagem a ser escrita na tela
				printf("Pernambuco          | Recife\n");//Mensagem a ser escrita na tela
				printf("Alagoas             | Macei�\n");//Mensagem a ser escrita na tela
				printf("Sergipe             | Aracaju\n\n");//Mensagem a ser escrita na tela
				
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//express�o de controle
		    	
		    	break;
		    	
			case 3://Uma forma de reduzir a complexidade de v�rios if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Mato Grosso        | Cuiab�\n");//Mensagem a ser escrita na tela
				printf("Mato Grosso do Sul | Campo Grande\n");//Mensagem a ser escrita na tela
				printf("Goi�s              | Goi�nia\n");//Mensagem a ser escrita na tela
				printf("DF                 | Bras�lia\n\n");//Mensagem a ser escrita na tela
								
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//express�o de controle
		    	
		    	break;
		    	
		    case 4://Uma forma de reduzir a complexidade de v�rios if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Minas Gerais   | Belo Horizonte\n");//Mensagem a ser escrita na tela
				printf("S�o Paulo      | S�o Paulo\n");//Mensagem a ser escrita na tela
				printf("Rio de Janeiro | Rio de Janeiro\n");//Mensagem a ser escrita na tela
				printf("Esp�rito Santo | Vit�ria\n\n");//Mensagem a ser escrita na tela
												
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//express�o de controle
		    	
		    	break;
		    
			case 5://Uma forma de reduzir a complexidade de v�rios if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Paran�            | Curitiba\n");//Mensagem a ser escrita na tela
				printf("Santa Catarina    | Florian�polis\n");//Mensagem a ser escrita na tela
				printf("Rio Grande do Sul | Porto Alegre\n\n");//Mensagem a ser escrita na tela
																
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//express�o de controle
		    	
		    	break;
		    	
		    }while(opcaoMenu != 'N');//Comandos a serem repetidos
			}
	     break;
	     
		case 3://Uma forma de reduzir a complexidade de v�rios if
			
		do{//Comandos a serem repetidos
		  printf("\n");
		  printf("QUAL O DESTINO DA SUA VIAJEM (CIDADE)?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		  scanf("%s",&destinoViajem);//express�o de controle
	
	    
	      if(destino< 0){
	    	printf("Digite um destino v�lido:");//Mensagem a ser escrita na tela
		   }
		}while(destino < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa
		
		do{//Comandos a serem repetidos
		  printf("\n");
		  printf("QUANTIDADE DE PESSOAS QUE VIAJARAM?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		  scanf("%s",&qtdPessoas);//express�o de controle	
		  
		  	 if(pessoas < 0){
	    	printf("Digite uma quatidade de pessoas v�lidas:");//Mensagem a ser escrita na tela
	        } 
		}while(pessoas < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa
			
		do{//Comandos a serem repetidos
		  printf("INFORME QUANTAS PASSAGENS SER�O COMPRADAS?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		  scanf("%s",&qtdPassagens);//express�o de controle
		  		  
		  if(passagens < 0){
	    	printf("Digite uma quatidade de passagens v�lida:");//Mensagem a ser escrita na tela
	        }
		}while(passagens < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa
		
		
		do{//Comandos a serem repetidos
		  printf("\n");	
		  printf("DA QUANTIDADE TOTAL DAS PESSOAS QUE IRAO VIAJAR",&qtdPessoas);//Mensagem a ser escrita na tela
		  printf("\n");
		  printf("Quantas sao cria�as (at� 5 anos)?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		  scanf("%s",&qtdCriancas);//express�o de controle  

		  
		  if(criancas < 0){
	    	printf("Digite uma quatidade de crian�as v�lida:");//Mensagem a ser escrita na tela
	        }
		}while(criancas < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa
		
		do{//Comandos a serem repetidos
		  printf("\n");	
		  printf("DA QUANTIDADE TOTAL DAS PESSOAS QUE IRAO VIAJAR",qtdPessoas);//Mensagem a ser escrita na tela
		  printf("\n");
		  printf("Quantas sao Adultos?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		  scanf("%s",&qtdAdultos);//express�o de controle  
		  	
		  
		  if(adultos < 0){
	    	printf("Digite uma quatidade de adultos v�lido:");//Mensagem a ser escrita na tela
		   }
		}while(adultos < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa
		
		do{//Comandos a serem repetidos
		  printf("ESCOLHA O NUMERO DE SEU ACENTO ENTRE 1 A 200: ");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		  scanf("%s",&numAcentos);//express�o de controle
		  	
		  
		  if( acento< 1 && acento>200 ){
	    	printf("Digite um numero de acento v�lido: \n");//Mensagem a ser escrita na tela
	       }
		}while( acento< 1 && acento>200 );//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa	  
		 
		do{//Comandos a serem repetidos
		  printf("Pre�o de passagens: \n");//Mensagem a ser escrita na tela
		  printf("Crian�as tem 50 porcento de desconto\n");//Mensagem a ser escrita na tela
		  printf("Cada Crian�a ate 5 anos: R$ 250,00\n");//Mensagem a ser escrita na tela
		  printf("Cada Adulto:  R$ 500,00\n");//Mensagem a ser escrita na tela
		   printf("Pre�o a pagar conforme qunatas pessoas iram viajar e se e adulto ou crian�a!\n\n");//Mensagem a ser escrita na tela
		   
		  printf("RETORNAR AO MENU:: ");//Mensagem a ser escrita na tela	
		  scanf("%i",&opcaoMenu);//express�o de controle
		  
		   if( opcaoMenu< 0 ){
	    	printf("Informe uma tecla: \n");//Mensagem a ser escrita na tela
	         }
		}while( opcaoMenu< 0 );//Comandos a serem repetidos
		system("cls");// limpar a tela de sa�da de programa

		break;
				
		case 4://Uma forma de reduzir a complexidade de v�rios if
		  printf("Venda concluida com Sucesso!\n\n");//Mensagem a ser escrita na tela
		  printf("REGI�O ESCOLHIDA: %S\n",&lugarViagem);//Mensagem a ser escrita na tela
		  printf("DESTINO ESCOLHIDO: %s\n",&destinoViajem);//Mensagem a ser escrita na tela
		  printf("QUANTIDADE DE PESSOAS QUE IRAM VIAJAR: %s\n",&qtdPessoas);//Mensagem a ser escrita na tela
		  printf("QUANTOS S�O CRIAN�AS: %s\n",&qtdCriancas);//Mensagem a ser escrita na tela
		  printf("QUANTOS S�O ADULTOS: %s\n",&qtdAdultos);//Mensagem a ser escrita na tela
	   	  printf("N�MERO DE SEU ASCENTO: %s\n\n",&numAcentos);//Mensagem a ser escrita na tela
	   	  
	   	break;	
	   	
	   	case 5://Uma forma de reduzir a complexidade de v�rios if
	   	   return 0;//Encerra a execu��o de uma fun��o e retorna o controle para a fun��o de chamada
	    ;break;//Realiza desvio incondicional
	}
	
	printf("Deseja retornar ao menu ?");//Mensagem a ser escrita na tela
	fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
	scanf("%c",&opcaoMenu);//express�o de controle
	system("cls");// limpar a tela de sa�da de programa
   }while(opcaoMenu != 'N');//Comandos a serem repetidos
   
	return 0;//Encerra a execu��o de uma fun��o e retorna o controle para a fun��o de chamada
}
