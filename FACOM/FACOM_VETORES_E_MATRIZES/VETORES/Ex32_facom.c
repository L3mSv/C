# include <stdio.h>

int main()
{
    int x[5]={0};
    int y[5]={0};
    printf("\nNAO INFORME 0 (erro!)\n");
    for(int i=0;i<5;i++)
    {
        printf("Informe o valor da posicao %d de X: ",i+1);
        scanf(" %d",&x[i]);
    }
    printf("\n");
    for(int i=0; i<5;i++)
    {
        printf("Informe o valor da posicao %d de Y: ",i+1);
        scanf(" %d",&y[i]);
    }
    printf("VETOR X:\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }
    printf("\nVETOR Y:\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",y[i]);
    }

    int soma[5]={0};
    for(int i=0;i<5;i++)
    {
        soma[i] = x[i] + y[i];
    }

    int produto[5]={0};
    for(int i=0;i<5;i++)
    {
        produto[i] = x[i]*y[i];
    }

    int diferenca_entre_x_e_y[5]={0};
    for(int i=0;i<5;i++)
    {
        int contador = 0;
        int existencia_em_y=0;
        while (contador < 5)
        {
            if(x[i] == y[contador])
            {
                existencia_em_y = 1;
                break;
            }
            contador++;
        }
        if(existencia_em_y == 0)
        {
            diferenca_entre_x_e_y[i] = x[i];
        }
    }

    int interseccao[5]={0};
    for(int i=0;i<5;i++)
    {
        int contador=0;
        int x_igual_y=0;
        while (contador < 5)
        {
            if(x[i] == y[contador])
            {
                x_igual_y = 1;
                break;
            }
            contador++;
        }
        if(x_igual_y == 1)
        {
            interseccao[i]=x[i];
        }
    }

    int uniao[5]={0};
    for(int i=0;i<5;i++)
    {
        int contador=0;
        int elemento_y_existe_em_x=0;
        while (contador < 5)
        {
            if(y[i] == x[contador])
            {
                elemento_y_existe_em_x =1;
                break;
            }
            contador++;
        }
        if(elemento_y_existe_em_x == 0)
        {
            uniao[i]=y[i];
        }
    }
    
    printf("\n\n");
    printf("SOMA ENTRE X E Y:\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",soma[i]);
    }
    printf("\nPRODUTO ENTRE X E Y:\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",produto[i]);
    }
    printf("\nDIFERENCA ENTRE X E Y:\n");
    for(int i=0;i<5;i++)
    {
        if(diferenca_entre_x_e_y[i] != 0)
            printf(" %d",diferenca_entre_x_e_y[i]);
    }
    printf("\nINTERSECCAO ENTRE X E Y:\n");
    for(int i=0;i<5;i++)
    {
        if(interseccao[i] != 0)
            printf(" %d",interseccao[i]);
    }
    printf("\nUNIAO ENTRE X E Y:\n");
    for(int i=0;i<5;i++)
    {
        printf(" %d",x[i]);
        if(uniao[i] != 0)
            printf(" %d",uniao[i]);

    }
    return 0;
}

/*O CODIGO NAO FUNCIONA COM TODOS OS NUMEROS POR CAUSA DO 0 TENTEI FAZER UM VETOR TERMINANDO COM \0 MAS QUANDO FAZIA A UNIAO DEPOIS DE TER FEITO A DIFERENCA E A INTERSECCAO DAVA PROBLEMA ACHO QUE A MEMORIA SE EMBARALHAVA E O VETOR DE UM LIA OS ESPACOS DO VETOR DO OUTRO SE QUISER PODE TENTAR FAZER COM TODOS OS NUMEROS (MAS SINCERAMENTE ACHO Q NUNCA MAIS VOU VOLTAR NESSES EXERCICIOS) MAS CASO VOLTE E SE DEPARE COM ESSE COMENTARIO NAO FIQUE COM MEDO VOCE E CAPAZ DE FAZER FUNCIONAR PARA TODOS OS NUMEROS SO NAO VENHA ESTRESSADO!🤬*/