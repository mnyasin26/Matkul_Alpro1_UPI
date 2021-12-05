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
    int jmlhEnergi = 100;
    char namaTarget[51];
    
    // Proses input
    scanf("%s", &namaTarget);

    scanf("%d", &n);
    list_barang bar[n];

    for (i = 0; i < n; i++)
    {
        scanf("%s", &bar[i].kode);
        scanf("%d", &bar[i].energi);
        scanf("%s", &bar[i].nama);
        
        dekripsi(bar[i].nama);
    }

    scanf("%d", &m);
    
    kode kodeTarget[m];
    
    for (i = 0; i < m; i++)
    {
        scanf("%s", &kodeTarget[i].kode);
    }

    int index = -1;
    pemindai(n, m, kodeTarget, namaTarget, bar, &index, &jmlhEnergi);

    keluaran(bar, index, jmlhEnergi, n);

    //printf("%d\n", jmlhEnergi);
    //printf("%s", bar[index]);
    return 0;    
}