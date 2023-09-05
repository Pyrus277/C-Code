#include <stdio.h> // We are "importing" the i/o library so we can use printf

int main(void)
{
    printf("hello, world\n");
}

/* 
`make` is the cli program that compiles your source code into machine code
Technically, make is not the compiler, it's the program that automates the compilation 
$ make hello   <-- note you don't include the extension. 
A new file should show up now just called `hello`
This file is the binary the computer actually understands to create the output!

For a beginner friendly cheatsheet of libraries and functions, see:
https://manual.cs50.io/

*/