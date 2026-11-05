/**
 * Linear search for a name and print their phone number
 */

#include <cs50.h>
#include <stdio.h>
#include <strings.h>

int main(void)
{
    // An array of names
    string names[] = {"Logan", "Nate", "Sunny", "Ed", "AJ"};
    string numbers[] = {"413-458-9582", "555-555-5555", "413-000-1234", "800-123-4567", "413-123-4567"};

    // Search
    string name = get_string("Name: ");
    for (int i = 0; i < 5; i++)
    {
        if (strcasecmp(names[i], name) == 0)
        {
            printf("Number: %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
