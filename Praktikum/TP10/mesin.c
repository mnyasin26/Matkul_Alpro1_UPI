/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Pustaka pribadi
#include "header.h"

// Variabel global di dalam mesin.c
int i, j;
int temp = 0;

// Definisi prosedur untuk Decode kata yang terenkripsi menggunakan panjang kata yang diinput
// Parameter yang dimasukkan pada prosedur ini adalah string (Array tipe data char dengan menyesuaikan panjang array yang dimasukkan)
void dekripsi(char temp[]) {
    int len = strlen(temp);

    char z_a[26]; // <- Array ini diisikan karakter z-a, bertujuan untuk memedahkan proses decode
    
    // For untuk proses pemasukan karakter z-a
    for (i = 0; i < 26; i++)
    {
        z_a[i] = 97 + (25-i);
    }

    // For untuk merubah karakter yang terenkripsi dengan cara menggeser karakter sebanyak panjang kata secara mundur
    for (i = 0; i < len; i++)
    {
        temp[i] = z_a[((26-(temp[i]-96))+len)%26];
    }
}

// Definisi prosedur untuk memindai data yang berkaitan dengan kode barangnya lalu dicocokkan dengan kata kunci yang dicari
void pemindai(int n, int m, kode kodeTarget[], char namaTarget[], list_barang bar[], int *stat, int *jmlhEnergi) {
    i = 0; 

    // While untuk mengecek kondisi apakah kata kunci sudah ditemukan pada data barang atau belum, jika sudah maka stop pemindaian jika tidak lanjutkan hingga ketemu atau energi habis
    // While ini juga mengecek nilai jumlah energi, jika energi habis maka stop pemindaian
    while ((i < m) && (*stat == -1) && (*jmlhEnergi > 0))
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(kodeTarget[i].kode, bar[j].kode) == 0) 
            {
                if (strcmp(namaTarget, bar[j].nama) == 0)
                {
                    *stat = j; // <- lakukan bila kata kunci ditemukan pada nama kode barang yang sama dengan input, misal f2, maka pengecakan di f2 lalu namanya dicocokkan dengan kata kunci
                }
                temp = j;
            }
        }
        *jmlhEnergi -= bar[temp].energi;
        i++;
    }
}

// Definisi prosedur untuk melakukan serangkaian perintah untuk menampilkan output
void keluaran(list_barang bar[], int index, int sisaEnergi, int n) {

    // If elses untuk menentukan output berdasarkan energi dan status ditemukan atau tidaknya barang
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
    
    // For untuk menampilkan kode barang dengan namanya yang sudah terdecode
    for (i = 0; i < n; i++)
    {
        printf("%s %s\n", bar[i].kode, bar[i].nama);
    }
    
    printf("=================\n");
    
}