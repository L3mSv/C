#include <stdio.h>
#include <stdlib.h>

char *First_Vogal(char*s){
    const char vogais[] = "aeiou";
    int i;
    for(i=0; s[i]!='\0'; i++)
        if(strchr(vogais,tolower(s[i])) !=NULL)
            return &s[i];
    return NULL;
}

int main(){
    First_Vogal("vagabundo");
    return 0;
}