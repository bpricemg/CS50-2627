// Calculate the number of pennies someone would have if
// their change doubles every day for a month

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Get starting change, must be positive
    long pennies;
    do
    {
        pennies = get_int("Number of pennies to start: ");
    }
    while(pennies <= 0);

    // Get the number of days in a the month, must be a value between 28 and 31
    int days;
    do
    {
        days = get_int("Number of days in the month: ");
    }
    while(days < 28 || days > 31);

    // Double the number of pennies each day in the month
    pennies = pennies * pow(2, days);

    // Print out result
    printf("You will have $%0.2f pennies after one month!\n", pennies / 100.0);
}
