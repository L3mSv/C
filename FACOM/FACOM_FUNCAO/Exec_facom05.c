#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979323846
double volume_esfera(double r)
{
    return (4.0/3.0 * (PI * (pow(r,3.0))));
}
int main()
{
    double r;
    printf("Informe o o raio da esfera (em cm): ");scanf(" %lf",&r);
    double volume_de_r = volume_esfera(r);
    printf("O volume da esfera de raio %.1lf e %.1lf",r,volume_de_r);
    return 0;
}