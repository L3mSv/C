#include <stdio.h>

int main()
{
    int dia,mes,ano;

    printf("Informe um mes em valor numerico: "); scanf("%d",&mes);

    switch(mes)
    {
        case 1:
        
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 2:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        
        int div_1,div_2;
        div_1 = ano%10;
        div_2 = div_1%10;

        if (div_2 == 00){
            if(ano%400==0){
                printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

                if (dia >= 1 || dia <= 29)
                printf("\n%d/%d/%d é uma data valida",dia,mes,ano);
            }
            else{
                printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

                if (dia >= 1 || dia <= 28)
                printf("\n%d/%d/%d é uma data valida",dia,mes,ano); 
            }
        }
        else{
            if(div_2%4==0){
                printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

                if (dia >= 1 || dia <= 29)
                printf("\n%d/%d/%d é uma data valida",dia,mes,ano);
            }
            else{
                printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

                if (dia >= 1 || dia <= 28)
                printf("\n%d/%d/%d é uma data valida",dia,mes,ano); 
            }
        }
        break;
        case 3:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);
        
        break;

        case 4:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 30)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 5:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 6:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 30)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 7:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 8:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 9:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 30)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 10:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 11:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 30)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        case 12:
        printf("\nInforme um ano: "); scanf("%d",&ano);
        printf("\nInforme um dia do determinado mes no ano de %d",ano); scanf("%d",&dia);

        if (dia >= 1 || dia <= 31)
        printf("\n%d/%d/%d é uma data valida",dia,mes,ano);

        break;
        default: printf("Erro! mes inexistente.");      
    }
    return 0;
}
