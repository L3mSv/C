#include <stdio.h>

int main()
{
    int matriz[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i%2==0)
            {
                matriz[i][j]=1;
            }
            else
            {
                matriz[i][j]=0;
            }
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int matriz_inversa[3][5];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i%2==0)
            {
                matriz[i][j]=1;
            }
            else
            {
                matriz[i][j]=0;
            }
            printf(" %d",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
  