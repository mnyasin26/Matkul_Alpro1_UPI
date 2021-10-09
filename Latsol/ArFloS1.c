#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {
    int i, j = 0, temp1, temp2, masukan;
    

    #define N_DECIMAL_POINTS_PRECISION (100) // n = 2. Two decimal points.

    scanf("%d", &masukan);

    float temp[masukan];

    for (i = 0; i < masukan; i++)
    {
        scanf("%f", &temp[i]);
    }

    for (i = 0; i < masukan; i++)
    { 
        // printf("Ini nilai: %f\n", temp);


        temp1 = (int)temp[i];
        temp2 = ((int)round(temp[i]*N_DECIMAL_POINTS_PRECISION)%N_DECIMAL_POINTS_PRECISION);

        /*
        printf("Ini nilai %d\n", temp1);
        printf("Ini nilai %d\n", temp2);
        */

        if (temp1 % temp2 == 0)
        {
            j++;
        } 
        
        
    }

    if (j >= 3)
    {
        printf ("yes\n");
    } else {
        printf ("no\n");
    }
    
    
}