#include <stdio.h>

typedef struct
{
    int pembilang;
    int penyebut;
}bilangan_pecahan;

int main () {
    bilangan_pecahan bp1;
    bilangan_pecahan bp2;
    bilangan_pecahan bp_hasil;

    printf("Masukan pembilang bil. pecahan pertama:\n");
    scanf("%d", &bp1.pembilang);
    printf("Masukan penyebut bil. pecahan pertama:\n");
    scanf("%d", &bp1.penyebut);
    printf("Masukan pembilang bil. pecahan kedua:\n");
    scanf("%d", &bp2.pembilang);
    printf("Masukan penyebut bil. pecahan kedua:\n");
    scanf("%d", &bp2.penyebut);

    bp_hasil.penyebut = bp1.penyebut * bp2.penyebut;
    bp_hasil.pembilang = (bp1.pembilang * bp2.penyebut) + (bp1.penyebut * bp2.pembilang);

    printf("Hasilnya adalah: %d/%d\n", bp_hasil.pembilang, bp_hasil.penyebut);

    return 0;
    
}