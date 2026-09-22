/**
 * This program will say hello to a use by name
 *
 * Brandon Price
 * CS50 AP
 * Mount Greylock
 *
 * 9/22/26
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's name
    string answer = get_string("What's your name? ");

    // Say hello to the user
    printf("hello, %s\n", answer);
}
