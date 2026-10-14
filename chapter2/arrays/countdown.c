/**
 * Count down from 9
 */

 #include <stdio.h>
 #include <unistd.h>

 int main(void)
 {
    // Initialze an array to hold our countdown numbers
    int countdown[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // Print out each element in the array
    for (int i = 0; i < 10; i++)
    {
        printf("%i\t", countdown[i]);
        sleep(1);
    }

    printf("\n");
 }
