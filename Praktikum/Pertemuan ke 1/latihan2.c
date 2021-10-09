#include <stdio.h>

int main () {
    // deklarasi
    int kue, keponakan;
    int nilai1, nilai2;

    // meminta masukan dari user
    printf("Jumlah kue: ");
    scanf("%d", &kue);
    printf("Jumlah keponakan: ");
    scanf("%d", &keponakan);

    // hitung input
    nilai1 = kue / keponakan;
    nilai2 = kue % keponakan;

    //keluarkan nilai ke layar
    printf ("Masing-Masing: %d buah\n", nilai1);
    printf ("Sisa Light Stick: %d buah", nilai2);
    
    return 0;
}