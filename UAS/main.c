/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor Pustaka header.h agar bisa menggunakan fungsi standar
#include "header.h"

// Program Utama/ Fungsi yang pertama sekali dipanggil ketika program diluncurkan
int main (){
    int n; // <-- Deklarasi variabel n untuk menyimpan nilai "seberapa banyak deratan angka yang harus dimasukkan"
    scanf("%d", &n); // <-- Input masukkan berupa integer lalu masukkan ke n

    struktur arr[n]; // Deklrasi array tipe data terstruktur dengan panjang n

    // Pemanggilan prosedur
    input (n, arr); // <-- memanggil prosedur untuk input angka-anka
    pengurutan(n, arr);  // <-- memanggil pengurutan untuk mengurutkan angka-angka dari yang terkecil ke terbesar
    output(n, arr);  // <-- memanggil output untuk menampilkan angka-anka yang telah diurutkan sesuai pola

    return 0; // <-- kembalikan nilai 0 sebagai pertanda program berjalan lanjayyy
}