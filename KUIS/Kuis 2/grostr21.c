/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 2 urutan ke-2 (Pengelompokan String Reserve)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Import Library
#include <stdio.h> // <-- stdio.h berisikan fungsi-fungsi standar di bahasa C seperti printf, scanf dll.
#include <string.h> // <-- string.h berisikan fungsi-fungsi seperti strcmp(), strcpy(), strlen()

// Program Utama
int main() {

    // Deklarasi dan Input
    int n; // <-- Varibel n bertipe integer digunakan untuk menyimpan nilai banyak string yang ingin dimaskkan
    scanf("%d", &n); // <-- Proses input user berupa angka bulat ke variabel n
    char str[n][201]; // <-- Buat Array dua dimensi untuk merepresentasikan Array of String dengan asumsi ada sebanyak n string yang dibuat
    // ========================================================================= //

    // Deklarasi variabel pembantu
    int i, j; // <-- Digunakan untuk keperluan iterasi 
    int max_str = 0; // <-- Digunakan untuk menyimpan panjang string terpanjang yang ada
    int max = 0; // <-- Digunakan untuk menympan nilai string terpanjang saat akan diprint

    //Algoritma utama untuk membuat pola string reverse rata kanan dan jika string saat ini lebih pendek dari string sebelumnya maka kasih enter
    // For di bawah ini digunakan untuk scanning string terpanjang
    for (i = 0; i < n; i++) // <-- Perulangan sebanyak n kali
    {
        scanf("%s", &str[i]); // <-- proses input string ke str[ke-i]

        // If di bawah digunakan untuk Scanning string mana yang terpanjang dan berapa panjangnya
        if (strlen(str[i]) > max_str) // <-- cek apakah panjang string ke-i lebih panjang dari max_str
        {
            // Jika ya, maka eksekusi blok kode ini
            max_str = strlen(str[i]); // <-- masukkan nilai panjang string str[ke-i] ke dalam max_str
        }
    }

    // For ini digunakan untuk Menampilkan ke layar string-string tadi sesuai dengan permintaan, yaitu Reverse dan rata kanan
    for (i = 0; i < n; i++)
    {
        // If ini digunakan untuk mengecek apakah string sekarang lebih panjang dari string sebelumnya
        if (strlen(str[i]) >= max) // <-- cek apakah panjang string str[ke-i] lebih besar atau sama denagn max
        {
            // Jika ya, maka eksekusi blok kode ini
            // For di bawah ini digunakan untuk menambahkan spasi bila string yang akan dikeluarkan lebih pendek dari string terpanjang dengan jumlah spasi adalah max_str - strlen(str[i])
            for (j = 0; j < max_str - strlen(str[i]); j++)  // <-- Perulangan sebanyak max_str dikurangi strlen(str[i])
            {
                printf(" "); // <-- Tampilkan karakter white space
            }
            
            // For ini digunakan untuk mecetak string ke-i secara reverse
            for (j = strlen(str[i])-1; j >= 0; j--) // <-- perulangan sebanyak strlen(str[i]) secara menurun
            {
                printf("%c", str[i][j]); // <-- cetak karakter string ke-i dan karakter ke-j
            }
            max = strlen(str[i]); // Karena str[i] >= max, maka ubah nilai max menjadi strlen(str[i])
        }
        else
        {
            // Blok kode ini digunakan untuk mereset variabel max menjadi 0, sehingga terjadilah enter kosong lalu dilanjut kembali ke blok kode di atas
            max = 0; // <-- ubah max menjadi 0
            i--; // <-- i dikurangi 1 agar pencetakan string tidak terlewat 1
        }

        printf("\n"); // <-- newline setiap pencetakan string dan enter
        
    }
    
    // Kembalikan nilai 0 jika program berjalan dengan sukses
    return 0;
}