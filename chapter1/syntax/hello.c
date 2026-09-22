// A program that says hello to a user
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's name
    string answer = get_string("What's your name? ");

    // Say hello to the user
    printf("hello, %s\n", answer);
}
