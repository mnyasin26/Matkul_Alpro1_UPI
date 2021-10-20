#include <stdio.h>

int main() {
    int masukan1[10], masukan2[10];
    int hasil_max1, hasil_max2;
    int i;

    printf("masukan nilai arr 1\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &masukan1[i]);
    }

    printf("masukan nilai arr 2\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &masukan2[i]);
    }

    hasil_max1 = masukan1[0];

    for (i = 0; i < 10; i++)
    {
        if (hasil_max1 < masukan1[i])
        {
            hasil_max1 = masukan1[i];
        }
        
    }

    hasil_max2 = masukan2[0];

    for (i = 0; i < 10; i++)
    {
        if (hasil_max2 < masukan2[i])
        {
            hasil_max2 = masukan2[i];
        }
        
    }

    
    
    printf("Jumlah max 2 arr: %d", hasil_max1 + hasil_max2);

    return 0;
}