#include <stdio.h>
/* SEM SINAL SONORO ;<*/
int main()
{
    printf("Aqui vai um Apito\7\n"); /* \a - Sinal Sonoro*/
    printf("Aqui vai um Apito\a\n"); /* \7 ou \a representam o
                                     * mesmo caractere
                                     */
    return 0;                        
}
