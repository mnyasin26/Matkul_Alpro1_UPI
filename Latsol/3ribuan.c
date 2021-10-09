#include <stdio.h>

int main () {
    int masukan, i, x = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%d", &masukan);

        if (masukan >= 1000)
        {
            x++;
        }
    }

    if (x >= 3)
    {
        printf("ribuan 3 atau lebih\n");
    } else {
        printf("tidak valid\n");
    }
    
    
}