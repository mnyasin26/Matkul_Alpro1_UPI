#include <stdio.h>

/*
int main () {
    char a = 'a';
    char b = 'b';
    char c = 'c';

    if (a == 'a' || a == 'i' || a == 'u' || a == 'e' || a == 'o')
    {
        printf("Huruf pertama adalah huruf vokal\n");
    } else {
        printf("Huruf pertama adalah huruf konsonan\n");
    }

    if (b == 'a' || b == 'i' || b == 'u' || b == 'e' || b == 'o')
    {
        printf("Huruf kedua adalah huruf vokal\n");
    } else {
        printf("Huruf kedua adalah huruf konsonan\n");
    }

    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
    {
        printf("Huruf ketiga adalah huruf vokal\n");
    } else {
        printf("Huruf ketiga adalah huruf konsonan\n");
    }

    
    
    return 0;
}
*/

int main () {
    // tiga kotak karakter
    char x;
    char y;
    char z;

    // meminta masukan user dan menyimpanya ke kotak tadi
    scanf("%c %c %c", &x, &y, &z);

    // tiga kotak integer
    int xint = 0, yint = 0, zint = 0;

    // cek karakter pertama apakah konsonan. Jika ya, ubah xint jadi = 1
    if (x != 'a' && x != 'i' && x != 'u' && x != 'e' && x != 'o')
    {
        xint = 1;
    }
    
    // cek karakter kedua apakah vokal. Jika ya, ubah yint jadi = 1
    if (y == 'a' || y == 'i' || y == 'u' || y == 'e' || y == 'o')
    {
        yint = 1;
    }

    // cek karakter ketiga apakah konsonan. Jika ya, ubah zint jadi = 1
    if (z != 'a' && z != 'i' && z != 'u' && z != 'e' && z != 'o')
    {
        zint = 1;
    }

    // cek tiga kotak, Jika tiga tiganya bernilai 1 maka keluarkan "memenuhi syarat", kalau tidak keluarkan "tidak memenuhi syarat"
    if (xint == 1 && yint == 1 && zint == 1)
    {
        printf ("memenuhi syarat\n");
    } else {
        printf ("tidak memenuhi syarat\n");
    }
    
    return 0;

}