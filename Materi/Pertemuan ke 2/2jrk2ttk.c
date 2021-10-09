#include <stdio.h>
#include <math.h>

int main () {
    //Membuat vatiabel untuk menampung nilai koordinat titik
    float x1, y1, x2, y2;

    //memberitahukan nama program
    printf ("Program untuk menghitung jarak antar titik\n");

    //Meminta masukan user ke setiap variabel
    printf ("Masukan nilai x1:\n");
    scanf ("%f", &x1);
    printf ("Masukan nilai y1:\n");
    scanf ("%f", &y1);
    printf ("Masukan nilai x2:\n");
    scanf ("%f", &x2);
    printf ("Masukan nilai y2:\n");
    scanf ("%f", &y2);

    //hitung berdasarkan rumus
    float hasil = sqrt((x1-x2)*(x1-x2)) + (y1-y2)*(y1-y2);

    //teampilkan ke layar hasil perhitungan
    printf("Jarak 2 titik adalah : %f", hasil);


}