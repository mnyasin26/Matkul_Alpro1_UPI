#include <stdio.h>

int main () {
    float alas; //Membuat vatiabel untuk menampung bilangan alas
    float tinggi; //Membuat vatiabel untuk menampung bilangan tinggi

    //memberitahukan nama program
    printf ("Program untuk menghitung luas segitiga\n");

    //Memnita masukan dari user untuk kedua nilai
    printf ("Masukan nilai alas segitiga:\n");
    scanf ("%f", &alas);
    printf ("Masukan nilai tinggi segitiga:\n");
    scanf ("%f", &tinggi);

    //buat variabel dan masukan nilai alas kali tinggi
    float hasil = alas * tinggi;

    // Menampilkan hasil perhitungan luas segitiga
    printf ("Luas segitiga adalah: %f", hasil);
}