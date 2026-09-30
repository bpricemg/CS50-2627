// Determine the number of digits in an integer

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get a positive integer from user
    int number;
    do
    {
        number = get_int("Positive integer: ");
    }
    while(number <= 0);

    // How many digits that number has
    // Initialize a counter
    int counter = 0;

    // "Chomp" off each right digit, one by one, add to counter
    while(number > 0)
    {
        number /= 10;
        counter ++;
    }

    // Print the result
    printf("There are %i digits in this number.\n", counter);
}
