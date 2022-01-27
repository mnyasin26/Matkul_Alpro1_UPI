/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 3 urutan ke-1 (Segitiga Paling)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor pustaka yang dibutuhkan
#include <stdio.h>

// Deklarasi tipe data terstruktur bernama sgt untuk keperluan menyimpan atribut segitiga
typedef struct
{
    int sisi[3]; // <-- array of int untuk menampung masukan sisi-sisi segitiga
    int luas; // <-- int luas untuk menampung nilai luas segitiga ini
    int sisiMiring; // <-- int sisiMiring untuk menyimpan sisi terpanjang/miring
}sgt;

// Deklarasi fungsi dan prosedur
int sisiMiring(sgt segitiga); // <-- fungsi untuk mencari sisi miring segitiga
int luasSegitiga(int n, sgt segitiga); // <-- fungsi untuk menghitung luas segitiga
void input(int n, sgt segitiga[n], int *maxLuasSegitiga, int *maxSisiMiring); // <-- prosedur untuk proses input