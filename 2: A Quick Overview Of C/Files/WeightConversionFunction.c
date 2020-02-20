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

    printf(" US lbs     UK st. lbs      INT Kg\n");

    //Iterate in terms of US pounds
    for(us_pounds=10; us_pounds < 250; us_pounds += 10)
    {
        print_converted(us_pounds);
    }
}