/**
 * De-cipher a message with 5 character key
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Message
    string message = "[tnqf&";

    // De-cipher the message
    printf("The hidden message is: ");

    // For each character in the message
    for (int i = 0; i < 6; i++)
    {
        // Go back 5 ASCII characters
        printf("%c", message[i] - 5);
    }
    printf("\n");

    return 0;
}
