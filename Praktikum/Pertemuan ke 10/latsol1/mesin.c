#include "header.h"

int napjilASC(char arr[]) {
    int temp = 0;

    int i;
    for (i = 0; i < strlen(arr); i++)
    {
        temp += arr[i];
    }
    
    if (temp%2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}