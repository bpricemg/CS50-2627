/**
 * The length of a person's first name
 */
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a user's full name
    string name = get_string("Full name: ");

    // Count the number of char before the first space
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {
            // Print the length
            printf("The length of first name is %i.\n", i);

            // Stop the loop
            break;
        }
    }

}
