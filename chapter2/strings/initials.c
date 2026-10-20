/**
 * Prints the user's initials
 */
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get the user's full name
    string name = get_string("Full name: ");

    // Print the first initial (it's always the first char) as an upper case
    printf("%c", toupper(name[0]));

    // Search for a space or a hyphen
    for (int i = 1; i < strlen(name); i++)
    {
        if (name[i] == ' ' || name[i] == '-')
        {
            // Print the char after a space
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}
