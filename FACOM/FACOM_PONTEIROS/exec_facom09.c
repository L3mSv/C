#include <stdio.h>

int main(){
    float matriz[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("ENDERECO[%d][%d]: %p\n",i,j,&matriz[i][j]);
        }
    }
    return 0;
}