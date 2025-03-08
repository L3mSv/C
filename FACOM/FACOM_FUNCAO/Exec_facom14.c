#include <stdio.h>

void economico(float quilometro, float gasolina)
{
    float consumo = quilometro/gasolina;
    printf("\nCONSUMO: %.1f",consumo);
    if(consumo < 8)
        printf("\nVenda o carro!");
    else if(consumo >= 8 && consumo <= 14)
        printf("\nEconomico!");
    else
        printf("\nSuper economico!");
}

int main()
{
    float quilometro,gasolina;
    printf("Distancia: ");scanf(" %f",&quilometro);
    printf("Quantidade de litros de gasolina %.1fKM consome: ",quilometro);scanf(" %f",&gasolina);
    economico(quilometro,gasolina);

    return 0;
}