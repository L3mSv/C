#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_BILHETE 5


int main()
{
    int bilhete_loteria[TAMANHO_BILHETE] = {0};
    int bilhete_teu[TAMANHO_BILHETE] = {0};

    for(int i = 0; i < TAMANHO_BILHETE; i++)
    {
        srand(time(NULL));

        bilhete_loteria[i] = 1 + rand() % 11;
        

        printf("\nDecida um numero do seu bilhete: ");
        scanf(" %d", &bilhete_teu[i]);
        printf("(FALTAM %d NUMEROS!)\n", 5 - i);
    }

    int num_teu = 0;
    int acertos = 0;
    int *bilhete_acertos = calloc(acertos, sizeof(int));
    for(int i = 0; i < TAMANHO_BILHETE; i++)
    {
        for(int j = 0; j < TAMANHO_BILHETE; j++)
        {
            if(bilhete_teu[i] == bilhete_loteria[j])
            {
                acertos ++;
                bilhete_acertos = realloc(bilhete_acertos, acertos * sizeof(int));
                bilhete_acertos[i] = bilhete_loteria[j];
            }
        }
    }

    printf("\n\n");

    printf("BILHETE LOTERIA \n");
    for(int i = 0; i < TAMANHO_BILHETE; i++)
    {
        printf("%d, ", bilhete_loteria[i]);
    }

    if(acertos > 0)
    {
        printf("\nACERTOS \n");
        for(int i = 0; i < acertos; i++)
        {
            printf("%d, ", bilhete_acertos[i]);
        }
    }
    
    return 0;
}