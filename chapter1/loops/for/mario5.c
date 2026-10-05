// Print a triangle of blocks
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer
    int height;
    do
    {
        height = get_int("Number: ");
    }
    while (height <= 0);

    // For each row
    for (int row = 0; row < height; row++)
    {
        // For each column
        for (int column = 0; column < height - row; column++)
        {
            // Print a block
            printf("#");
        }

        // Print a new line to prepare for next row
        printf("\n");
    }

}
