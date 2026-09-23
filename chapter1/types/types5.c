// Get a user's favorite number
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    int favorite = get_int("What's your favorite number? ");

    // Confirm the user's choice
    printf("You chose the number %i.\n", favorite);
}
