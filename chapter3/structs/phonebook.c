/**
 * Linear search for a name and print their phone number
 */

#include <cs50.h>
#include <stdio.h>
#include <strings.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // An array of people
    person people[5];

    // Fill in the array
    people[0].name = "Logan";
    people[0].number = "413-458-9582";

    people[1].name = "Nate";
    people[1].number = "555-555-5555";

    people[2].name = "Sunny";
    people[2].number = "413-000-1234";

    people[3].name = "Ed";
    people[3].number = "800-123-4567";

    people[4].name = "AJ";
    people[4].number = "413-123-4567";

    // Search
    string name = get_string("Name: ");
    for (int i = 0; i < 5; i++)
    {
        if (strcasecmp(people[i].name, name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
