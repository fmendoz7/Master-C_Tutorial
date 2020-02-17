#include <stdio.h>
#define KILOS_PER_POUND 0.45359

main()
{
    int pounds;

    printf("US lbs  UK st. lbs  INT Kg\n");

    for(pounds=10; pounds<250; pounds +=10) 
    {
        //WHen you're doing one division by another, BE CAREFUL OF TYPES
        int stones = pounds/14;
    }
}