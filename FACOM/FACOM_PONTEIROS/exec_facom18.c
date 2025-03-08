#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void calc_esfera(float R, float *area, float *volume);

int main()
{
    float raio = 0.0;

    float area = 0.0;
    float volume = 0.0;

    printf("Informe o valor da raio da esfera: ");
    scanf(" %f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("\n\n");

    printf("Raio %.2f\n", raio);
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f", volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * PI * pow(R, 2);
    *volume = (4 * PI * pow(R, 3))/3;
}