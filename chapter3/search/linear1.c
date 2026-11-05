/**
 * Linear search for an element in an array
 */

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of names
    string names[] = {"Logan", "Nate", "Sunny", "Ed", "AJ"};

    // Search
    string name = get_string("Name: ");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
