/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Praktikum 2 (Get Riddle Stone)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// deklarasi library standar agar dapat menggunakan fungsi dasar dalam Bahasa C
#include <stdio.h>

// int main() menjadi syarat awal dalam memulai program berbahasa C
int main () {

    // Deklarasi empat variabel tipe data char untuk menampung masukan user yaitu berupa satu karakter pada setiap variabel
    char char1, char2, char3, char4;// char1 = masukan pertama, char2 = masukan kedua, char3 = masukan ketiga, char4 = masukan keempat

    // Deklarasi dua variabel tipe data integer untuk menampung masukan user yaitu bilangan bulat
    int int1, int2;// int1 = masukan kelima, int2 = masukan keenam

    // Deklarasi variabel tipe data integer dan inisiasi = 0 digunakan untuk menyimpan banyaknya huruf vokal setelah melewati proses penghitungan dalam if beruntun pada line ke 35-57
    int temp = 0;// *temp adalah temporary/sementara

    // Meminta empat masukan user berupa karakter A <= masukan <= Z
    scanf("%c ", &char1); // contoh: user memasukan "A" lalu enter, maka huruf "A" akan tersimpan pada variabel char1
    scanf("%c ", &char2); // contoh: user memasukan "B" lalu enter, maka huruf "B" akan tersimpan pada variabel char2
    scanf("%c ", &char3); // contoh: user memasukan "C" lalu enter, maka huruf "C" akan tersimpan pada variabel char3
    scanf("%c ", &char4); // contoh: user memasukan "D" lalu enter, maka huruf "D" akan tersimpan pada variabel char4

    // Meminta dua masukan user berupa bilangan bulat 
    scanf("%d", &int1); // contoh: user memasukan "10" lalu enter, maka bilangan "10" akan tersimpan pada variabel int1
    scanf("%d", &int2); // contoh: user memasukan "20" lalu enter, maka bilangan "20" akan tersimpan pada variabel int2

    // Proses penghitungan jumlah vokal pada char1-char4 menggunakan if beruntun
    if ((char1 == 'A') || (char1 == 'I') || (char1 == 'U') || (char1 == 'E') || (char1 == 'O'))
    {
        // Jika char1 memuat salah satu karakter A, I, U, E, O, maka variabel temp akan bertambah satu poin
        temp++;   
    }

    if ((char2 == 'A') || (char2 == 'I') || (char2 == 'U') || (char2 == 'E') || (char2 == 'O'))
    {   
        // Jika char2 memuat salah satu karakter A, I, U, E, O, maka variabel temp akan bertambah satu poin
        temp++;   
    }

    if ((char3 == 'A') || (char3 == 'I') || (char3 == 'U') || (char3 == 'E') || (char3 == 'O'))
    {
        // Jika char3 memuat salah satu karakter A, I, U, E, O, maka variabel temp akan bertambah satu poin
        temp++;   
    }

    if ((char4 == 'A') || (char4 == 'I') || (char4 == 'U') || (char4 == 'E') || (char4 == 'O'))
    {
        // Jika char4 memuat salah satu karakter A, I, U, E, O, maka variabel temp akan bertambah satu poin
        temp++;   
    }

    // Algoritma utama untuk menentukan keluaran, apakah Riddle Stone didapatkan atau tidak berdasarkan syarat yang telah ditentukan
    if (int1 >= int2) 
    {
        // cek terlebih dahulu apakah masukan kelima dan keenam memenuhi syarat n >= m, dengan n = int1 dan m = int2
        // Jika memenuhi syarat maka eksekusi blok pada kode ini
        // Jika tidak memenuhi syarat maka eksekusi else pada line ke-103
        if (temp < 2)
        {
            // Jika temp < 2 atau vokal kurang dari 2, maka eksekusi blok ini
            // Jika tidak memenuhi syarat maka masuk ke else if pada line ke-78
            if ((int1 + int2) >= 14)
            {
                // Jika masukan kelima dan keenam (int1 dan int2) dijumlahkan >= 14, maka eksekusi blok kode ini
                // Jika tidak memenuhi syarat, maka eksekusi else pada line ke-74
                printf("Riddle Stone Acquired! Everybody comes home\n"); // ini adalah keluaran berupa teks "Riddle Stone Acquired! Everybody comes home"
            } else {
                printf("You are unworthy, for you cannot riddle me\n"); // ini adalah keluaran berupa teks "You are unworthy, for you cannot riddle me"
            }
            
        } else if (temp == 2)
        {
            // Jika temp = 2 atau vokal sama dengan 2, maka eksekusi blok ini
            // Jika tidak memenuhi syarat maka masuk ke else if pada line ke-90
            if (((int1 + int2) % 2) == 0)
            {
                // Jika masukan kelima dan keenam (int1 dan int2) dijumlahkan adalah genap, maka eksekusi blok kode ini
                // Jika tidak memenuhi syarat, maka eksekusi else pada line ke-87
                printf("Riddle Stone Acquired! Everybody comes home\n"); // ini adalah keluaran berupa teks "Riddle Stone Acquired! Everybody comes home"
            } else {
                printf("You are unworthy, for you cannot riddle me\n"); // ini adalah keluaran berupa teks "You are unworthy, for you cannot riddle me"
            }
        } else if (temp > 2)
        {
            // Jika temp > 2 atau vokal lebih dari 2, maka eksekusi blok ini
            // Jika tidak memenuhi syarat maka if ini berakhir
            if (((int1 + int2) % 2) != 0)
            {
                // Jika masukan kelima dan keenam (int1 dan int2) dijumlahkan adalah ganjil, maka eksekusi blok kode ini
                // Jika tidak memenuhi syarat, maka eksekusi else pada line ke-99
                printf("Riddle Stone Acquired! Everybody comes home\n"); // ini adalah keluaran berupa teks "Riddle Stone Acquired! Everybody comes home"
            } else {
                printf("You are unworthy, for you cannot riddle me\n"); // ini adalah keluaran berupa teks "You are unworthy, for you cannot riddle me"
            }
        }
    } else {
        printf("You are unworthy, for you cannot riddle me\n"); // ini adalah keluaran berupa teks "You are unworthy, for you cannot riddle me"
    }

    // Jika program sukses dijalankan maka kembalikan integer bernilai 0
    return 0;
}
    
