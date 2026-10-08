/**
 * Test a function that multiplies two floats
 */

 #include <cs50.h>
 #include <stdio.h>

 // Function prototype
 float mult(float x, float y);

 int main(void)
 {
    // Get a number from user
    float first = get_float("Number: ");

    // Get another number from user
    float second = get_float("Another number: ");

    // Print
    printf("The product of %f and %f is %f.\n", first, second, mult(first, second));
 }

 // Function definition
float mult(float x, float y)
 {
    float product = x * y;
    return product;
 }
