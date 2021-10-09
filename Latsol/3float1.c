#include <stdio.h>
#include <math.h>

int main () {
    double masukan[6];
    int i, x = 0, temp;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &masukan[i]);

        temp = (masukan[i] - (int)masukan[i]) * 10 + 0.01;

        //printf("nilai int depan: %lf\n", (masukan[i] - (int)masukan[i]) * 10);
        //printf("nilai temp: %d\n", temp);

        if (temp % 3 == 0 && temp != 0)
        {
            x++;
        }

    }

    

    if (x >= 3)
    {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    
    return 0;
}