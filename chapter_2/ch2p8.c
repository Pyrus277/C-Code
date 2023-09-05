/*
Chapter 2 project 8

Write a program that calculates the remaining balance on a loan after
the first, second, and third monthly payments.

Note: Not sure how to validate when there's multiple scanf statements like this. 
Need to learn more about flow control in later chapters. For now, just gonna write
the program "as intended" get the warning, and move forward. 
*/

#include <stdio.h>

int main(void)
{
    float principal, interest, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthy payment: ");
    scanf("%f", &payment);

    interest /= (100*12) + 1; // turn interest into a percentage, then get the monthly rate
    
    //first payment
    principal += (principal*interest);
    principal -= payment;
    printf("Balance remaining after first payment: %.2f\n", principal);

    principal += (principal*interest);
    principal -= payment;
    printf("Balance remaining after second payment: %.2f\n", principal);

    principal += (principal*interest);
    principal -= payment;
    printf("Balance remaining after third payment: %.2f\n", principal);

    // jeez, I can't wait to learn about how to do loops. 
    return 0;
}