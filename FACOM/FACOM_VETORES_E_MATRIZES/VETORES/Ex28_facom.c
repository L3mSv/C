#include <stdio.h>

int main()
{
    int v[10]={0};
    int v1[10]={0};
    int v2[10]={0};
    int contador_v1 = 0;
    int contador_v2 = 0;

    for(int i=0;i<10;i++)
    {
        printf("Informe o valor da posicao %d do vetor: ",i+1);
        scanf(" %d",&v[i]);

        if(v[i]%2==0)
        {
            v2[contador_v2++] = v[i];
        }
        else
            v1[contador_v1++] = v[i];
    }

    printf("\n\n");
    printf("ELEMENTOS UTILIZADOS DE V1 E V2:\n");
    for(int i=0;i<10;i++)
    {
        if(v1[i] != 0 && v2[i] != 0)
        {
            printf("V1 (impares): %d|%d\n",i,v1[i]);
            printf("V2 (pares): %d|%d\n",i,v2[i]);
            printf("\n");

        }
        if(v1[i] != 0 && v2[i] == 0)
        {            
            printf("V1 (pares): %d|%d\n",i+1,v1[i]);
            printf("\n");
        }
        if(v2[i] != 0 && v1[i] == 0)
        {
            printf("V2 (impares): %d|%d\n",i+1,v2[i]);
            printf("\n");
        }
    }

    return 0;
}