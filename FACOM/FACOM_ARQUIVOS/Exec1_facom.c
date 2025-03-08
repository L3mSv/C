#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *f  = fopen("arq.txt","w");
    if(f == NULL)
    {
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }
    char caracter;
    do
    {
        fputc(caracter, f);
        scanf(" %c", &caracter);
    }while (caracter != '0');
    
    fclose(f);

    printf("\n\n");

    f = fopen("arq.txt", "r");
    if(f == NULL)
    {
        printf("Erro na abertura");
        system("pause");
        exit(1);
    }

    char c = fgetc(f);
    while (c != EOF)
    {
        printf(" %c\n", c);
        c = fgetc(f);
    }

    fclose(f);

    system("pause");
    return 0;
}