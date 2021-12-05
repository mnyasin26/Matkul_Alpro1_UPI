/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Library
#include <stdio.h>
#include <string.h>

// Variabel Global
typedef struct
{
    char kode[3];
    int energi;
    char nama[51];
}list_barang;

typedef struct
{
    char kode[3];
}kode;

// Deklarasi Prosedur
void dekripsi(char temp[]);
void pemindai(int n, int m, kode kodeTarget[], char namaTarget[], list_barang bar[n], int *stat, int *jmlhEnergi);
void keluaran(list_barang bar[], int index, int sisaEnergi, int n);


