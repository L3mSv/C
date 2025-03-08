/*
Implemente um programa que leia o arquivo nomes.txt e imprima no terminal
a quantidade de alunos que começa com cada letra do alfabeto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void verificaPrimeiraLetraNome(char nome, int* alfabeto){

    int contador_vetor = 0;
    for(int i = 65; i < 90; i++)
    {
        if(toupper(nome) == i)
            *(alfabeto + contador_vetor) += 1;
        contador_vetor++;
    }
        
}

int main(){
    FILE* fptr;
    fptr = fopen("nomes.txt", "w");

    int quant_alunos;
    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quant_alunos);

    char nomesAlunos[quant_alunos];
    int alfabeto[26] = {0};

    for(int i = 0; i < quant_alunos; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", &nomesAlunos[i]);
        fprintf(fptr, "%s\n", &nomesAlunos[i]);

        verificaPrimeiraLetraNome(nomesAlunos[i], alfabeto);

    }

    printf("\n");
    
    for (int i = 0; i < 26; i++)
    {
        printf("\n%c : %d", i+65, alfabeto[i]);
    }
    
    fclose(fptr);
    return 0;
}
