#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float celsius_para_fahrenheit(float temp_celsius)
{
    return ((temp_celsius * (9.0/5.0)) + 32.0);
}
int main()
{
    float temp_celsius;
    printf("Informe a temperatura em C: ");scanf(" %f",&temp_celsius);
    float temp_fahrenheit = celsius_para_fahrenheit(temp_celsius);
    printf("%.2f em C -> %.2f em F",temp_celsius,temp_fahrenheit);
    return 0;
}