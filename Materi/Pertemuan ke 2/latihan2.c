#include <stdio.h>

int main () {
    int p;// variabel panjang
    int l;// variabel lebar

    printf("Masukan nilai panjang:\n");
    scanf("%d", &p);

    printf("Masukan nilai lebar:\n");
    scanf("%d", &l);

    int hasil = p * l;

    printf("luas persegi panjang adalah: %d", hasil);
    return 0;

}