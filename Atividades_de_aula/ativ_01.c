#include <stdio.h>

int main()
{   
    char str[1000], newstr[1000];
    int i = 0, x=0;
        printf ("Insira uma string:\n");
        fgets(str, 999, stdin);     
        while (str[i] != '\0')
        {
            if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i]== 'u' || str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] =='O'|| str[i] == 'U')
            {
                i++;
                continue;
            }
            else
            {
                if (str[i] != ' ')
                {
                    newstr[x++] = str [i];
                }
            }
            i++;
        }
        printf ("String sem vogais:\n");
        puts (newstr);
        return 0;
}