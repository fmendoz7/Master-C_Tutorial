#include <stdio.h>

//Create helper method to calculate weight conversions
void print_converted(int pounds)
{
    //Convert US weight to IMPERIAL and INTERNATIONAL units
    int stones = pounds / 14;

    //Modulo operator takes the REMAINDER
    int uklbs = pounds % 14;

    float kilos_per_pound = 0.45359;
    float kilos = pounds * kilos_per_pound;

    printf("    %3d      %2d      %2d      %6.2f\n", pounds, stones, uklbs, kilos);
}

int main()
{
    int us_pounds;

    //Incorporates scanf to grab user input 
        //%d is input keyword for integers
        //& references MEMORY LOCATION

    //Ensure you delimited input characteristic with "%d"
    //There should be no quotes surrounding &us_pounds
    scanf("%d", &us_pounds);

    printf(" US lbs     UK st. lbs      INT Kg\n");
    print_converted(us_pounds);
}