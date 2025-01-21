#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get user input
    string user_name = get_string("What's your name?\n");

    //print user input
    printf("hello, %s\n", user_name);
    //printf("hello, world\n");
}
