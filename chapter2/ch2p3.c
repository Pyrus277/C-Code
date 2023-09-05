/*
Chapter 2, Project 3

Program to compute the vol of a sphere with a 10-meter radius,
This time we prompt the user for the radius

*/

#include <stdio.h>

#define PI 3.1415
#define FRAC 4.0f/3.0f

int main(void)
{
    float radius, volume;

    printf("What is the radius of the sphere?\n");
    if (scanf("%f", &radius) == 1) {  // if we successfully assign the value here, then...
        volume = FRAC*PI*(radius*radius*radius);
        printf("The volume of the sphere is: %f\n", volume);
    } else {
        printf("Falied to enter valid number.\n");
    };
    
    return 0;
}