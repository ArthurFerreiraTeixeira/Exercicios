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
		scanf("%d",&opcaoMenu);//expressão de controle
		scanf("%c",&limparBuffer);//expressão de controle
		system("cls");// limpar a tela de saída de programa
	
   
	switch(opcaoMenu)//Uma forma de reduzir a complexidade de vários if
	{
		case 1://Uma forma de reduzir a complexidade de vários if
		
		printf("SEJA BEM VINDO AO MELHOR SITE DE VIAGENS!\n\n");//Mensagem a ser escrita na tela
		printf("Essa parte do nosso site fala um pouco como funcionamos, nossas empresas aereas, tudo sobre o site\n\n");//Mensagem a ser escrita na tela
		printf("Nascemos da ideia de que podemos ajudar pessoas \na realizar sonhos e viver grandes experiências sem gastar muito!\n");//Mensagem a ser escrita na tela
		printf("Adquirimos milhas aéreas no mercado e emitimos passagens \npor valores, na grande maioria das vezes, muito mais baratos em\n");//Mensagem a ser escrita na tela
		printf("comparação com outros meios de aquisição. Portanto, você voa \npara onde quiser, pagando muito menos por isso!");//Mensagem a ser escrita na tela
		printf("Utilizando a tecnologia como recurso, \numa necessidade de mercado e a solução de um problema como ideal, criamos \numa plataforma");//Mensagem a ser escrita na tela
		printf("que contribui para a melhoria das relações de consumo, tornando-as \nmais justas e harmônicas para todos.\n");//Mensagem a ser escrita na tela
		printf("\n");
		
		break;
		
		case 2://Uma forma de reduzir a complexidade de vários if 
		  printf("Lugares disponiveis para viagens: \n");//Mensagem a ser escrita na tela
			
		  printf("Escolha um dos estados que você queira viajar para ver os lugares disponiveis!\n");//Mensagem a ser escrita na tela
		  printf("1-Região Norte\n");//Mensagem a ser escrita na tela
		  printf("2-Região Nordeste\n");//Mensagem a ser escrita na tela
		  printf("3-Região Centro-Oeste\n");//Mensagem a ser escrita na tela
		  printf("4-Região Sudeste\n");//Mensagem a ser escrita na tela
		  printf("5-Região Sul\n\n");//Mensagem a ser escrita na tela
		  
		  printf("Digite um número correspondente a sua região de sua viagem: ");//Mensagem a ser escrita na tela
		  scanf("%d",&opcaoViagem);//expressão de controle
		  
		
		  switch(opcaoViagem)//Uma forma de reduzir a complexidade de vários if
		    {
		    do{//Comandos a serem repetidos
		    		
	         printf("Deseja retornar ao menu ?");//Mensagem a ser escrita na tela
	         fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
	         scanf("%c",&opcaoMenu);//expressão de controle
	         system("cls");// limpar a tela de saída de programa
			
		    case 1://Uma forma de reduzir a complexidade de vários if
		    	printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
		    	printf("Acre      | Rio Branco\n");//Mensagem a ser escrita na tela
		    	printf("Amazonas  | Manaus\n");//Mensagem a ser escrita na tela
		    	printf("Rondônia  | Porto Velho\n");//Mensagem a ser escrita na tela
		    	printf("Roraima   | Boa Vista\n");//Mensagem a ser escrita na tela
		    	printf("Amapá     | Macapá\n");//Mensagem a ser escrita na tela
		    	printf("Pará      | Belém\n");//Mensagem a ser escrita na tela
		    	printf("Tocantins | Palmas\n\n");//Mensagem a ser escrita na tela
		    	
		    	printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//expressão de controle
		    	
		    	break;
			
			case 2://Uma forma de reduzir a complexidade de vários if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Maranhão            | São Luís\n");//Mensagem a ser escrita na tela
				printf("Piauí               | Teresina\n");//Mensagem a ser escrita na tela
				printf("Bahia               | Salvador\n");//Mensagem a ser escrita na tela
				printf("Ceará               | Fortaleza\n");//Mensagem a ser escrita na tela
				printf("Rio Grande Do Norte | Natal\n");//Mensagem a ser escrita na tela
				printf("Paraíba             | João Pessoa\n");//Mensagem a ser escrita na tela
				printf("Pernambuco          | Recife\n");//Mensagem a ser escrita na tela
				printf("Alagoas             | Maceió\n");//Mensagem a ser escrita na tela
				printf("Sergipe             | Aracaju\n\n");//Mensagem a ser escrita na tela
				
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//expressão de controle
		    	
		    	break;
		    	
			case 3://Uma forma de reduzir a complexidade de vários if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Mato Grosso        | Cuiabá\n");//Mensagem a ser escrita na tela
				printf("Mato Grosso do Sul | Campo Grande\n");//Mensagem a ser escrita na tela
				printf("Goiás              | Goiânia\n");//Mensagem a ser escrita na tela
				printf("DF                 | Brasília\n\n");//Mensagem a ser escrita na tela
								
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//expressão de controle
		    	
		    	break;
		    	
		    case 4://Uma forma de reduzir a complexidade de vários if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Minas Gerais   | Belo Horizonte\n");//Mensagem a ser escrita na tela
				printf("São Paulo      | São Paulo\n");//Mensagem a ser escrita na tela
				printf("Rio de Janeiro | Rio de Janeiro\n");//Mensagem a ser escrita na tela
				printf("Espírito Santo | Vitória\n\n");//Mensagem a ser escrita na tela
												
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//expressão de controle
		    	
		    	break;
		    
			case 5://Uma forma de reduzir a complexidade de vários if
				printf("ESTADOS\n\n");//Mensagem a ser escrita na tela
				printf("Paraná            | Curitiba\n");//Mensagem a ser escrita na tela
				printf("Santa Catarina    | Florianópolis\n");//Mensagem a ser escrita na tela
				printf("Rio Grande do Sul | Porto Alegre\n\n");//Mensagem a ser escrita na tela
																
				printf("Digite a Regiao de sua Viagem: \n");//Mensagem a ser escrita na tela
		    	scanf("%s",&lugarViagem);//expressão de controle
		    	
		    	break;
		    	
		    }while(opcaoMenu != 'N');//Comandos a serem repetidos
			}
	     break;
	     
		case 3://Uma forma de reduzir a complexidade de vários if
			
		do{//Comandos a serem repetidos
		  printf("\n");
		  printf("QUAL O DESTINO DA SUA VIAJEM (CIDADE)?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		  scanf("%s",&destinoViajem);//expressão de controle
	
	    
	      if(destino< 0){
	    	printf("Digite um destino válido:");//Mensagem a ser escrita na tela
		   }
		}while(destino < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa
		
		do{//Comandos a serem repetidos
		  printf("\n");
		  printf("QUANTIDADE DE PESSOAS QUE VIAJARAM?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		  scanf("%s",&qtdPessoas);//expressão de controle	
		  
		  	 if(pessoas < 0){
	    	printf("Digite uma quatidade de pessoas válidas:");//Mensagem a ser escrita na tela
	        } 
		}while(pessoas < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa
			
		do{//Comandos a serem repetidos
		  printf("INFORME QUANTAS PASSAGENS SERÃO COMPRADAS?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		  scanf("%s",&qtdPassagens);//expressão de controle
		  		  
		  if(passagens < 0){
	    	printf("Digite uma quatidade de passagens válida:");//Mensagem a ser escrita na tela
	        }
		}while(passagens < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa
		
		
		do{//Comandos a serem repetidos
		  printf("\n");	
		  printf("DA QUANTIDADE TOTAL DAS PESSOAS QUE IRAO VIAJAR",&qtdPessoas);//Mensagem a ser escrita na tela
		  printf("\n");
		  printf("Quantas sao criaças (até 5 anos)?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		  scanf("%s",&qtdCriancas);//expressão de controle  

		  
		  if(criancas < 0){
	    	printf("Digite uma quatidade de crianças válida:");//Mensagem a ser escrita na tela
	        }
		}while(criancas < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa
		
		do{//Comandos a serem repetidos
		  printf("\n");	
		  printf("DA QUANTIDADE TOTAL DAS PESSOAS QUE IRAO VIAJAR",qtdPessoas);//Mensagem a ser escrita na tela
		  printf("\n");
		  printf("Quantas sao Adultos?");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		  scanf("%s",&qtdAdultos);//expressão de controle  
		  	
		  
		  if(adultos < 0){
	    	printf("Digite uma quatidade de adultos válido:");//Mensagem a ser escrita na tela
		   }
		}while(adultos < 0);//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa
		
		do{//Comandos a serem repetidos
		  printf("ESCOLHA O NUMERO DE SEU ACENTO ENTRE 1 A 200: ");//Mensagem a ser escrita na tela
		  fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		  scanf("%s",&numAcentos);//expressão de controle
		  	
		  
		  if( acento< 1 && acento>200 ){
	    	printf("Digite um numero de acento válido: \n");//Mensagem a ser escrita na tela
	       }
		}while( acento< 1 && acento>200 );//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa	  
		 
		do{//Comandos a serem repetidos
		  printf("Preço de passagens: \n");//Mensagem a ser escrita na tela
		  printf("Crianças tem 50 porcento de desconto\n");//Mensagem a ser escrita na tela
		  printf("Cada Criança ate 5 anos: R$ 250,00\n");//Mensagem a ser escrita na tela
		  printf("Cada Adulto:  R$ 500,00\n");//Mensagem a ser escrita na tela
		   printf("Preço a pagar conforme qunatas pessoas iram viajar e se e adulto ou criança!\n\n");//Mensagem a ser escrita na tela
		   
		  printf("RETORNAR AO MENU:: ");//Mensagem a ser escrita na tela	
		  scanf("%i",&opcaoMenu);//expressão de controle
		  
		   if( opcaoMenu< 0 ){
	    	printf("Informe uma tecla: \n");//Mensagem a ser escrita na tela
	         }
		}while( opcaoMenu< 0 );//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa

		break;
				
		case 4://Uma forma de reduzir a complexidade de vários if
		  printf("Venda concluida com Sucesso!\n\n");//Mensagem a ser escrita na tela
		  printf("REGIÃO ESCOLHIDA: %S\n",&lugarViagem);//Mensagem a ser escrita na tela
		  printf("DESTINO ESCOLHIDO: %s\n",&destinoViajem);//Mensagem a ser escrita na tela
		  printf("QUANTIDADE DE PESSOAS QUE IRAM VIAJAR: %s\n",&qtdPessoas);//Mensagem a ser escrita na tela
		  printf("QUANTOS SÃO CRIANÇAS: %s\n",&qtdCriancas);//Mensagem a ser escrita na tela
		  printf("QUANTOS SÃO ADULTOS: %s\n",&qtdAdultos);//Mensagem a ser escrita na tela
	   	  printf("NÚMERO DE SEU ASCENTO: %s\n\n",&numAcentos);//Mensagem a ser escrita na tela
	   	  
	   	break;	
	   	
	   	case 5://Uma forma de reduzir a complexidade de vários if
	   	   return 0;//Encerra a execução de uma função e retorna o controle para a função de chamada
	    ;break;//Realiza desvio incondicional
	}
	
	printf("Deseja retornar ao menu ?");//Mensagem a ser escrita na tela
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
	scanf("%c",&opcaoMenu);//expressão de controle
	system("cls");// limpar a tela de saída de programa
   }while(opcaoMenu != 'N');//Comandos a serem repetidos
   
	return 0;//Encerra a execução de uma função e retorna o controle para a função de chamada
}
