#include "mylib.h"

void rata(int a, int arr1[a], int b, int arr2[b], int c, int arr3[c]){
    int i; int temp[3] = {0};
    for (i = 0; i < a; i++)
    {
        temp[0] += arr1[i];
    }
    temp[0] = temp[0]/a;

    for (i = 0; i < b; i++)
    {
        temp[1] += arr2[i];
    }
    temp[1] = temp[1]/b;

    for (i = 0; i < c; i++)
    {
        temp[2] += arr3[i];
    }
    temp[2] = temp[2]/c;

    if (temp[0] > temp[1] && temp[0] > temp[2])
    {
        if (temp[1] > temp[2])
        {
            printf("%d %d %d", temp[0], temp[1], temp[2]);
        }
        else
        {
            printf("%d %d %d", temp[0], temp[2], temp[1]);    
        }
        
    } 
    else if (temp[1] > temp[0] && temp[1] > temp[2])
    {
        if (temp[0] > temp[2])
        {
            printf("%d %d %d", temp[1], temp[0], temp[2]);
        }
        else
        {
            printf("%d %d %d", temp[1], temp[2], temp[0]);    
        }
    } 
    else
    {
        if (temp[1] > temp[0])
        {
            printf("%d %d %d", temp[2], temp[1], temp[0]);
        }
        else
        {
            printf("%d %d %d", temp[2], temp[0], temp[1]);    
        }
    }
}