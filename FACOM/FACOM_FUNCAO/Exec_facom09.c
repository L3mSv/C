#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979323846
double volume_cilindro(double altura, double raio)
{
    return PI * pow(raio,2) * altura;
}
int main()
{
    double altura,raio;
    printf("Informe a altura do cilindro: ");scanf(" %lf",&altura);
    printf("Informe o raio do cilindro: ");scanf(" %lf",&raio);
    double volume = volume_cilindro(altura,raio);
    printf("VOLUME DO CILINDRO: %.1lf",volume);
    return 0;
}