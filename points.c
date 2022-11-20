#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MY_NUM = 2;
    int points = get_int("How many points did you lose? ");

    if (points < MY_NUM)
    {
        printf("You loset fewer points than me.\n");
    }
    else if (points > MY_NUM)
    {
        printf("you lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}