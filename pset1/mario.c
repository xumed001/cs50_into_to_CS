#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, space;
    do
    {
        height = get_int("Height: ");
    } 
    while (height < 1 || height > 8);
    

    // for each row
    for (int row = 0; row < height; row++)
    {
        // printing spaces
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
            // printing #
            for (int col = 0; col <= row; col++)
            {
                printf("#");
            }
        // prints a new line
        printf("\n");
    }
    
}