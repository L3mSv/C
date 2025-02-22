#include <stdio.h>

int x_elevado_ao_z(int x,int z)
{
    int x_na_z=1;
    for(int i=0;i<z;i++)
    {
        x_na_z*=x;
    }
    return x_na_z;
}
int main()
{
    int x,z;
    printf("Informe o valor de X: ");scanf(" %d",&x);
    printf("Informe o valor de Y: ");scanf(" %d",&z);

    int x_na_z = x_elevado_ao_z(x,z);
    printf("\n%d elevado na %d: %d",x,z,x_na_z);
    return 0;
}