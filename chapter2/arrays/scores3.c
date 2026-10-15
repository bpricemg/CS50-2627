/**
 * Average three scores using an array
 */

 #include <cs50.h>
 #include <stdio.h>

 // Function prototype
 float array_average (int length, int array[]);

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

    // Call array_average() function to print the average
    printf("Average: %0.2f%%\n", array_average(n, scores));

 }

 /**
  * Returns the average of integer values in an array
  */
 float array_average (int length, int array[])
 {
    // Add all the numbers
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    // Return the average
    // Typecast n to a float for division
    return sum / (float) length;
 }
