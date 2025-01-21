#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get user input
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    //create the bricks
    for (int i = 1; i <= n; i++)
    {
        //align to the right
        printf("%*s", n - i, "");

        //crete left bricks
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        //add space in between
        printf("  ");

        //create right bricks
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
