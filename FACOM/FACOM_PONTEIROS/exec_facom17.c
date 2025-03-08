#include <stdio.h>

void frac(float num, int* inteiro, float* frac);

int main()
{
    float num_real = 0.0;

    int parte_inteira = 0;
    float parte_fracionaria = 0.0;

    printf("Digite um numero real: ");
    scanf(" %f", &num_real);

    frac(num_real, &parte_inteira, &parte_fracionaria);

    printf("\n\n");

    printf("Num: %.2f\n", num_real);
    printf("P.Inteira: %d\n", parte_inteira);
    printf("P.Fracionaria: %.2f", parte_fracionaria);

    return 0;
}

void frac(float num, int* inteiro, float* frac)
{
    *frac = num;
    *inteiro = num;
    num = *inteiro;

    *frac -= *inteiro;
}
