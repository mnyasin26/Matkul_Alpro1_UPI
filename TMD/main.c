/*
Saya [Muhamad Nur Yasin Amadudin] [2100137] mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Impor Library
#include "header.h"

// 
int main() {
    // Deklarasi awal untuk variabel yang dibutuhkan
    int i, j, k,    // <-- variabel untuk kebutuhan iterasi
        width,      // <-- Variabel untuk menyimpan nilai ketebalan angka yang akan dicetak dari user. Contoh: 2
        column = 0, // <-- Variabel untuk menyimpan panjang output yang harus dicetak secara horizontal
        last = 0;   // <-- Variabel untuk memberi tanda akhir atau bukan. 0 = false, 1 = true

    char str[101];  // <-- Array of Char untuk menyimpan masukan user berupa string. Contoh: "aku"

    scanf("%s", &str);  // <-- Input masukan user berupa string lalu disimpan ke str
    scanf("%d", &width);// <-- Input masukan user berupa integer lalu disimpan ke width

    int strLen = strlen(str); // <-- masukan nilai panjang string masukan user ke variabel strLen

    // For di bawah ini digunakan untuk menghitung panjang column berdasarkan masukan string yang dilihat dari nilai ASCII
    // Use Case: "aku" nilai ASCIInya adalah 97 107 117. sesuai aturan soal maka kurang lebih panjang column haruslah bernilai 27
    /*
    Visual:
    1 2 3 4 5 6 7 8 9 1011121314151617181920212223242526(27) <-- 27 blok 
      BB    BBBB      BB    BB    BBBB      BB  BB  BBBB
      BB    BBBB      BB    BB    BBBB      BB  BB  BBBB
    BB  BB      BB    BB  BB  BB      BB    BB  BB      BB
    BB  BB      BB    BB  BB  BB      BB    BB  BB      BB
      BB        BB    BB  BB  BB      BB    BB  BB      BB
      BB        BB    BB  BB  BB      BB    BB  BB      BB
        BB      BB    BB  BB  BB      BB    BB  BB      BB
        BB      BB    BB  BB  BB      BB    BB  BB      BB
      BB        BB    BB    BB        BB    BB  BB      BB
      BB        BB    BB    BB        BB    BB  BB      BB
    */
    for (i = 0; i < strLen; i++) // <-- Perulangan sebanyak panjang string masukan
    {
        if (str[i] < 100) 
        {
            // Jika nilai ASCII satu karakter ke-i kurang dari 100, for dibawah hanya sebanyak 2 kali (sesuai digit nilai ASCII)
            for (j = 0; j < 2; j++)
            {
                column += numLen(numSplit(str[i], j));
                // ^-------------------------------------- column ditambah dengan nilai fungsi numLen
                //          ^----------------------------- memanggil fungsi numLen dengan parameter fungsi numSplit untuk menghitung jumlah column per angka yang dimasukkan, misal 9 maka column akan bertambah 3, misal 1 maka column akan bertambah 1
                //                   ^-------------------- memanggil fungsi numSplit dengan paramameter karakter ke-i serta iterasi ke-j untuk memisahkan angka lebih dari satu digit menjadi satu digit

                // If di bawah digunakan untuk menambah satu spasi (satu nilai) ke column jika angka bukan digit terakhir (j bukan 1)
                if (j != 1)
                {
                    column++; // <-- tambah 1 ke variabel column
                }
            }
        }
        else
        {
            // Jika nilai ASCII satu karakter ke-i kurang dari 100, for dibawah hanya sebanyak 3 kali (sesuai digit nilai ASCII)
            for (j = 0; j < 3; j++)
            {
                column += numLen(numSplit(str[i], j));
                // ^-------------------------------------- column ditambah dengan nilai fungsi numLen
                //          ^----------------------------- memanggil fungsi numLen dengan parameter fungsi numSplit untuk menghitung jumlah column per angka yang dimasukkan, misal 9 maka column akan bertambah 3, misal 1 maka column akan bertambah 1
                //                   ^-------------------- memanggil fungsi numSplit dengan paramameter karakter ke-i serta iterasi ke-j untuk memisahkan angka lebih dari satu digit menjadi satu digit

                // If di bawah digunakan untuk menambah satu spasi (satu nilai) ke column jika angka bukan digit terakhir (j bukan 2)
                if (j != 2)
                {
                    column++; // <-- tambah 1 ke variabel column
                }
            }
        }

        // If di bawah digunakan untuk menambah dua spasi (dua nilai) ke column jika angka berganti dari satu karakter ke karakter yang lain dan karakter tersebut bukanl;ah karakter terakhir (i bukan strLen-1)
        if (i != strLen-1)
        {
            column += 2; // <-- tambah 2 ke variabel column
        }
        
    }
    
    int arrBlock[5][column]; // <-- Deklarasi array of integer 2 dimensi (5 x column) untuk merepresentasikan visual angka ke layar. misal pada satu sel bernilai 0 maka sel tersebut akan diidentifikasi untuk mencetak white space, sementara jika bernilai 1 maka akan diidentifikasi untuk mencetak huruf 'B'
    /* Visual:
    a = 97
       [1] [2] [3] [4] [5] [6] [7]    (Hasil Cetak Ketebalan 1)           (Hasil Cetak Ketebalan 2)
    [1] 0  (1)  0   0  (1) (1)  0               B  BB                             BB    BBBB
    [2](1)  0  (1)  0   0   0  (1)             B B   B                            BB    BBBB
    [3] 0  (1)  0   0   0   0  (1)   -->        B    B                          BB  BB      BB
    [4] 0   0  (1)  0   0   0  (1)               B   B                          BB  BB      BB
    [5] 0  (1)  0   0   0   0  (1)              B    B                            BB        BB
                                                                                  BB        BB
                                                                                    BB      BB
                                                                                    BB      BB
                                                                                  BB        BB
                                                                                  BB        BB
    */

    // For di bawah digunakan untuk mengkonversi tiap nilai angka ASCII menjadi pola 0 dan 1 sesuai aturan pola di soal lalu disimpan pada arrBlock
    for (i = 0; i < strLen; i++)
    {
        // If di bawah digunakan untuk identifikasi apakah huruf yang dimasukkan ke dalam parameter numToBlock huruf terakhir atau bukan
        if (i == strLen-1)
        {
            last = 1; // <-- 1 berarti huruf terakhir = True
        }
        numToBlock(str[i], column, arrBlock, last); // Memanggil prosedur numToBlock dengan parameter huruf ke-i, nilai column, array arrblock, dan status huruf akhir atau bukan
    }
    
    // For di bawah ini digunakan untuk mencetak hasil pola yang ada di dalam arrBlock menjadi tampilan white space atau huruf B sesusai ketebalan masukan user
    for (i = 0; i < 5; i++) // <-- perulangan sebanyak 5 (baris)
    {
        for (j = 0; j < width; j++) // <-- perulangan sebanyak ketebalan masukan user (berupa baris)
        {
            for (k = 0; k < column-delLastBlock(column, arrBlock[i]); k++) // perulangan sebanyak column dikurangi jumlah sel yang bernilai 0 diakhir baris pola
            {   //                      ^------------------------------------ memanggil fungsi delLastBlock yang mengembalikan nilai jumlah sel 0 yang tidak perlu dicetak di akhir setiap baris pola
                // Pada perulangan ini didesain agar mencetak baris pertama dahulu lalu kedua, ketiga, keempat, dan kelima.
                printBlock(arrBlock[i][k], width); // <-- memanggil prosedur printBlock untuk mencetak white space dan huruf B sesuai nilai 0 atau 1 di baris array ke-i dan kolom ke-k arrblock.        
            }
            printf("\n"); // <-- new line untuk mencetak baris baru
        }
    }
    
    // Mengembalikan nilai 0 jika program berjalan sukses
    return 0;
}
