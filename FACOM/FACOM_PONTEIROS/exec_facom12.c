#include <stdio.h>

int valores_ordenados(int *p_x,int *p_y,int *p_z){
    if(*p_x == *p_y || *p_x == *p_z || *p_y == *p_z)
    {
        return 1;
    }
    else
    {
        int guarda_p_y =*p_y,guarda_p_x =*p_x,guarda_p_z=*p_z;
        if(*p_x > *p_y || *p_x > *p_z)
            *p_x = *p_y;
            if(*p_x > *p_z)
                *p_x = *p_z;
        if(*p_z < guarda_p_y || *p_z < guarda_p_x)
            *p_z = guarda_p_y;
            if(*p_z < guarda_p_x)
                *p_z = guarda_p_x;
        if(*p_y > *p_x && *p_y < *p_z)
            return 0;
        *p_y = guarda_p_x;
        if(*p_y > *p_x && *p_x < *p_z)
            return 0;
        else
            *p_y = guarda_p_z;
        return 0;
    }
}
int main(){
    int x,y,z;
    printf("Informe o valor de X: ");scanf(" %d",&x);
    printf("Informe o valor de Y: ");scanf(" %d",&y);
    printf("Informe o valor de Z: ");scanf(" %d",&z);
    valores_ordenados(&x,&y,&z);
    printf("\n\n");
    if(1)
        printf("1");
    else
        printf("%d,%d,%d",x,y,z);
    return 0;
}