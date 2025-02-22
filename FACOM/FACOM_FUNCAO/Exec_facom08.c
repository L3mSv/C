#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double hipotenusa(double a,double b)
{
    double a_ao_quadrado = pow(a,2.0);
    double b_ao_quadrado = pow(b,2.0);
    return sqrt(a_ao_quadrado+b_ao_quadrado);
}
int main()
{
    double a,b;
    printf("Informe o valor do cateto a: ");scanf(" %lf",&a);
    printf("Informe o valor do cateto b: ");scanf(" %lf",&b);
    double hipotenusa_ab = hipotenusa(a,b);
    printf("\n\n");
    printf("HIPOTENUSA: %.2lf",hipotenusa_ab);
    return 0;
}