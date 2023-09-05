/*
Chapter 2, project 5

Write a program that asks the user to enter a value for x, then displays the value
of a polynomial.
*/

#include <stdio.h>

int main(void)
{
    float x, poly;
    printf("Enter a value for x: ");
    if (scanf("%f", &x) == 1) {
        poly = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;
        printf("Value of the polynomial  is: %.2f\n", poly);
    } else {
        printf("Failed to enter a valid number.\n");
    
    };
    return 0;
}