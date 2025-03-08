#include <stdio.h>

int main(int argc, char *argv[]){
    printf("Numero de parametros %d\n",argc);
    for(int i=0; i<argc; i++){
        printf("argv[%d]: %s\n",i,argv[i]);
    }
    potencia = potencia_de_x_elevado_z(argv[1],argv[2]);
    printf("X^z: %d",potencia);

    return 0;
}

int potencia_de_x_elevado_z(int x, int z){
    int jack_x = x;
    for(int i=0;i<=z;i++){
        x *= jack_x;
    }
    return x;
}

