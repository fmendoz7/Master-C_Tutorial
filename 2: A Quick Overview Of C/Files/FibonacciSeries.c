//This file primarily dealing with arrays 

#include <stdio.h>

//Good practice to explicitly define return types for main
int main()
{
    //Allocate 24 memory spaces 
    int fib[24];
    int i;

    //Define initial numbers to start fibonacci sequence  
        //Arrays define indices with SQUARE brackets 
    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < 24; i++)
    {
        //Use prior numbers to calculate next number in fibonacci sequence
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(i = 0; i < 24; i++) 
    {
        printf("%3d     %6d\n", i, fib[i]);
    }
}