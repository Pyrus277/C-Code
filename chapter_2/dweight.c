/*
Compute the dimensional weight of a box, length, width, height inputted by the user
*/

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int length, width, height, volume, weight;

    // gotta separate the scanfs and the printfs. Scanf won't display text.
    printf("Enter height of box: ");
    scanf("%d", &height); // Note behavior, this adds a newline.
    printf("Enter length of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width); 

    volume = length * width * height;
    weight = (volume + 165)/ INCHES_PER_POUND; 

    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", weight);
    

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

