#include <stdio.h>

//By using the define keyword and all capitals, you created a CONSTANT
#define KILOS_PER_POUND 0.45359

//(!!!) It helps to EXPLICITLY DEFINE YOUR TYPES

//NUANCE: If you do NOT explicitly define a type in C, assume int
int main()
{
    int pounds;

    printf("US lbs      UK st. lbs      INT Kg\n");

    //Iterate through US lbs (pound) values and convert to UK stones, UK lbs and Kilos
    for(pounds=10; pounds<250; pounds +=10) 
    {
        //WHen you're doing one division by another, BE CAREFUL OF TYPES
        int stones = pounds/14;

        //Modulo operator takes the REMAINDER
        int uklbs = pounds % 14;

        float kilos = pounds * KILOS_PER_POUND;

        printf("    %d      %d      %d      %f\n", pounds, stones, uklbs, kilos);
    }
}