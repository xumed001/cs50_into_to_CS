#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many scores? ");
    int scores[n];
    int i, sum=0;

    for ( i = 0; i < n; i ++)
    {
        scores[i] = get_int("Scores: ");
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + scores[i];
    }

    printf("Average: %.2f\n", sum/ (float) n);
}

