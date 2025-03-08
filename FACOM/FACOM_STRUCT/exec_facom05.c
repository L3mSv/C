#include <stdio.h>

struct vetor
{
    float x;
    float y;
    float z;
};

int main(){
    struct vetor vetor1,vetor2;
    float soma_de_vetores = 0.0;
    printf("===VETOR 1===\n");
    printf("Informe o valor de X: ");scanf(" %f",&vetor1.x);
    printf("Informe o valor de Y: ");scanf(" %f",&vetor1.y);
    printf("Informe o valor de Z: ");scanf(" %f",&vetor1.z);
    printf("\n");
    printf("\n===VETOR 2===\n");
    printf("Informe o valor de X : ");scanf(" %f",&vetor2.x);
    printf("Informe o valor de Y: ");scanf(" %f",&vetor2.y);
    printf("Informe o valor de Z: ");scanf(" %f",&vetor2.z);

    soma_de_vetores = vetor1.x + vetor2.x + vetor1.y + vetor2.y + vetor1.z + vetor2.z;
    printf("\n\n");
    printf("R3: %.2f",soma_de_vetores);
    return 0;
}