/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    float masukan_float[3];
    int masukan_integer[3];

    int masukan_float1[3];
    int masukan_float2[3];

    int i, j;

    int x = 0;
    int y = 0;

    int temp[3] = {0};
    float temp_float;

    #define N_DECIMAL_POINTS_PRECISION (100) // n = 2. Two decimal points.

    for (i = 0; i < 3; ++i) {
        scanf("%f", &masukan_float[i]);
    }
    for (i = 0; i < 3; ++i) {
        scanf("%d", &masukan_integer[i]);
    }

    for (i = 0; i < 3; ++i) {
        /*
        masukan_float1[i] = (int)masukan_float[i];
        temp_float = (masukan_float[i] - masukan_float1[i])*100;
        masukan_float2[i] = temp_float; */
    
        
        masukan_float1[i] = (int)masukan_float[i];
        masukan_float2[i] = ((int)round(masukan_float[i]*N_DECIMAL_POINTS_PRECISION)%N_DECIMAL_POINTS_PRECISION);

        
    }
    

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {


            if ((masukan_float1[j]%masukan_integer[i]) == 0 && (masukan_float2[j]%masukan_integer[i]) == 0)
            {
                
                temp[i] += 1;
                
            }
            
        }
        
    }

    for (i = 0; i < 3; ++i) {
        if (temp[i] >= 2)
        {
            ++x;
            
        }
    }

    if (x > 0)
    {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    
    
    return 0;

}