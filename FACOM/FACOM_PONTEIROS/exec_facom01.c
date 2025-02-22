#include <stdio.h>

int main(){
    int x = 10;
    int y = 3;
    int z = 6;
    printf("\nX: %d",x);
    printf("\nY: %d",y);
    printf("\nZ: %d",z);
    printf("\n\n");

    int *p_x = &x;
    int *p_y = &y;
    int *p_z = &z;
    printf("\nP_X: %d",*p_x);
    printf("\nP_Y: %d",*p_y);
    printf("\nP_Z: %d",*p_z);
    printf("\n\n");

    *p_x = 15;
    *p_y = 7;
    *p_z = 100;
    printf("\nX: %d",x);
    printf("\nY: %d",y);
    printf("\nZ: %d",z);
    printf("\nP_X: %d",*p_x);
    printf("\nP_Y: %d",*p_y);
    printf("\nP_Z: %d",*p_z);

    return 0;
}