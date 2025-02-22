#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float media_das_notas(float nota1,float nota2,float nota3,char media)
{
    if (media == 'a' || media == 'A')
    {
        return (nota1 + nota2 + nota3)/3;
    }
    else if (media == 'p' || media == 'P')
    {
        return ((nota1 * 5) + (nota2 * 3) + (nota3 * 2))/10;
    }
    else
        printf("ERRO! caracter invalido");
}
int main()
{
    float notas[3];
    for(int i=0;i<3;i++)
    {
        printf("Informe o valor da nota %d: ",i);scanf(" %f",&notas[i]);
    }
    char tipo_de_media;
    printf("Qual deve ser o tipo de media A[aritmetica] ou P[ponderada]: ");scanf(" %c",&tipo_de_media);
    float media_final = media_das_notas(notas[0],notas[1],notas[2],tipo_de_media);
    printf("\n\n");
    printf("MEDIA FINAL: %.2f",media_final);
    return 0;
}