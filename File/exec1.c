/*
Crie um programa que leia um valor inteiro 𝑛 a partir do teclado e imprima em
um arquivo de texto números.txt os valores de 0 à 𝑛 (um valor por linha).
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE* fptr;
    fptr = fopen("numeros.txt", "w"); 

    if(fptr == NULL){
        printf("The file is not opened. The program will exit\n");
        exit(0);
    }
    else{
        printf("The file is created successfully.\n");
    }

    int n;
    printf("Digite um numero qualquer: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        fprintf(fptr, "%d\n", i);
    }
    fclose(fptr);
    return 0;
}
