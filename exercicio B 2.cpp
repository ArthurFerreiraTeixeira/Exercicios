# include  <stdio.h>
# include  <stdlib.h>


    char nome[ 40 ]; 
    int ano_nasc; 
    int  aluno;
    int ptr;

int  main (){
    int n, i;
    printf ( " Entre com o numero de registros a serem alocados: " );
    scanf ( " %d " , &n);
    /* alocando espaço para n iregistros */
    ptr = (aluno) malloc (n * sizeof (aluno));

    /* armazeando os n registros no espaço alocado */
    for (i = 0 ; i < n; i++){
        printf ( " Numero de matricula: " );
        scanf ( " %d " , &ptr[i]. matricula );
        printf ( " Nome: " );
        scanf ( " %[^ \n ] " , ptr[i] .nome );
        printf ( " Ano de nascimento: " );
        scanf ( " %d " , &ptr[i]. ano_nasc );
        printf ( " \n\n " );
    }
    /* para os n armazenados */
    for (i = 0 ; i < n; i++){
        printf ( " Numero de matricula %d  \n " , ptr[i]. matricula );
        printf ( " Nome: %s  \n " , ptr[i] .nome );
        printf ( " Ano de nascimento: %d \n\n " , ptr[i]. ano_nasc );
    }
    /* desalocando o espaço usado anteriormente */
    livre (ptr);
    retorna  0 ;
}
