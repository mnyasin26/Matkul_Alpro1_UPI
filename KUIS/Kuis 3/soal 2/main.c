/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 3 urutan ke-2 (String Kanan Lagi)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor file header.h sebagai pustaka pribadi
#include "header.h"

// Program utama atau fungsi yang pertama dipanggil
int main() {
    int n; // <-- variabel untuk mendefinisikan berapa kata yang akan diinput
    int maxStrlen = 0; // <-- variabel int untuk menampung panjang kata terpanjang

    scanf("%d", &n); // <-- proses input n
    char str[n][51]; // <-- deklarasi string of array sebanyak n buah
    maxStrlen = inputDanMaxStrlen(n, str); // <-- memanggil fungsi inputDanMaxStrlen lalu diassign nilainya ke maxStrlen
    output(n, str, maxStrlen); // <-- memanggil prosedur output untuk mencetak string sesuai permintaan soal
    
    return 0; // <-- kembalikan nilai 0 seabagi tanda bahwa program sukses dijalankan
}