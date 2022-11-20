#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// converts strings to uppercase 

// int main(void)
// {
//     string s = get_string("Before: ");
//     printf("After:  ");
//     int n = strlen(s);

//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             printf("%c", s[i] - 32);
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");
// }


// using touppper()
// int main(void)
// {
    // printf("--- Lower --> Upper Case ---");
    // printf("\n");
//     string s = get_string("Before: ");
//     printf("After:  ");
//     int n = strlen(s);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%c", toupper(s[i]));
//     }
//     printf("\n");
// }

// using tolower()
int main(void)
{
    printf("--- Upper --> Lower Case ---");
    printf("\n");
    string s = get_string("Before: ");
    printf("After:  ");
    int n = strlen(s);

    for (int i = 0; i < n; i++)
    {
        printf("%c", tolower(s[i]));
    }
    printf("\n");
}