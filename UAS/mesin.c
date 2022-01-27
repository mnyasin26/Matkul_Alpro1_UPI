/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP9 (Sihir Pengganti Nama Itheas)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor Pustaka header.h agar bisa menggunakan fungsi standar
#include "header.h"

// Definisi prosedur input untuk memasukkan angka-angka
void input(int n, struktur arr[]) {
    int i; // <-- keperluan iterasi
    for (i = 0; i < n; i++) // <-- for loop sebanyak n kali
    {
        scanf("%d", &arr[i].angka1); // <-- input angka pertama
        scanf("%d", &arr[i].angka2); // <-- input angka kedua
        scanf("%d", &arr[i].angka3); // <-- input angka ketiga
        scanf("%d", &arr[i].angka4); // <-- input angka keempat
    }
}

// Definisi prosedur pengurutan untuk mengurutkan angka-angka
void pengurutan(int n, struktur arr[]) {
    int i, j; // <-- keperluan iterasi
    int temp; // <-- variabel pembantu dalam penukaran nilai variabel
    for (i = 0; i < n; i++) // <-- for loop sebanyak n kali
    {
        for (j = 0; j < n; j++) // <-- for loop sebanyak n kali
        {
            // Algoritma untuk mengurutkan angka-angka
            if (arr[i].angka1 > arr[i].angka2)
            {
                // Jika angka pertama lebih besar dari angka kedua, maka tukar
                temp = arr[i].angka1;
                arr[i].angka1 = arr[i].angka2;
                arr[i].angka2 = temp;
            }

            if (arr[i].angka2 > arr[i].angka3)
            {
                // Jika angka kedua lebih besar dari angka ketiga, maka tukar
                temp = arr[i].angka2;
                arr[i].angka2 = arr[i].angka3;
                arr[i].angka3 = temp;
            }

            if (arr[i].angka3 > arr[i].angka4)
            {
                // Jika angka ketiga lebih besar dari angka keempat, maka tukar
                temp = arr[i].angka3;
                arr[i].angka3 = arr[i].angka4;
                arr[i].angka4 = temp;
            }
        }
    }
}

// Definisi fungsi jmlSpasi
int jmlSpasi(int n) {
    int temp;
    if (n < 10)
    {
        // jika n kurnag dari sepuluh kembalikan nilai 1 ke pemanggil
        temp = 1;
    } else if (n < 100)
    {
        // jika n kurnag dari sepuluh kembalikan nilai 2 ke pemanggil
        temp = 2;
    } else if (n < 1000)
    {
        // jika n kurnag dari sepuluh kembalikan nilai 3 ke pemanggil
        temp = 3;
    } else if (n < 10000)
    {
        // jika n kurnag dari sepuluh kembalikan nilai 4 ke pemanggil
        temp = 4;
    }

    return temp;
}

// Definisi prosedur output untuk menampilkan angka-angka sesuai pola ke layar
void output(int n, struktur arr[]) {
    int i; // <-- keperluan iterasi
    int jumlahSpasi = 0; // <-- inisialisasikan jumlahSpasi = 0 agar tidak random
    for (i = 0; i < n; i++) // <-- for loop sebanyak n kali
    {
        spasi(jumlahSpasi); // <-- memanggil prosedur spasi untuk mencetak spasi sebanyak jumlahSpasi
        printf("%d\n", arr[i].angka1); // <-- tampilkan ke layar angka pertama dari array
        spasi(jumlahSpasi); // <-- memanggil prosedur spasi untuk mencetak spasi sebanyak jumlahSpasi
        printf("%d\n", arr[i].angka2); // <-- tampilkan ke layar angka keuda dari array
        spasi(jumlahSpasi); // <-- memanggil prosedur spasi untuk mencetak spasi sebanyak jumlahSpasi
        printf("%d\n", arr[i].angka3); // <-- tampilkan ke layar angka ketiga dari array
        spasi(jumlahSpasi); // <-- memanggil prosedur spasi untuk mencetak spasi sebanyak jumlahSpasi
        printf("%d\n", arr[i].angka4); // <-- tampilkan ke layar angka keempat dari array
        jumlahSpasi += jmlSpasi(arr[i].angka4); // <-- tambahkan jumlah spasi dengan memanggil fungsi jmlSpasi lalu masukkan parameter angka keempat karena angka keempat merupakan nilai terbesar dari satu array
    }
}

// Definisi prosedur spasi untuk mencetak spasi sebanyak yang diminta
void spasi(int spasi) {
    int i; // <-- keperluan iterasi
    for (i = 0; i < spasi; i++) // <-- for loop sebanyak spasi
    {
        printf(" "); // <-- cetak spasi
    }
}   