#include <stdio.h>
#include <math.h>

int main()
{
    int matriz[10][10]={0};

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i < j)
            {
                matriz[i][j] = 2*i + 7*j - 2;
            }
            else if(i > j)
            {
                matriz[i][j] = 4*pow(i,3) - 5*pow(j,2) + 1;
            }
            else
            {
                matriz[i][j] = 3*pow(i,2) - 1;
            }
        }
    }

    printf("\n\n");

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;   
}