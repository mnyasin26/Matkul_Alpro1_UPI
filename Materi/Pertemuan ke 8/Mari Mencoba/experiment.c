#include <stdlib.h>
#include <stdio.h>
int main()
{
    char* inStr = "123.4567";         //the number we want to convert
    char* endptr;                     //unused char ptr for strtod

    char* loc = strchr(inStr, '.');
    long mantissa = strtod(loc+1, endptr);
    long whole = strtod(inStr, endptr);

    printf("whole: %d \n", whole);     //whole number portion
    printf("mantissa: %d", mantissa);  //decimal portion

}