#include <stdio.h>  // directives come after a #. Preprocessors obey these lines, called directives 
                    // Preprocessors can add or modify programs
int main(void) 
// int indicates the main function returns an integer value. "void" indicates no args.
// int in this case is optional because it defaults to int
{
    float profit = 53.48f; 
    printf("Profit: %.2f\n", profit);
    return 0;
}

/* steps that happen when a program runs
1. preprocessing: # indicated directives are carried out
2. compiling: modified program goes to a compiler which turns it into object code
3. linking: a linker combines the object code with any additional code needed to yield a 
complete execuable. This additional code includes library functions (like printf) that are 
used in the program
  
Preprocessor is often integrated with the compiler
*/