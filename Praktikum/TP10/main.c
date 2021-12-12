/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Pustaka pribadi
#include "header.h"


// Program utama
int main() {
    // Variabal lokal
    int i;
    int n, m;
    int jmlhEnergi = 100; // <-- insialisasi jumlah energi = 100
    char namaTarget[51]; // <-- penampung kata kunci yang ingin dicari
    
    // Proses input
    scanf("%s", &namaTarget); // <-- Kata kunci
    scanf("%d", &n); // <-- panjang/banyaknya barang yang ada
    list_barang bar[n];
    for (i = 0; i < n; i++) // <-- for untuk input kode, jumlah energi yang dibutuhkan, dan nama barang
    {
        scanf("%s", &bar[i].kode);
        scanf("%d", &bar[i].energi);
        scanf("%s", &bar[i].nama);
        
        dekripsi(bar[i].nama); // <-- setelah menginput nama barang sekalian memanggil prosedur untuk mendecode nama barang terenkripsi
    }
    scanf("%d", &m); // <-- banyak kode yang ingin dicari
    kode kodeTarget[m];
    for (i = 0; i < m; i++) // <-- for untuk input kode yang ingin dicek/dicari
    {
        scanf("%s", &kodeTarget[i].kode);
    }

    int index = -1; // <-- inisialisasi -1 untuk mengantisipasi index 0
    pemindai(n, m, kodeTarget, namaTarget, bar, &index, &jmlhEnergi); // <-- pindai kode input lalu hasil prosesnya simpan ke index dan jmlhEnergi

    keluaran(bar, index, jmlhEnergi, n); // <-- memanggil prosedur keluaran untuk mencetak hasil semua agoritma ke layar

    // Kembalikan nilai 0 agar compiler tau bahwa program berjalan lancar
    return 0;    
}