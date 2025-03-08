#include <stdio.h>
#define N_STRINGS 3

int main()
{
    char vetor[N_STRINGS][20] = {"Ola", "Antonio", "Susana"};
    char (*ptr)[20] = vetor; 

    char *p;

    while(ptr-vetor<N_STRINGS)
        {
            p = *ptr;
            while(*p)
                putchar (*p++);
                putchar('\n');
                ptr++;
        }    
    return 0;
}
