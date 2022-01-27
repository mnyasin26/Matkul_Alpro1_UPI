/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor Pustaka Standar
#include <stdio.h> // <-- fungsi printf() dan scanf()

// Tipe data terstruktur yang di dalamnya ada 4 buah integer
typedef struct
{
    int angka1;
    int angka2;
    int angka3;
    int angka4;
}struktur;



void input(int n, struktur arr[]); // <-- Deklarasi Prosedur input untuk memasukkan angka-angka
// Parameter n untuk kontrol for di dalam prosedur input
// Parameter arr[] yang otomatis pass by reference sebagai identitas array type terstruktur

void pengurutan(int n, struktur arr[]); // <-- Deklarasi Prosedur pengurutan untuk mengurutkan angka-angka dari terkecil ke terbesar
// Parameter n untuk kontrol for di dalam prosedur input
// Parameter arr[] yang otomatis pass by reference sebagai identitas array type terstruktur

void output(int n, struktur arr[]); // <-- Deklarasi Prosedur output untuk menampilkan angka-angka yang sudah diurutkan beserta polanya
// Parameter n untuk kontrol for di dalam prosedur input
// Parameter arr[] yang otomatis pass by reference sebagai identitas array type terstruktur

void spasi(int spasi); // Deklarasi prosedur spasi berguna untuk mencetak spasi sesuai pola
// Parameter spasi adalah jumlah spasi yang harus dicetak

int jmlSpasi(int n); // Deklarasi fungsi jmlSpasi untk menghitung berapa banyak spasi sesuai digit terpanjang yang ada pada satu array]
// Parameter n adalah nilai terbesar dari satu array, klasifikasikan sesuai digitnya lalu kembalikan nilai berupa integer jumlah spasi yangharus dicetak