/*
Desenvolva um programa que leia o arquivo números.txt criado no exercício
anterior e, para cada valor, imprima no terminal se o número é primo ou não.
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

    for(int i = 1; i <= n; i++){
        int count = 0;
        if(i <= 1)
            count++;
        else
        {
            for(int j = 1; j < i; j++){
                if(i % j == 0)
                    count++;
            }
        }

        if(count > 1)
        {
            fprintf(fptr, "%d  NAO PRIMO\n", i);
        }
        else{
            fprintf(fptr, "%d  PRIMO\n", i);
        }


    }


    fclose(fptr);
    return 0;
}
