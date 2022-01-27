/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal UAS (Suku Kata Array String)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor Pustaka Pribadi
#include "header.h"


// Definisi prosedur input
void input(int n, char arr[n][101]) {
    int i; // <-- untuk Iterasi
    for (i = 0; i < n; i++) // <-- for loop sebanyak n kali untuk input string
    {
        scanf("%s", &arr[i]); // <-- memanggil fungsi scanf dengan parameter "%s" (format specifier) dan &arr[i] (target lokasi penyimpanan)
    }
}

// Definisi fungsi suKata untuk menghitung jumlah suku kata string
int subKata(int n, char arr[], char sukuKata[]) {
    int temp = 0; // <-- temp untuk menampung nilai banyaknya suku kata pada string
    char strTemp[101]; // <-- strTemp untuk menyimpan sementara karakter sepanjang awal hingga panjang suku kata
    int i, j, counter = 0; // <-- keperluan iterasi
    for (i = 0; i < strlen(arr); i++) // <-- for loop sebanyak panjang string arr
    {
        counter = i; // <-- set counter = i agar yang tersimpan pada strTemp akan maju satu langkah per iterasi
        for (j = 0; j < strlen(sukuKata); j++) // <-- for loop sebanyak panjang string sukuKata
        {
            strTemp[j] = arr[counter++]; // <-- proses memasukkan karakter sepanjang suku kata yang diambil dari string arr, lalu iterasi selanjutnya akan berganti satu langkah karakter ke depan dari string arr
        }
        strTemp[j] = 0; // <-- karakter null di akhir strTemp setelah pemasukkan karakter tadi agar dianggap string
        if (strcmp(strTemp, sukuKata) == 0) // <-- control flow if untuk mengecek apakah strTemp sama dengan sukuKata
        {
            // Jika ya, lakukan di bawah ini
            temp++; // <-- increase sebanya satu kali varibael temp
            
        }
    }

    return temp; // <-- Kembalikan nilai temp ke pemanggil
}

