/*
Chapter 2, Project 4

Program that asks the user to enter a dollars-and-cents amount, then displays the 
amount with 5% tax added.
*/

#include <stdio.h>

#define TAX 1.05f

int main(void)
{
    float amount;
    
    printf("Enter an amount: ");
    if (scanf("%f", &amount) == 1) {
        amount = amount * TAX;
        printf("With tax added: %.02f\n", amount);
    } else {
        printf("Failed to enter valid amount.\n");
    };
    return 0;
}