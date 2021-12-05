/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Pustaka pribadi
#include "header.h"

int i, j;
int temp = 0;

void dekripsi(char temp[]) {
    int len = strlen(temp);

    char z_a[26];
    
    for (i = 0; i < 26; i++)
    {
        z_a[i] = 97 + (25-i);
    }

    for (i = 0; i < len; i++)
    {
        temp[i] = z_a[((26-(temp[i]-96))+len)%26];
    }
}

void pemindai(int n, int m, kode kodeTarget[], char namaTarget[], list_barang bar[], int *stat, int *jmlhEnergi) {
    i = 0; 
    while ((i < m) && (*stat == -1) && (*jmlhEnergi > 0))
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(kodeTarget[i].kode, bar[j].kode) == 0) 
            {
                if (strcmp(namaTarget, bar[j].nama) == 0)
                {
                    *stat = j;
                }
                temp = j;
            }
        }
        *jmlhEnergi -= bar[temp].energi;
        i++;
    }
}

void keluaran(list_barang bar[], int index, int sisaEnergi, int n) {
    if ((sisaEnergi >= 0) && (index != -1))
    {
        printf("Barang ditemukan di %s\n", bar[index].kode);
    } 
    else if ((sisaEnergi >= 0) && (index == -1))
    {
        printf("Barang tidak ditemukan\n");
    }
    else if (sisaEnergi < 0)
    {
        printf("Barang tidak ditemukan energi habis\n");
    }

    printf("=================\nnama asli barang\n=================\n");
    
    for (i = 0; i < n; i++)
    {
        printf("%s %s\n", bar[i].kode, bar[i].nama);
    }
    
    printf("=================\n");
    
}