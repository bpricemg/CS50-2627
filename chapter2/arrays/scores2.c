/**
 * Average three scores using an array
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Let the user decide how many scores
    int n = get_int("How many scores do you want to enter? ");

    int scores[n];

    // Fill in the scores
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Add all the numbers
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }

    // Print the average
    // Typecast n to a float for division
    printf("Average: %0.2f%%\n", sum / (float) n);
 }
