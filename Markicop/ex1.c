#include <stdio.h>

int main () {
    int i, jumlah_baris = 0;
    int x = 1;
    int j = 0;

    for (i = 0; i < 101; i++, j++)
    {
        printf("jumlah karakter: %d\n", i);

        while (j >= 1)
    {
        printf("---------------Baris ke: %d\n", jumlah_baris);
        j = j - (x);
        x = x + 2;
        jumlah_baris = jumlah_baris + 1;

    }
    }
    
}






