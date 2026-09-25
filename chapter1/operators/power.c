// Raise a number to a power

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the base
    double base = get_double("Base: ");

    // Prompt the user for the power
    double power = get_double("Power: ");

    // Print the result
    printf("%0.3f raised to the power of %0.3f is %0.3f.\n", base, power, pow(base, power));
}
