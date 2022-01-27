/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 3 urutan ke-2 (String Kanan Lagi)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor file header.h sebagai pustaka pribadi
#include "header.h"

// Variabel global untuk keperluan iterasi
int i, j;

// Definisi fungsi input yang mengembalikan nilai integer berupa panjang kata terpanjang dari masukan
// Parameter n untuk keperluan iterasi dan deklarasi parameter array str, parameter str untuk referensi array of string str di main
int inputDanMaxStrlen(int n, char str[n][51]) {
    int maxLen = 0; // <-- variabel int untuk menampung panjang kata terpanjang dari masukan
    for (i = 0; i < n; i++) // <-- for loop sebanyak n kali untuk proses input masukan serta mencari kata terpanjang
    {
        scanf("%s", &str[i]); // <-- input masukan string
        if (maxLen < strlen(str[i])) // <-- Jika maxLen kurang dari panjang str[i], maka eksekusi poin 1
        {
            maxLen = strlen(str[i]); // <-- poin 1, maxLen = panjang str[ke-i sesaat]
        }
    }
    return maxLen; // <-- mengembalikan nilai int maxLen ke pemanggil;
}

// Definisi ouput untuk melalukan serangkaian perintah cetak sesuai permintaan soal
// Parameter n untuk keperluan iterasi dan deklrasi parameter array str, parameter str untuk referensi array of string str di main, parameter maxStrlen untuk kontrol banyak spasi
void output(int n, char str[n][51], int maxStrlen) {
    
    for (i = 0; i < n; i++) // <-- for loop sebanyak n kali untuk mencetak kata sebanyak n kali
    {
        for (j = 0; j < maxStrlen - strlen(str[i]); j++) // <-- for loop sebanyak panjang kata terpanjang dikurangi panjang kata sesaat i
        {
            printf(" "); // <-- print white space
        }

        if (strlen(str[i])%2 == 0) // <-- control flow if statement untuk memisahkan perintah bagi string yang ganjil dan genap
        {
            // Blok ini untuk string genap
            for (j = strlen(str[i])/2; j < strlen(str[i]); j++) // <-- for loop sebanyak setengah string sesaat ke i, bagian belakang
            {
                printf("%c", str[i][j]); // <-- printf karakter str ke i sesaat index ke j sesaat
            }

            for (j = 0; j < strlen(str[i])/2 ; j++) // <-- for loop sebanyak setengah string sesaat ke i, bagian depan
            {
                printf("%c", str[i][j]); // <-- printf karakter str ke i sesaat index ke j sesaat
            }
        }
        else
        {
            for (j = strlen(str[i])-1; j >= 0 ; j--) // <-- for loop sebanyak string sesaat ke i, secara mundur
            {
                printf("%c", str[i][j]); // <-- printf karakter str ke i sesaat index ke j sesaat
            }
        }
        printf("\n"); // <-- print new line setiap string ke i diprint seutuhnya
    }
    
    
}


