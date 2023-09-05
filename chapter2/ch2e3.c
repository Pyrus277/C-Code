/*
Chapter 2 exercise 2, condense the dweight program by
    (1) replacing the assignment to height, length, and width with initializers (pg 46) and
    (2) removing the weight variable, instead calculating (volume+165) / 166 within the last printf

Compute the dimensional weight of a box, length, width, height inputted by the user
*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int height = 8, length = 12, width = 10, volume; // weight;

    volume = length * width * height;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165)/ INCHES_PER_POUND);
    

    return 0;
}



/*
Notes:
    %d is a printf placeholder for ints
    %f is the placeholder for floats, default to 6 places
    Change the default to 2 places, for example by: %.2f

    when working with ints like this, when a division
    operation would result in a non-integer, only the 
    integer part is kept, so 2.999 = 2  
    
    adding 165 here is a workaround to always round up
    with this int datatype division behavior.
*/

