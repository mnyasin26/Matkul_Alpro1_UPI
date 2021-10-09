/* Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Praktikum 1 (Peter Sang Penolong)
dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. */

// deklarasi library standar agar dapat menggunakan fungsi dasar
#include <stdio.h>

// program utama atau fungsi pertama yang dipanggil
int main () {
    // deklarasi variabel bertipe data integer
    int p, l, t, temp, jam, menit, detik;

    // meminta masukan dari pengguna berupa bilangan bulat (0 < masukan <= 10) menggunakan fungsi scanf() lalu disimpan ke variabel terkait
    scanf("%d", &p); 
    scanf("%d", &l);
    scanf("%d", &t);

    // hitung luas permukaan tembok menggunakan aritmatika
    temp = ((p * t) * 2) + ((l * t) * 2); // contoh ((8 x 8) x 2) + ((8 x 8) x 2) = 256

    // algoritma untuk menentukan jam, menit, dan detik menggunakan aritmatika
    jam = (temp * 100) / 60 / 60; // contoh: 25.600 / 60 / 60 = 7,11111 jam (karena ini integer maka yang diambil angka depannya saja yaitu 7)
    menit = ((temp * 100) - (jam * 60 * 60)) / 60; // contoh: (25.600 - (25.200)) : 60 = 6,66666 menit (hanya dimabil angka 6)
    detik = ((temp * 100) - (jam * 60 * 60) - (menit * 60)); // contoh : 25.600 - 25.200 - 360 = 40 detik

    // menampilkan keluaran dari program ke layar menggunakan fungsi printf()
    printf("Luas ruang tamu : %d meter persegi\n", temp);
    printf("Waktu menunggu  : %d jam, %d menit, %d detik\n", jam, menit, detik);

    // mengembalikan bilangan bulat bernilai 0 jika program berjalan sukses
    return 0;
}