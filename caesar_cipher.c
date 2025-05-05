#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* generate_uppercase()
{
    char* uppercase = malloc(27);
    if (uppercase == NULL) {
        printf("Memory allocation to uppercase failed.\n");
        exit(1);
    }

    for (int i = 0; i < 26; ++i) {
        uppercase[i] = 'A' + i; 
    }
    uppercase[26] = '\0'; 

    return uppercase;
}

char* generate_lowercase()
{
    char* lowercase = malloc(27);
    if(lowercase == NULL)
    {
        printf("Memory allocation to lowercase failed.\n");
        exit(1);
    }
    for(int i = 0; i < 26; ++i)
    {
        lowercase[i] = 'a' + i;
    }
    lowercase[26] = '\0';

    return lowercase;
}

char* cipher(char* string, int key)
{
    char* uppercase = generate_uppercase();
    char* lowercase = generate_lowercase();

    char* encrypt = malloc(strlen(string) + 1);
    if (encrypt == NULL) {
        printf("Memory allocation to encrypt failed.\n");
        exit(1);
    }
    encrypt[0] = '\0'; 

    for (int i = 0; string[i] != '\0'; ++i)
    {
        if (isupper(string[i])) {
            char new_char = 'A' + (string[i] - 'A' + key) % 26;
            strncat(encrypt, &new_char, 1);
        } else if (islower(string[i])) {
            char new_char = 'a' + (string[i] - 'a' + key) % 26;
            strncat(encrypt, &new_char, 1);
        } else {
            strncat(encrypt, &string[i], 1);
        }
    }
    free(uppercase);
    free(lowercase);
    
    return encrypt;
}


int main()
{
    char* string = "arroz";
    char* string_encrypt = cipher(string, 1);

    printf("\nOriginal: %s", string);
    printf("\nEncrypted: %s\n", string_encrypt);

    free(string_encrypt); 
    return 0;
}

