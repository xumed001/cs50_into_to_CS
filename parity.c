#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int("Enter a number: ");

    if (num%2 == 0)
    {
        printf("Your number is Even\n");
    }
    else
    {
        printf("Your number is Odd\n");
    }
}