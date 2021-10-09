#include <stdio.h>

int main () {
    //Membuat variabel untuk menampung nilai masukan dan template satuan, puluhan, ratusam, dan ribuan
    int masukan;
    int sat, pul, rat, rib;

    //memberitahukan nama program
    printf ("Program untuk mengklasifikasikan angka ribuan\n");

    //Meminta masukan user ke variabel masukan
    printf ("Masukan nilai ribuan saja:\n");
    scanf ("%d", &masukan);

    //hitung berdasarkan pola pikir
    sat = masukan%10;
    pul = (masukan%100 - sat)/10;
    rat = (masukan%1000 - pul - sat)/100;
    rib = (masukan - rat - pul - sat)/1000;
    
    //teampilkan ke layar hasil perhitungan
    printf("satuan: %d\npuluhan: %d\nratusan: %d\nribuan: %d", sat, pul, rat, rib);

    return 0;
}