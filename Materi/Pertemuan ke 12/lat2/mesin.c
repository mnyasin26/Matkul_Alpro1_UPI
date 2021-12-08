#include "header.h"

int maxarr(int n, int arr[]) {
    int i; int max = -999;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;
}

int minarr(int n, int arr[]) {
    int i; int min = 999;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    return min;
}