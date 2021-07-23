#include <stdio.h>

/*Biblioteca para limpar tela*/
#include <stdlib.h>

/*Biblioteca para manipulação de strings*/
#include <string.h>

/*Biblioteca de acentuação*/
#include <locale.h>

// necessário p/ as funções rand() e srand()
#include <stdlib.h>

//necessário p/ função time()
//necessário para usar localtime() e struct tm
#include<time.h>

int main(){//Retornar um inteiro para o sistema operacional

	
   setlocale(LC_ALL, "Portuguese");//Faz referência à todos os aspectos da localização
	
	int opcaoMenu = 0,tamanhoString = 0,opcaoRegiao = 0,horaCadastro;//Armazena valores numéricos inteiros
	char nomeCadastro[100],nomeCadastroPrintf[100],sexoCadastro,emailCadastro[100],nomeDaMae[100],dataNasci[100],enderecoCadastro[100],tipoComorbidade[100],cpfCadastro[11],cnsCadastro[32],telefoneCadastro[12],cepCadastro[8],redefinirDadosCadastro,retornarMenu,regiaoAdm[100],estabelecimentoSaude[100],nomeLogIn[10],senhaUsuario[10];//armazena caracteres
	
do{//Comando de repetição junto com while
		do{//Comando de repetição junto com while
			printf("1-Inicio\n");//Mensagem a ser escrita na tela
			printf("2-Informações sobre a Covid-19\n");//Mensagem a ser escrita na tela
			printf("3-Cadastro\n");//Mensagem a ser escrita na tela
			printf("4-Agendamento\n");//Mensagem a ser escrita na tela
			printf("5-logIn\n");
			printf("6-Sair do programa\n\n");//Mensagem a ser escrita na tela
			
			printf("Digite um número correspondente ao menu:");//Mensagem a ser escrita na tela
			scanf("%d",&opcaoMenu);//expressão de controle
			system("cls");// limpar a tela de saída de programa
			
			tamanhoString = strlen(nomeCadastroPrintf);//variável do tipo inteiro
			
			if(opcaoMenu == 4 && tamanhoString < 2){//operador logico
				printf("Cadastro Não Encontrado\n");//Mensagem a ser escrita na tela
				printf("Faça seu cadastro\n\n");//Mensagem a ser escrita na tela
			}
			
		}while(opcaoMenu == 4 && tamanhoString < 3);//Comandos a serem repetidos
	
	    
		system("cls");// limpar a tela de saída de programa
	     
		switch(opcaoMenu)//Uma forma de reduzir a complexidade de vários if
		{
			case 1 ://Uma forma de reduzir a complexidade de vários if 
			
			printf("\n");//Espaço entre linhas 
			printf("O CUIDADO É DE CADA UM O BENEFÍCIO É PARA TODOS\n");//Mensagem a ser escrita na tela
			printf("Use máscara\n");//Mensagem a ser escrita na tela
			printf("Lave as mãos com água e sabão\n");//Mensagem a ser escrita na tela
			printf("Manteha distância segura\n");//Mensagem a ser escrita na tela
			printf("Manteha os ambientes ventilados\n\n");//Mensagem a ser escrita na tela
			
			printf("VACINÔMETRO\n");//Mensagem a ser escrita na tela
			printf("90.664.475\n");//Mensagem a ser escrita na tela
			printf("De doses distribuídas em todo o Brasil\n\n");//Mensagem a ser escrita na tela
			
			printf("VACINÔMETRO\n");//Mensagem a ser escrita na tela
			printf("54.013.881\n");//Mensagem a ser escrita na tela
			printf("De doses aplicadas em todo o Brasil\n\n");//Mensagem a ser escrita na tela
			
			printf("NOTÍCIAS DO DIA:\n");//Mensagem a ser escrita na tela
			printf("Ministro Queiroga aplica primeira dose em atletas que representarão o Brasil em Tóquio\n");//Mensagem a ser escrita na tela
			printf("Pátria vacinada: mais de 90 milhões de doses de vacinas Covid-19 já foram distribuídas pelo Ministério da Saúde\n");//Mensagem a ser escrita na tela
		    printf("Fiocruz garante entrega de 18 milhões de vacinas Astazeneca da Covid-19 até junho\n\n");//Mensagem a ser escrita na tela
			;break;//Realiza desvio incondicional
			
			
			
			case 2 ://Uma forma de reduzir a complexidade de vários if
				
			printf("\n");//Espaço entre linhas 
			printf("PREVINA-SE\n");//Mensagem a ser escrita na tela
			printf("O cuidado é de cada um.A responsabilidade é\nde todos.Ainda que o Brasil esteja avançando\nem vacinação,é importante que a população\nmanteha medidas de prevenção e controle\norientadas pelo Ministério da Saúde.É adontando\nmedidas simples que salvaremos mais vidas!");//Mensagem a ser escrita na tela
		
			printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
		
			printf("Formas de transmissão:\n");//Mensagem a ser escrita na tela
			printf("1-Por saliva,catarro e gotículas expelidas pela boca(espirro,tosse e fala)\n");//Mensagem a ser escrita na tela
			printf("2-Apertos de mão,abraços e beijos\n");//Mensagem a ser escrita na tela
			printf("3-maçanetas e corrimãos");//Mensagem a ser escrita na tela
			
			printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
			
			printf("Reduza o risco de transmissão\n");//Mensagem a ser escrita na tela
			printf("É dever de todos adotar medidas de prevenção\ne controle no dia a dia para conter a\ndisseminação do vírus.Confira seis medidas\npreventivas para colocar em prática:\n\n");//Mensagem a ser escrita na tela
			printf("1-Use máscara o tempo todo\n");//Mensagem a ser escrita na tela
			printf("2-Lave as mãos com água e sabão ou use álcool em gel\n");//Mensagem a ser escrita na tela
			printf("3-Cubra o nariz e boca ao espirrar\n");//Mensagem a ser escrita na tela
			printf("4-Manteha o distanciamento social mínimo de 1 metro\n");//Mensagem a ser escrita na tela
			printf("5-Evite aglomerações\n");//Mensagem a ser escrita na tela
			printf("6-Isole-se ao apresentar sintomas como tosse,dor de garganta e febre");//Mensagem a ser escrita na tela
			
			printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
			
			printf("Use a máscara corretamente\n");//Mensagem a ser escrita na tela
			printf("O Coronavírus(SARS-CoV-2) é transmitido de\ntrês formas:contato,goticulas ou aerossol.\nDessa forma,a máscara atua como uma \nbarreira.Ela evita que gotículas respiratórias\npropaguem no ar quando a pessoa tosse,\nespirra,fala ou levanta a voz.\nPor isso,use máscara!\n\n");//Mensagem a ser escrita na tela
			
			
			printf("1-Posicione a máscara sobre o nariz e boca\n");//Mensagem a ser escrita na tela
			printf("2-Molde a parte superior no nariz e prenda as tiras nas orelhas,ou atrás da cabeça\n");//Mensagem a ser escrita na tela
		    printf("3-Vende ao máximo a entrada de ar nas laterais");//Mensagem a ser escrita na tela
		    
		    printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
			
			printf("Vacinas disponíveis\n");//Mensagem a ser escrita na tela
			printf("As vacinas adotadas pelo SUS passaram por todas as etapas necessárias para a \ncriação de um novo imunizante e cumprem a critérios científicos rigorosos \nadotados pela Agência Nacional de Vigilância Sanitária (Anvisa). Veja o status das \nvacinas que estarão disponíveis no Programa Nacional de Imunizações (PNI).");//Mensagem a ser escrita na tela
			printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
			printf("Registros Definitivos\n");//Mensagem a ser escrita na tela
			printf("\n");//Espaço entre linhas 
			printf("Laboratório                     Doses\n");//Mensagem a ser escrita na tela
			printf("Astrazeneca/Oxford(Fiocruz)       2\n");//Mensagem a ser escrita na tela
			printf("Pfizer(BioNTech)                  2");//Mensagem a ser escrita na tela
			
			printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
			printf("Aprovadas para uso emergencial\n");//Mensagem a ser escrita na tela
			printf("\n");//Espaço entre linhas 
			printf("Laboratório                     Doses\n");//Mensagem a ser escrita na tela
			printf("janssen(johnson & johnson)        1\n");//Mensagem a ser escrita na tela
			printf("CoronaVac(Butantan)               2");//Mensagem a ser escrita na tela
			
			printf("\n");//Espaço entre linhas 
			printf("\n");//Espaço entre linhas 
			printf("Em análise pela Anvisa\n");//Mensagem a ser escrita na tela
			printf("\n");//Espaço entre linhas 
			printf("Laboratório                     Doses\n");//Mensagem a ser escrita na tela
			printf("Covaxin(Bharat Biotech)           2\n");//Mensagem a ser escrita na tela
			printf("Sputnik-V                         2\n\n");//Mensagem a ser escrita na tela
			;break;//Realiza desvio incondicional
			
			
			
			case 3 ://Uma forma de reduzir a complexidade de vários if
			system("cls");// limpar a tela de saída de programa
			
			printf("VacinaDF Secretaria de Saúde Do Distrito Federal\n");//Mensagem a ser escrita na tela
			printf("Vacinação COVID-19 Cadastro para pessoas com comorbidade\n\n");//Mensagem a ser escrita na tela
			
			/*Redefinir cadastro*/
			do{//Comando de repetição junto com while
			/*Validação*/
			do{//Comando de repetição junto com while
			printf("NOME*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&nomeCadastro);//expressão de controle
			
			tamanhoString = strlen(nomeCadastro);//variável do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um nome válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
		    strcpy(nomeCadastroPrintf,nomeCadastro);//Realiza a cópia do conteúdo de uma variável a outra
			
			do{
			
			printf("Nome para realizar logIn: ");//imprime mensagem na tela do usuário
			scanf("%s",&nomeLogIn);//ler dados digitados do usuário
			
			tamanhoString = strlen(nomeLogIn);//vai armazenar o tamanho da variável
			
			if(tamanhoString < 8){//mensagem automática de erro
				printf("Digite um nome de logIn válido");//mensagem automática de erro
			}
			
		    }while(tamanhoString < 8);//estrutura condicional para validação dos dados
			
			
			do{
			
			printf("Senha para logIn: ");//imprime mensagem na tela do usuário
			scanf("%s",&senhaUsuario);//ler dados digitados do usuário
			
			tamanhoString = strlen(senhaUsuario);//vai armazenar o tamanho da variável
			
			if(tamanhoString < 8){//mensagem automática de erro
				printf("Digite uma senha válida");//mensagem automática de erro
			}
			
		    }while(tamanhoString < 8);//estrutura condicional para validação dos dados
			
			
			printf("Sexo*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%c",&sexoCadastro);//expressão de controle
			
			
			
			do{//Comando de repetição junto com while
				
			printf("E-Mail: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&emailCadastro);//expressão de controle
			
			tamanhoString = strlen(emailCadastro);//variável do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um E-mail válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
		    
			do{//Comando de repetição junto com while
			printf("Nome da mãe: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&nomeDaMae);//expressão de controle
			
			tamanhoString = strlen(nomeDaMae);//variável do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um nome válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
			do{//Comando de repetição junto com while
			printf("Data nascimento(XX/YY/ZZZZ)*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&dataNasci);//expressão de controle
			
			tamanhoString = strlen(dataNasci);//variável do tipo inteiro
			
			if(tamanhoString < 7 || tamanhoString > 10){//operador logico
				printf("Digite uma data de nascimento válida\n");//Mensagem a ser escrita na tela
			}
			
			
			}while(tamanhoString < 7 || tamanhoString > 10);//Comandos a serem repetidos
			
			do{//Comando de repetição junto com while
			printf("CPF: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&cpfCadastro);//expressão de controle
			
			tamanhoString = strlen(cpfCadastro);//variável do tipo inteiro
			
			if(tamanhoString != 11){//operador logico
				printf("Digite um CPF válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString != 11);//Comandos a serem repetidos
			
			
			
			do{//Comando de repetição junto com while
			printf("CNS: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&cnsCadastro);//expressão de controle
			
			tamanhoString = strlen(cnsCadastro);//variável do tipo inteiro
			
			if(tamanhoString != 32){//operador logico
				printf("Digite um CNS válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString != 32);//Comandos a serem repetidos
		    
		    
			do{//Comando de repetição junto com while
			printf("Digite seu tipo de comorbidade*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&tipoComorbidade);//expressão de controle
			
			
			tamanhoString = strlen(tipoComorbidade);//variável do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um tipo de comorbidade válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
			do{//Comando de repetição junto com while
			printf("Telefone*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&telefoneCadastro);//expressão de controle
			
			tamanhoString = strlen(telefoneCadastro);//variável do tipo inteiro
			
			if(tamanhoString < 12){//operador logico
				printf("Digite um telefone válido\n");//Mensagem a ser escrita na tela
			}
			
			}while(tamanhoString < 12);//Comandos a serem repetidos
			
			
			do{//Comando de repetição junto com while
			printf("CEP*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",&cepCadastro);//expressão de controle
			
			tamanhoString = strlen(cepCadastro);//variável do tipo inteiro
			
			if(tamanhoString < 8){//operador logico
				printf("Digite um CEP válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 8);//Comandos a serem repetidos
			
			
			do{//Comando de repetição junto com while
			printf("Endereço*: ");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%s",enderecoCadastro);//expressão de controle
			
			tamanhoString = strlen(enderecoCadastro);//variável do tipo inteiro
			
			if(tamanhoString < 3){//operador logico
				printf("Digite um endereço válido\n");//Mensagem a ser escrita na tela
			}
			
		    }while(tamanhoString < 3);//Comandos a serem repetidos
		    
		    system("cls");// limpar a tela de saída de programa
		     
		    printf("\n");//Espaço entre linhas 
		    printf("\n");//Espaço entre linhas 
			printf("CADASTRO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
		    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro 
			printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro 
			printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro 
			printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro 
			printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro 
			printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro 
			printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro 
			printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro 
			printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro 
			printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro 
			printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro 
			
			printf("Deseja redefinir seus dados(S ou N):");//Mensagem a ser escrita na tela
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
			scanf("%c",&redefinirDadosCadastro);//expressão de controle
		
	    }while(redefinirDadosCadastro != 'N');//Comandos a serem repetidos
		system("cls");// limpar a tela de saída de programa
		
        ;break;//Realiza desvio incondicional
		
		case 4 ://Uma forma de reduzir a complexidade de vários if 
	 
		printf("VacinaDF Secretaria de Saúde Do Distrito Federal\n");//Mensagem a ser escrita na tela
		printf("Vacinação COVID-19 Agendamento para pessoas com comorbidade\n\n");//Mensagem a ser escrita na tela
		printf("Local,data e hora para agendamento\n\n");//Mensagem a ser escrita na tela
		
		printf("Escolha uma das regiões administrativas para tomar a vacina: \n");//Mensagem a ser escrita na tela
		printf("1-Região Central\n");//Mensagem a ser escrita na tela
		printf("2-Região Centro-Sul\n");//Mensagem a ser escrita na tela
		printf("3-Região Oeste\n");//Mensagem a ser escrita na tela
		printf("4-Região Norte\n");//Mensagem a ser escrita na tela
		printf("5-Região Sudo-este\n");//Mensagem a ser escrita na tela
		printf("6-Região Leste\n");//Mensagem a ser escrita na tela
		printf("7-Região Sul\n\n");//Mensagem a ser escrita na tela
		
		
		printf("Digite um número correspondente a sua região administrativa: ");//Mensagem a ser escrita na tela
		scanf("%d",&opcaoRegiao);//expressão de controle
		
		switch(opcaoRegiao)//Uma forma de reduzir a complexidade de vários if
		{
			
		case 1 ://Uma forma de reduzir a complexidade de vários if  
		
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		
		printf("-UBS 1 da Asa Sul                   Parque da Cidade\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 da Asa Norte                 Shopping Iguatemi\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 do cruzeiro                  Policlínica do Lago Sul\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Lago Norte                Shopping Iguatemi\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("EStabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
		printf("\n");//Espaço entre linhas 
		printf("\n");//Espaço entre linhas 
		
		do{//Comando de repetição junto com while
	    srand(time(NULL));//gerando valores aleatórios na faixa de 8 a 17
	    
	    horaCadastro = (rand() % 17);//gerando valores aleatórios na faixa de 8 a 17

	    }while(horaCadastro < 8);//Comandos a serem repetidos
	    
	     
	    struct tm *data_hora_atual;//ponteiro para struct que armazena data e hora 
	    
	    time_t segundos;//variável do tipo time_t para armazenar o tempo em segundos
	  
	    time(&segundos);//obtendo o tempo em segundos   
	  
	    //para converter de segundos para o tempo local  
	    //utilizamos a função localtime  
	    data_hora_atual = localtime(&segundos);  
	  
	    //para acessar os membros de uma struct usando o ponteiro
	    //utilizamos o operador -> no nosso caso temos: 
	    //data_hora_atual->membro_da_struct
	  
	    /*Printar dados*/
	    printf("AGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3);//Mensagem automatica do dia de vacinação
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro 
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		;break;//Realiza desvio incondicional
		
		
		
		case 2 ://Uma forma de reduzir a complexidade de vários if  
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 da Candangolândia            UBS 2 do Guará\n");//Mensagem a ser escrita na tela
        printf("-UBS 1 do Guará                     UBS 1 do Riacho Fundo I\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 do Guará\n");//Mensagem a ser escrita na tela
		printf("-UBS 3 do Guará\n");//Mensagem a ser escrita na tela
		printf("-UBS 4 do Guará\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Núcleo Bandeirante\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Riacho Fundo II\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 do Riacho Fundo II\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 da Estrutural\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("EStabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
	
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3);//Mensagem automatica do dia de vacinação
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		
		;break;//Realiza desvio incondicional
		
		case 3 ://Uma forma de reduzir a complexidade de vários if
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 de Brazlândia                UBS 5 de Ceilândia\n");//Mensagem a ser escrita na tela
		printf("-Praça dos Direitos de Ceilândia\n");//Mensagem a ser escrita na tela
		printf("-UBS 3 de Ceilândia\n");//Mensagem a ser escrita na tela
		printf("-UBS 7 de Ceilândia\n");//Mensagem a ser escrita na tela
		printf("-UBS 16 de Ceilândia\n");//Mensagem a ser escrita na tela
		printf("-UBS 17 de Ceilândia\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("EStabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
	
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3);//Mensagem automatica do dia de vacinação
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		
		;break;//Realiza desvio incondicional
		
		case 4 ://Uma forma de reduzir a complexidade de vários if  
		printf("PEDESTRES                               DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 5 e Planaltina                     UBS 5 e Planaltina\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 de Sobradinho                    UBS 1 de Sobradinho \n");//Mensagem a ser escrita na tela
		printf("-Regional de Ensino de Sobradinho II    Regional de Ensino de Sobradinho II \n");//Mensagem a ser escrita na tela
		printf("-Jardim de infância Casa de Vivência\n");//Mensagem a ser escrita na tela
		printf("-Administração regional da Fercal\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("EStabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
		
		
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3);//Mensagem automatica do dia de vacinação 
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		;break;//Realiza desvio incondicional
		
		
		case 5 ://Uma forma de reduzir a complexidade de vários if  
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 de taguatinga                Faculdade Unieuro-Águas claras\n");//Mensagem a ser escrita na tela
		printf("-UBS 5 de taguatinga                Adm Regional de Samambaia\n");//Mensagem a ser escrita na tela
		printf("-UBS 2 de Samambaia\n");//Mensagem a ser escrita na tela
		printf("-UBS 3 do Recanto das Emas \n");//Mensagem a ser escrita na tela
		printf("-UBS 7 de Samambaia \n");//Mensagem a ser escrita na tela
		printf("-Espaço Céu das Artes\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("Estabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
		
		
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3);//Mensagem automatica do dia de vacinação  
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		;break;//Realiza desvio incondicional
		
		case 6 ://Uma forma de reduzir a complexidade de vários if
		printf("PEDESTRES                           DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-Quadra coberta-Adm Regional        Centro de Práticas Sustentáveis\n");//Mensagem a ser escrita na tela
		printf("-Praças dos Direitos do Itapoã\n");//Mensagem a ser escrita na tela
		printf("-Ginásio São Bartolomeu\n\n");//Mensagem a ser escrita na tela
		
		printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("EStabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
	
	
	
		
		printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3);//Mensagem automatica do dia de vacinação  
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		;break;//Realiza desvio incondicional
		
		
		case 7 ://Uma forma de reduzir a complexidade de vários if
		printf("PEDESTRES                               DRIVE-THRU\n\n");//Mensagem a ser escrita na tela
		printf("-UBS 1 do Gama                          UBS 1 Sesi Gama\n");//Mensagem a ser escrita na tela
	    printf("-UBS 3 do Gama                          UBS 7 de Santa Maria\n");//Mensagem a ser escrita na tela
	    printf("-UBS 5 do Gama\n");//Mensagem a ser escrita na tela
	    printf("-Igreja Assembleia de Deus\n");//Mensagem a ser escrita na tela
	    printf("-UBS 2 de Santa Maria\n");//Mensagem a ser escrita na tela
	    printf("-Sesi Gama\n\n");//Mensagem a ser escrita na tela
	    
	    
	    printf("Digite a região administrativa:\n");//Mensagem a ser escrita na tela
	    fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&regiaoAdm);//expressão de controle
		
		
		printf("Estabelecimento de Saúde\n");//Mensagem a ser escrita na tela
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		scanf("%s",&estabelecimentoSaude);//expressão de controle
		
	  
	  
	  
	    printf("\nAGENDAMENTO REALIZADO COM SUCESSO,VERIFIQUE SEUS DADOS\n");//Mensagem a ser escrita na tela
	    printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 3); //Mensagem automatica do dia de vacinação
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
	    
		;break;//Realiza desvio incondicional
		}
	    ;break;//Realiza desvio incondicional
	    
	    case 5: 
		
		do{//Validação dos dados
		printf("Nome para logIn: ");//mensagem automática para o usuário
		scanf("%s",&nomeLogIn);//ler dados do usuário
		
		tamanhoString = strlen(nomeLogIn);//vai armazenar o tamanho da variável
		
	    }while(tamanhoString < 6);//validação dos dados
	    
		
		do{//Validação dos dados
		printf("Senha:");//mensagem automática para o usuário
		scanf("%s",&senhaUsuario);//ler dados do usuário
		
		tamanhoString = strlen(senhaUsuario);//vai armazenar o tamanho da variáve
		
	    }while(tamanhoString < 8);//validação dos dados
	    
	    //printf("\nDia da vacinação: %d\n", data_hora_atual->tm_mday + 5);//Mensagem automatica do dia de vacinação
		printf("Horario: %d\n\n",horaCadastro);//Mensagem automatica da hora de vacinação
		
	    printf("NOME: %s\n",nomeCadastroPrintf);//Mensagem de resultado de cadastro
		printf("SEXO: %c\n",sexoCadastro);//Mensagem de resultado de cadastro
		printf("E-MAIL: %s\n",emailCadastro);//Mensagem de resultado de cadastro
		printf("NOME DA MÃE: %s\n",nomeDaMae);//Mensagem de resultado de cadastro
		printf("DATA  DE NASCIMENTO: %s\n",dataNasci);//Mensagem de resultado de cadastro
		printf("CPF: %s\n",cpfCadastro);//Mensagem de resultado de cadastro
		printf("CNS: %s\n",cnsCadastro);//Mensagem de resultado de cadastro
		printf("TIPO DE COMORBIDADE: %s\n",tipoComorbidade);//Mensagem de resultado de cadastro
		printf("TELEFONE: %s\n",telefoneCadastro);//Mensagem de resultado de cadastro
		printf("CEP: %s\n",cepCadastro);//Mensagem de resultado de cadastro
		printf("ENDEREÇO: %s\n\n",enderecoCadastro);//Mensagem de resultado de cadastro
		
		;break;
	        
	    case 6 ://Uma forma de reduzir a complexidade de vários if
	    	return 0;//Encerra a execução de uma função e retorna o controle para a função de chamada
	    ;break;//Realiza desvio incondicional
	}
	
	printf("Deseja retornar ao menu ?");//Mensagem a ser escrita na tela
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
	scanf("%c",&retornarMenu);//expressão de controle
	system("cls");// limpar a tela de saída de programa
	
    }while(retornarMenu != 'N');//Comandos a serem repetidos
	
	return 0;//Encerra a execução de uma função e retorna o controle para a função de chamada
}
