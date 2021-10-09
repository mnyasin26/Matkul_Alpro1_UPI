#include <stdio.h>

int main () {
    // deklarasi variabel untuk menampung nilai input dan hasil perhitungan
    int d, t;
    float nilai;

    // meminta masukan dari user
    printf("Masukan Nilai Diameter: ");
    scanf("%d", &d);
    printf("Masukan Nilai Tinggi: ");
    scanf("%d", &t);

    // hitung berdasarkan rumus volume tabung
    nilai = ((0.25)*22.0/7*d*d)*t;

    // keluarkan output ke layar
    printf ("Volume tabung: %.2f cm kubik", nilai);

    return 0;
}