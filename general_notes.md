# General notes

## What happens when code is compiled and run?
1. preprocessing: # indicated directives are carried out
2. compiling: modified program goes to a compiler which turns it into object code
3. linking: a linker combines the object code with any additional code needed to yield a 
complete execuable. This additional code includes library functions (like printf) that are 
used in the program
  
Preprocessor is often integrated with the compiler

## Code checking 

### error checking
`lint` and `splint` (secure programming lint)
- These check a C program for a host of potential errors. 
- compilers can also do this, but lint is dedicated to this purpose

### readability and optimization
"bound-checkers" and "leak finders
- bound-checkers - ensures array subscripts are checked
- leak-finders - helps to locate memory leaks--blocks of memory that are dynamically
allocated but never deallocated.


## C Library Functions
### printing values with printf
- %d is a printf placeholder for ints
- %f is the placeholder for floats, default to 6 places
- Change the default to 2 places, for example by: %.2f

### getting input with scanf
scanf("%d", &i); Reads an int, stores in i


## Defining names for constants
For readable code, define your constants. Use macro functions
```c
#define INCHEST_PER_POUND 166
```
Note the #. This is a preprocessing directive that goes up top, with no semicolon
The all caps is convention.
If you're going to supply an expression instead of a value, use parentheses.