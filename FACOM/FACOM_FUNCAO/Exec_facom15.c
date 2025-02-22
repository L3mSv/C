#include <stdio.h>

int talvez_triangulo(int lado1,int lado2, int lado3)
{
    if((lado1 < (lado2+lado3)) && (lado2 < (lado1+lado3)) && (lado3 < (lado1+lado2)))
        return 0;
    else
        return 1;
}

void tipo_de_triangulo(int lado1, int lado2, int lado3)
{
    if((lado1 == lado2) && (lado2==lado3))
        printf("\nO triangulo e EQUILATERO!");
    else if((lado1 != lado2) && (lado2 != lado3) && (lado3 != lado1))
        printf("\nO triangulo e ESCALENO!");
    else
        printf("\nO triangulo e ISOSCELES!");
}

int main()
{
    int lados[3];
    for(int i=0; i<3;i++)
    {
        int contador = 0;
        while(contador != 1)
        {
            int valor=0;
            printf("Informe um valor para o lado %d: ",i+1);
            scanf(" %d",&valor);
            if(valor <= 0)
            {
                printf("ERRO! o valor e negativo ou igual a zero");
            }
            else
            {
                lados[i] = valor;
                contador++;
            }
        }
    }
    int verificacao_triangulo = talvez_triangulo(lados[0],lados[1],lados[2]);
    if(verificacao_triangulo == 0)
    {
        printf("\nOs lados dados formam um triangulo!");
    }
    else
    {
        printf("\nNao e possivel formar um triangulo!");
        return verificacao_triangulo;      
    }
    tipo_de_triangulo(lados[0],lados[1],lados[2]);

    return 0;
}