/**
 * Average three scores using an array
 */

 #include <stdio.h>

 int main(void)
 {
    // Scores
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 50;

    // Print the average
    printf("Average: %0.2f%%\n", (scores[0] + scores[1] + scores[2]) / 3.0);
 }
