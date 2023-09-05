/*
Chapter 2 project 7

Write a program that asks the user to enter a USD amount and then shows
how to pay that amount using the smallest number of $20, $10, $5, and $1 bills
*/

#include <stdio.h>

int main(void)
{
    int amnt, nbills20, nbills10, nbills5;
    
    printf("Enter a whole number USD amount: ");
    if (scanf("%d", &amnt) == 1) {
        // $20 bills
        nbills20 = amnt / 20;
        amnt -= (20 * nbills20);
        printf("$20 bills: %d\n", nbills20);
        
        // $10 bills
        nbills10 = amnt / 10;
        amnt -= (10 * nbills10);
        printf("$10 bills: %d\n", nbills10);

        // $5 bills
        nbills5 = amnt / 5;
        amnt -= (5 * nbills5);
        printf("$5 bills: %d\n", nbills5);

        // $1 bills 
        printf("$1 bills: %d\n", amnt);

    } else {
        printf("Failed to enter valid amount.");
    };

    return 0;
}