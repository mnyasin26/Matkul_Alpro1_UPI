#include <stdio.h>

typedef struct
{
    int panjang;
    int lebar;
    int tinggi;

    int luas, volume; 
} balok;

int main () {
    balok b1;

    printf("Masukan nilai panjang balok:\n");
    scanf("%d", &b1.panjang);
    printf("Masukan nilai lebar balok:\n");
    scanf("%d", &b1.lebar);
    printf("Masukan nilai tinggi balok:\n");
    scanf("%d", &b1.tinggi);

    b1.luas = (2 * (b1.panjang * b1.lebar)) + (2 * (b1.panjang * b1.tinggi) + (2 * (b1.lebar * b1.tinggi)));
    b1.volume = (b1.panjang * b1.lebar * b1.tinggi);

    printf("Luas permukaan balok adalah: %d\n", b1.luas);
    printf("Volume permukaan balok adalah: %d\n", b1.volume);
    
    return 0;

}
