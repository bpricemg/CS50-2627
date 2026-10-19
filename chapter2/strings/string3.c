/**
 * Print each character of a string vertically
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input: ");

    // Loop through the string
    for (int i = 0; i < strlen(s); i++)
    {
        // Print the upper case of the character, vertically
        printf("%c\n", toupper(s[i]));
    }
}
