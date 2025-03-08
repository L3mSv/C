#include <stdio.h>
#include <math.h>
#include <limits.h>

#define NUM_PONTOS 5

typedef struct ponto{
    float x;
    float y;
}Ponto;

float distancia_euclidiana(Ponto p1, Ponto p2);

int main(){
    Ponto vet_pontos[NUM_PONTOS] = {0};
    float menor_distancia = INT_MAX;

    for(int i = 0; i < NUM_PONTOS; i++){
        printf("Digite a coordenada x do ponto %d: ", i+1);
        scanf("%f", &vet_pontos[i].x);
        printf("Digite a coordenada y do ponto %d: ", i+1);
        scanf("%f", &vet_pontos[i].y);
        printf("\n");
    }

    for(int i = 0; i < NUM_PONTOS; i++){
        for(int j = i+1; j < NUM_PONTOS; j++){
            float dist = distancia_euclidiana(vet_pontos[i], vet_pontos[j]);
            if(dist < menor_distancia){
                menor_distancia = dist;
            }
        }
    }

    printf("menor distância entre os pontos: %.2f\n", menor_distancia);
    for(int i = 0; i < NUM_PONTOS; i++){
        for(int j = i+1; j < NUM_PONTOS; j++){
            if(distancia_euclidiana(vet_pontos[i], vet_pontos[j]) == menor_distancia){
                printf("Ponto 1: (%.2f, %.2f)\n", vet_pontos[i].x, vet_pontos[i].y);
                printf("Ponto 2: (%.2f, %.2f)\n\n", vet_pontos[j].x, vet_pontos[j].y);
                printf("\n");
            }
        }
    }

    return 0;
}

float distancia_euclidiana(Ponto p1, Ponto p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}