/* 
Chapter 2, exercise 4:
Write a program that declares several int a float variables--without initializing them--
and then prints their values. Is there any pattern to the values? (Usually there isn't.)

(def gonna get some gcc warnings for this one)
*/

#include <stdio.h>

int main(void)
{
    int x, y, z;
    float a, b, c;

    printf("I wonder what values will be assigned to these variables:\n");
    printf("Ints: X = %d, Y = %d, Z = %d\n", x, y, z);
    printf("floats: X = %f, Y = %f, Z = %f\n", a, b, c);
    
    return 0;
}
// huh, all zeroes.