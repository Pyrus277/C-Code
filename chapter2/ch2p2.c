/*
Chapter 2, Project 2

Program to compute the vol of a sphere with a 10-meter radius.

*/

#include <stdio.h>

#define RADIUS 10
#define PI 3.1415
#define FRAC 4.0f/3.0f

int main(void)
{
    float volume = FRAC*PI*(RADIUS*RADIUS*RADIUS); // C has no exponentiation!
    
    printf("The volume of the sphere is: %f\n", volume);
    
    return 0;
}