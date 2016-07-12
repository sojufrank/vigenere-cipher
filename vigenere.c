#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cipher(char* str);
int c = 0;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("please restart program\n");
        return 1;
    }
    for (int i =0; i < strlen(argv[1]); i++)
    {
        if(argv[1][i] < 'A')
        {
            printf("please restart program\n");
            return 1;
        }
    }
    //char* test = "hello World";
    char* test = GetString();
    char* panda = argv[1];
    //printf("%s", argv[1]);
    //int k = cipher(panda);
    
    for(int i = 0; i < strlen(test); i++)
    {
        if(test[i] >= 'a' && test[i] <= 'z')
        {
            int letter = ((test[i]-'a') + cipher(panda)) % 26;
            printf("%c", letter + 'a');
        }
        else if(test[i] >= 'A' && test[i] <= 'Z')
        {
            int letter = ((test[i]-'A')+cipher(panda)) %26;
            printf("%c", letter + 'A');
        }
        else 
        {
            printf("%c", test[i]);
        }
    }
    
    //printf("your key is %i\n", k);
    printf("\n");
    
}

int cipher(char* str)
{

    int key = str[c % strlen(str)];
    //printf("%i\n", key);
    c++;
    key = tolower(key);
    return key -'a';
}

