#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get user input to be [1;8]
    int n;
    do
    {
        n = get_int("Insert height: ");
    }
    while (n > 8 || n < 1);

    //display bricks
    for (int i = 1; i <= n; i++)
    {
        //align bricks to the right
        printf("%*s", n - i, "");
        
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
