/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 3 urutan ke-1 (Segitiga Paling)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor pustaka pribadi
#include "header.h"

// Program utama atau fungsi yang pertama dipanggil
int main() {
    int n; // <-- variabel n untuk menampung nilai yang akan digunakan untuk munjukkan ada berapa segitiga yang akan diinput
    int maxLuasSegitiga = 0; // <-- variabel untuk menampung nilai luas segitiga terbesar
    int maxSisiMiring = 0; // <-- variabel untuk menampung nilai sisimiring dari segitiga yang memiliki luas terbesar

    scanf("%d", &n); // <-- input nilai n
    sgt segitiga[n]; // <-- deklarasi array tipe data terstruktur sgt sepanjang n
    input(n, segitiga, &maxLuasSegitiga, &maxSisiMiring); // <-- memanggil prosedur input untuk memasukkan segitiga sekaligus menghitung luas terbesar dan sisi miringnya
    printf("%d %d\n", maxLuasSegitiga, maxSisiMiring); // <-- cetak ke layar nilai luas segitiga terbesar dan sisi miringnya
    
    return 0; // <-- kembalikan nilai 0 seabagi tanda bahwa program sukses dijalankan
}