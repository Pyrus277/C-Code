/* Converts Fahrenheit to Celsius */

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f) // gotta specify floats in the expression, or it'll evaluate to floor--0

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter a temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit-FREEZING_PT)* SCALE_FACTOR;
    
    printf("Temperature in celsius: %.2f\n", celsius);

    return 0;
}