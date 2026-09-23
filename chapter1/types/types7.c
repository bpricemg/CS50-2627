// Get a user's favorite number (allowing decimals)
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    float favorite = get_float("What's your favorite number? ");

    // Confirm the user's choice
    printf("You chose the number %f.\n", favorite);
}
