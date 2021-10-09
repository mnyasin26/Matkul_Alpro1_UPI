#include <stdio.h>

int main () {
    int i, jumlah_baris = 0;
    int x = 0;
    int j = 0;

    int spasi = 0;

    for (i = 0; i < 101; i++, j++, x++)
    {
        printf("jumlah karakter: %d\n", i);

        while (j > 0)
    {
        printf("---------------Baris ke: %d\n", spasi);
        spasi++;
        j -= (x * 2) + 1;
        j++;
    }
    }
    
}