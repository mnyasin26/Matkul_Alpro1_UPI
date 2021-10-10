/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP3 (Pekerjaan Rumah Bobi 1)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/


#include <stdio.h> // memanggil library stdio.h agar dapat menggunakan fungsi dasar dalam Bahasa C
#include <math.h> // memanggil library math.h untuk menggunakan fungsi sqrt(akar kuadrat)

// membuat tipe data terstruktur dengan nama lingkaran untuk menampung nilai komponen lingkaran c
typedef struct 
{
    int x, y; // koor x dan y
    int r; // jari-jari
} lingkaran;

// int main() menjadi syarat awal dalam memulai program berbahasa C
int main () {
    int kode_k; // integer untuk menyimpan input kode_k misal '123'
    int bil1, bil2, bil3; // integer untuk menyimpan hasil split digit 1 sampai 3 kode_k 
    int prsn_luas; // integer untuk menyimpan permintaan persen luas lingkaran cA atau cB
    char pil_lngkrn; // char untuk menyimpan permintaan luas lingkaran yang akan dihitung, cA atau cB

    double temp_double; // double untuk menyimpan hasil perhitungan dari syarat yang memerlukan angka berkoma, seperti digit ke-1, ke-2, dan selain ketiga digit
    int temp_int; // double untuk menyimpan hasil perhitungan dari syarat yang tidak memerlukan angka berkoma, seperti digit ke-3

    lingkaran cA; // Deklarasi tipe data lingakaran untuk lingkaran cA
    lingkaran cB; // Deklarasi tipe data lingakaran untuk lingkaran cB

    // Meminta masukan user dan dimasukkan pada masing masing variabel terkait, contoh masukan: "123 7 5 7 14 1 4 A 50"
    scanf("%d", &kode_k);
    scanf(" %d %d %d", &cA.r, &cA.x, &cA.y);
    scanf(" %d %d %d", &cB.r, &cB.x, &cB.y);
    scanf(" %c", &pil_lngkrn);
    scanf(" %d", &prsn_luas);

    // Memisahkan digit 1 sampai 3 kode_k
    bil1 = kode_k/100; // Digit ke-1
    bil2 = ((kode_k % 100)/10); // Digit ke-2
    bil3 = (kode_k % 10); // Digit ke-3

    // Algoritma untuk menentukan keluaran berdasarkan digit kode_k
    switch (bil1) // Cek nilai bil1
    {
        case 1:
            // Jika bil1 = 1, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_double = ((3.14*(cA.r*cA.r)) + (3.14*(cB.r*cB.r))); // Menghitung jumlah luas dua lingkaran cA dan cB serta simpan hasilnya ke temp_double
            printf("ELuas AB: %0.2lf cm2\n", temp_double); // Tampilkan ke layar temp_double
        break;

        case 2:
            // Jika bil1 = 2, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_double = ((2*(3.14*(cA.r))) + (2*(3.14*(cB.r)))); // Menghitung jumlah keliling dua lingkaran cA dan cB serta simpan hasilnya ke temp_double
            printf("EKeliling AB: %0.2lf cm\n", temp_double); // Tampilkan ke layar temp_double
        break;

        case 3:
            // Jika bil1 = 3, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_int = sqrt(((cA.x - cB.x)*(cA.x - cB.x)) + ((cA.y - cB.y)*(cA.y - cB.y))); // Menghitung jarak pusat dua lingkaran cA dan cB serta simpan hasilnya ke temp_int agar dibulatkan ke bawah
            printf("Jarak AB: %d satuan\n", temp_int); // Tampilkan ke layar temp_int
        break;

        default:
            // Jika bil1 != 1,2, ataupun 3, maka eksekusi case ini. jika tidak, maka keluar switch ini

            if (pil_lngkrn == 'A')
            {
                // Jika pil_lngkrn = 'A', maka eksekusi blok kode ini, jika tidak, eksekusi else pada line ke-78
                temp_double = (prsn_luas/100.00) * (3.14*(cA.r*cA.r)); // Menghitung luas  lingkaran cA serta simpan hasilnya ke temp_double
                printf("Luas %d%% A: %0.2lf cm2\n", prsn_luas, temp_double); // Tampilkan ke layar temp_double
            } 
            else 
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cB.r*cB.r)); // Menghitung luas  lingkaran cB serta simpan hasilnya ke temp_double
                printf("Luas %d%% B: %0.2lf cm2\n", prsn_luas, temp_double); // Tampilkan ke layar temp_double
            }
        break;
    }

    switch (bil2) // Cek nilai bil2
    {
        case 1:
            // Jika bil2 = 1, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_double = ((3.14*(cA.r*cA.r)) + (3.14*(cB.r*cB.r))); // Menghitung jumlah luas dua lingkaran cA dan cB serta simpan hasilnya ke temp_double
            printf("ELuas AB: %0.2lf cm2\n", temp_double); // Tampilkan ke layar temp_double
        break;

        case 2:
            // Jika bil2 = 2, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_double = ((2*(3.14*(cA.r))) + (2*(3.14*(cB.r)))); // Menghitung jumlah keliling dua lingkaran cA dan cB serta simpan hasilnya ke temp_double
            printf("EKeliling AB: %0.2lf cm\n", temp_double); // Tampilkan ke layar temp_double
        break;

        case 3:
            // Jika bil2 = 3, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_int = sqrt(((cA.x - cB.x)*(cA.x - cB.x)) + ((cA.y - cB.y)*(cA.y - cB.y))); // Menghitung jarak pusat dua lingkaran cA dan cB serta simpan hasilnya ke temp_int agar dibulatkan ke bawah
            printf("Jarak AB: %d satuan\n", temp_int); // Tampilkan ke layar temp_int
        break;

        default:
            // Jika bil2 != 1,2, ataupun 3, maka eksekusi case ini. jika tidak, maka keluar switch ini

            if (pil_lngkrn == 'A')
            {
                // Jika pil_lngkrn = 'A', maka eksekusi blok kode ini, jika tidak, eksekusi else pada line ke-78
                temp_double = (prsn_luas/100.00) * (3.14*(cA.r*cA.r)); // Menghitung luas  lingkaran cA serta simpan hasilnya ke temp_double
                printf("Luas %d%% A: %0.2lf cm2\n", prsn_luas, temp_double); // Tampilkan ke layar temp_double
            } 
            else 
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cB.r*cB.r)); // Menghitung luas  lingkaran cB serta simpan hasilnya ke temp_double
                printf("Luas %d%% B: %0.2lf cm2\n", prsn_luas, temp_double); // Tampilkan ke layar temp_double
            }
        break;
    }

    switch (bil3) // Cek nilai bil3
    {
        case 1:
            // Jika bil3 = 1, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_double = ((3.14*(cA.r*cA.r)) + (3.14*(cB.r*cB.r))); // Menghitung jumlah luas dua lingkaran cA dan cB serta simpan hasilnya ke temp_double
            printf("ELuas AB: %0.2lf cm2\n", temp_double); // Tampilkan ke layar temp_double
        break;

        case 2:
            // Jika bil3 = 2, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_double = ((2*(3.14*(cA.r))) + (2*(3.14*(cB.r)))); // Menghitung jumlah keliling dua lingkaran cA dan cB serta simpan hasilnya ke temp_double
            printf("EKeliling AB: %0.2lf cm\n", temp_double); // Tampilkan ke layar temp_double
        break;

        case 3:
            // Jika bil3 = 3, eksekusi case ini. jika tidak, maka cek case selanjutnya

            temp_int = sqrt(((cA.x - cB.x)*(cA.x - cB.x)) + ((cA.y - cB.y)*(cA.y - cB.y))); // Menghitung jarak pusat dua lingkaran cA dan cB serta simpan hasilnya ke temp_int agar dibulatkan ke bawah
            printf("Jarak AB: %d satuan\n", temp_int); // Tampilkan ke layar temp_int
        break;

        default:
            // Jika bil3 != 1,2, ataupun 3, maka eksekusi case ini. jika tidak, maka keluar switch ini

            if (pil_lngkrn == 'A')
            {
                // Jika pil_lngkrn = 'A', maka eksekusi blok kode ini, jika tidak, eksekusi else pada line ke-78
                temp_double = (prsn_luas/100.00) * (3.14*(cA.r*cA.r)); // Menghitung luas  lingkaran cA serta simpan hasilnya ke temp_double
                printf("Luas %d%% A: %0.2lf cm2\n", prsn_luas, temp_double); // Tampilkan ke layar temp_double
            } 
            else 
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cB.r*cB.r)); // Menghitung luas  lingkaran cB serta simpan hasilnya ke temp_double
                printf("Luas %d%% B: %0.2lf cm2\n", prsn_luas, temp_double); // Tampilkan ke layar temp_double
            }
        break;
    }

    // Jika program sukses, kembalikan nilai 0.
    return 0;
}