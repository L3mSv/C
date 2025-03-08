#include <stdio.h>

/*
int main()
{
    int valor;
    printf("Digite um num inteiro:"); scanf("%d",&valor);
    if (valor == 0)
        printf("\nO valor informado foi igual a 0.");
    else
        printf("\nO valor informado foi %d",valor);
    return 0;
}
*/

/*
int main()
{
    int valor;
    printf("Digite um num inteiro:"); scanf("%d",&valor);
    valor = valor != 0 ? printf("O valor informado foi %d.",valor) : printf("O valor informado foi igual 0.");
    return 0;
}
*/

/*
int main()
{
    int valor;
    printf("Digite um num inteiro:"); scanf("%d",&valor);
    switch(valor)
    {
        case 0: printf("O valor informado foi igual a 0");break;
        default: printf("O valor informado foi %d", valor);
    }
    return 0;
}
*/

int main()
{
    int valor;
    printf("Digite um num inteiro:"); scanf("%d",&valor);
    if (valor == 0)
        printf("O valor informado foi igual a %d",valor);
    if (valor != 0)
        printf("O valor informado foi %d", valor);
    return 0;
}

