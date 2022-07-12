# include  <stdio.h>   // biblioteca que faz a inclus�o dos significados das fun��es de entrada/sa�da
# include  <stdlib.h>  // biblioteca de fun��es de uso geral
# include  <locale.h >  // biblioteca que garante que os caracteres como � e acentua��o sejam exibidos normalmente < em nosso programa

    char nome[TAM_MAX];
    float notaFinal;
 Aluno;

void  ler_aluno (Aluno *a, int i) // fun��o ler dados do aluno
{

    printf ( " \n Aluno %d " , i+ 1 );
    printf ( " \n Nome do Aluno: " );
    fflush (stdin);

    struct (a-> nome );

    printf ( " Nota Final: " );
    scanf ( " %f " , &a-> notaFinal );
}

void  grava_aluno (Aluno a, FILE *arquivo) // dados do aluno no arquivo
{
    fwrite (&a, sizeof (a), 1 , arquivo);
}

int  principal ()
{
    setlocale (LC_ALL, " portugu�s " ); // suporte ao idioma portugu�s no programa
    int i, numeroDeAlunos;
    float maior Nota = 0 ;
    char nomeMaiorNota[TAM_MAX];

    printf ( " Quantos alunos possui a disciplina? " );
    scanf ( " %d " , &numeroDeAlunos); // recebe do usu�rio a quantidade de alunos por disciplina

    Aluno alunos[numeroDeAlunos]; // declara��o de vetor de struct
    Aluno alunosLeitura;

    for (i = 0 ; i < numeroDeAlunos; i++) // la�o de repeti��o para leitura dos alunos
    {
        ler_aluno (&alunos[i],i);
    }

    printf ( " ---------------------------------- \n " );
    FILE *arquivo = fopen ( " dados.bin " , " wb " ); // cria um arquivo para escrita

    if (arquivo == NULL ) // testa se o arquivo foi realmente aberto
    {
        printf ( " N�o foi poss�vel abrir o arquivo! \n " );
        return ( 1 );
    }

    for (i = 0 ; i < numeroDeAlunos i++) // la�o de repeti��o para gravar dados dos alunos no arquivo
    {
        grava_aluno (alunos[i], arquivo);
    }

    fclose (arquivo); // fecha arquivo
    printf ( " Dados gravados com sucesso! \n\n " );

    arquivo = fopen ( " dados.bin " , " rb " ); // abre um arquivo para leitura

    printf ( " --------------------------------------- \n " );
    printf ( "      Lista de alunos da disciplina:     \n " );
    printf ( " --------------------------------------- \n " );
    printf ( " \t Alunos \t\t Nota Final \t\n " );

    if (arquivo == NULL ) // testa se o arquivo foi realmente aberto
    {
        printf ( " N�o foi poss�vel abrir o arquivo! \n " );
        return ( 1 );
    }

    enquanto ( 1 )
    {
        fread (&alunosLeitura, sizeof (alunosLeitura), 1 , arquivo);
        if ( feof (arquivo))
        {
            quebrar ;
        }

        printf ( " \t %s \t " , alunosLeitura. nome );
        printf ( " \t %.2f \t\n " , alunosLeitura. notaFinal );
    }

    fclose (arquivo); // fecha arquivo

    for (i = 0 ; i < numeroDeAlunos; i++) // la�o de repeti��o para verificar maior nota
    {
        if (maiorNota < alunos[i]. notaFinal )
        {
            maior Nota = alunos[i]. notaFinal ;
            strcpy (nomeMaiorNota, alunos[i]. nome );
        }
    }

    printf ( " \n A maior nota � %.2f do aluno %s \n " , maiorNota, nomeMaiorNota);

    retorna  0 ;
}
