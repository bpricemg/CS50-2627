/**
 * Say hello to a user with their initilas form their name
 * provided in the command line
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // First and last name only
    if (argc != 3)
    {
        // Print a usage error
        printf("Usage: ./initials [first name] [last name]\n");

        // Return a failure
        return 1;
    }

    // Say hello
    printf("Hello, %c.%c.\n", toupper(argv[1][0]), toupper(argv[2][0]));

    // Return a success
    return 0;

}
