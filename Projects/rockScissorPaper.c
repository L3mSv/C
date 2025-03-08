#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <Windows.h>


int game(char* PLAYER, char* COMPUTER);

int main(){

    char PLAYER[10];
    char COMPUTER[10];

    printf("\nYou will play rock, scissor, paper with computer! if you want to exit, type 'exit'\n");
    
    while(PLAYER){

        int flag = 1;
        do
        {
            printf("\n\nChoose between PAPER/SCISSOR/ROCK: ");
            scanf("%s", PLAYER);

            for(int i = 0; PLAYER[i]; i++)
            {
                PLAYER[i] = toupper((unsigned char) PLAYER[i]);
            }

            if(strcmp(PLAYER, "EXIT") == 0)
            {
                printf("Exiting...");
                exit(0);
            }

            if(strcmp(PLAYER, "PAPER") == 0 || strcmp(PLAYER, "SCISSOR") == 0 || strcmp(PLAYER, "ROCK") == 0)
                flag = 0;
            else
                printf("This choose not exist!\n");
        }while(flag);

    int computerLogic;
    srand(time(0));
    computerLogic = rand() % 100;

    if(computerLogic >= 0 && computerLogic < 33)
        strcpy(COMPUTER, "ROCK");
    else if(computerLogic >= 33 && computerLogic < 66)
        strcpy(COMPUTER, "PAPER");
    else    
        strcpy(COMPUTER, "SCISSOR");

    printf("Computer choose...");
    Sleep(1000);
    printf(" %s\n", COMPUTER);
    

    int result = game(PLAYER, COMPUTER);

    printf("\n%s Vs %s", PLAYER, COMPUTER);

    if(result == -1)
        printf("\nTIE!");
    else if(result == 0)
        printf("\nCOMPUTER WINS!");
    else
        printf("\nPLAYER WINS!");

    }
    
}

int game( char* PLAYER,  char* COMPUTER) {
    if ((strcmp(PLAYER, "PAPER") == 0 && strcmp(COMPUTER, "ROCK") == 0) ||
        (strcmp(PLAYER, "SCISSOR") == 0 && strcmp(COMPUTER, "PAPER") == 0) ||
        (strcmp(PLAYER, "ROCK") == 0 && strcmp(COMPUTER, "SCISSOR") == 0)) {
        return 1;
    } else if ((strcmp(COMPUTER, "PAPER") == 0 && strcmp(PLAYER, "ROCK") == 0) ||
               (strcmp(COMPUTER, "SCISSOR") == 0 && strcmp(PLAYER, "PAPER") == 0) ||
               (strcmp(COMPUTER, "ROCK") == 0 && strcmp(PLAYER, "SCISSOR") == 0)) {
        return 0;
    } else {
        return -1;
    }
}