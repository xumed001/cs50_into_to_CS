#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts x, y 
    // adds x + y
    long x = get_long("x: ");
    long y = get_long("y: ");

    printf("%li\n", x+y);
}