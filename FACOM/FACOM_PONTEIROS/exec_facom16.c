#include <stdio.h>

void A_B_C_D(int a)
{
    int *b = &a;
    int **c = &b;
    int ***d = &c;

    printf("A: %d\n", a);
    printf("B: %d\n", *b * 2);
    printf("C: %d\n", **c * 3);
    printf("D: %d\n", ***d * 4);
}

int main()
{
    int num = 0;

    printf("Digite um valor inteiro: ");
    scanf(" %d", &num);

    A_B_C_D(num);
    return 0;
}