/**
 * The length of a person's first name
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get a user's full name
    string name = get_string("Full name: ");

    // Count the number of char before the first space
    // "Searching for the first space"
    int length = 0;
    while(name[length] != ' ')
    {
        length++;
    }

    // Print the length
    printf("The length of first name is %i.\n", length);
}
