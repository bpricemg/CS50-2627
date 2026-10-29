/**
 * Cipher a message with 5 character key
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Message
    string message = "Voila!";

    // Cipher the message
    printf("Ciphered message: ");

    // For each character in the message
    for (int i = 0; i < 6; i++)
    {
        // Go forward 5 ASCII characters with "wrapping"
        // (note* this only works for capital letters right now)
        printf("%c", (message[i] + 5 - 'A') % 26 + 'A');
    }
    printf("\n");

    return 0;
}
