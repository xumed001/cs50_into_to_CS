#include <cs50.h>
#include <stdio.h>
#include <string.h>

//printing without %s 
// without var

// int main(void)
// {
//     string s = get_string("INPUT:  ");
//     printf("OUTPUT: ");
    
//     for (int i = 0; i < strlen(s); i++)
//     {
//         printf("%c", s[i]);
//     }
//     printf("\n");

// }


// With var
int main(void)
{
    string s = get_string("INPUT:  ");
    printf("OUTPUT: ");
    int length = strlen(s);
    
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

}