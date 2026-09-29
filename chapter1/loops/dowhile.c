// Get a positive integer

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get a positive integer from user
    // Note* need to declare n outside of loop to use after loop
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    while(n <= 0);

    // Display value
    printf("You chose the positive integer %i.\n", n);
}
