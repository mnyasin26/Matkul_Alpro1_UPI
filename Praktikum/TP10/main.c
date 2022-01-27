/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP10 (Infinite Techi Story - The Impostor Among Us)
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
    char str[51];
    char kode[7];

    // Proses Input
    scanf("%d", &n);
    int x[n];
    scanf("%d", &m);
    scanf("%s", str);

    inputInt(n, x); // <-- memanggil prosedur inputInt misal 1 1 1 3 4 5
    scanf("%s", &kode);
    
    dekripsi(n, x, str, kode); // <-- memanggil prosedur dekrispi untuk mendekripsi kata yang terenkripsi

    int lol = identifikasi(n, m, str, kode); // <-- memanggil fungsu identifikasi penyamar lalu hasil nialinya disimpan ke variabel lol
    
    // Case switch untuk menentukan berdasarkan nilai lol, 1 = itheas, 2 = peter parker, 3 = boba dan bobi
    switch (lol)
    {
        case 1:
        printf("Hasil dekripsi : %s\n", str);
        printf("Penyamar       : Itheas\n");
        break;

        case 2:
        printf("Hasil dekripsi : %s\n", str);
        printf("Penyamar       : Peter\n");
        break;

        case 3:
        printf("Hasil dekripsi : %s\n", str);
        printf("Penyamar       : Boba dan Bobi\n");
        break;
    
        default:
        break;
    }
    
    // kemablikan nilai 0 sebagai tanda program sukses
    return 0;   
}