#include <stdio.h>

int main () {
    // kotak masukan
    int masukan;

    // nama program
    printf("program untuk mengecek apakah angka masukan satuan, puluhan, ratusan, ribuan, dan selainnya\n");
    printf("silahkan masukan angkanya : ");

    // meminta masukan user
    scanf("%d", &masukan);

    // algoritma untuk mengecek apakah angka masukan satuan, puluhan, ratusan, ribuan, dan selainnya
    if (masukan >= 0 && masukan < 10)
    {
        printf("bilangan yang dimasukan adalah satuan\n");
    } else if (masukan >= 10 && masukan < 100)
    {
        printf("bilangan yang dimasukan adalah puluhan\n");
    } else if (masukan >= 100 && masukan < 1000)
    {
        printf("bilangan yang dimasukan adalah ratusan\n");
    } else if (masukan >= 1000 && masukan < 10000)
    {
        printf("bilangan yang dimasukan adalah ribuan");
    } else if (masukan >= 10000)
    {
        printf("we dont do that here!");
    }
    
    return 0;

}