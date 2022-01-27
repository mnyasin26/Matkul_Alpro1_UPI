/*
Saya [Muhamad Nur Yasin Amadudin] [2100137] mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Impor Library
#include "header.h"

// Deklarasi variabel pembantu
int i; // <-- variabel i untuk keperluan iterasi
int position[5] = {0}; // <-- array posisi dengan inisiasi nilai 0 semua digunakan untuk menandalan posisi column sesaat, index 0 untuk baris 1, index 1 untuk baris 2 dan seterusnya

// fungsi yang mengembalikan nilai integer berupa panjang pola yang dibutuhkan secara horizontal per angka. Misal parameter bernilai 1, maka kembaliannya 1. Jika 2, maka 2. selain angka 1 dan 2 akan mengembalikan 3
// parameter int val sebagai masukan berupa 1 digit angka
int numLen(int val) {
    int temp; // <-- untuk menampung nilai sementara yang nantinya akan direturn

    if (val == 1) // Jika val = 1, maka temp = 1 (blok)
    {
        temp = 1;
    }
    else if (val == 3) // Jika val = 3, maka temp = 2 karena angka 3 hanya memerlukan lebar 2 blok saja agar dapat dibuat/dicetak
    {
        temp = 2;
    }
    else // Jika val bukan 1 dan 3, maka temp = 3 (blok)
    {
        temp = 3;
    }
    
    return temp; // <-- kembalikan nilai temp ke pemanggil
}

// fungsi yang mengembalikan nilai integer berupa satu digit angka berdasarkan urutan digitnya dari angka masukan. Misal 'a' = 97 urutan 1 (0) maka nilai kembaliannya adalah 9. Jika urutan 2 maka nilai kembaliannya adalah 7
// parameter char letter sebagai 1 huruf, int order sebagai urutan berapa yang akan dipisahkan
int numSplit(char letter, int order) {
    int temp; // <-- untuk menampung nilai sementara yang nantinya akan direturn

    // If di bawah ini untuk mengidentifikasi nilai ASCII dari letter apakah kurang atau lebih dari 100
    if (letter < 100)
    {
        // jika nilai letter kurang dari 100, maka cek order dengan switch di bawah
        switch (order)
        {
            case 0:
                // Jika order = 0 yang artinya adalah urutan ke-1, maka lakukan aritmatika di bawah ini
                temp = (letter-(letter%10))/10; // <-- misal ((97-(97 mod 10)) : 10) = ((97-(7)) : 10) = (90/10) = (9) lalu masukkan nilai 9 ke temp
            break;

            case 1:
                // Jika order = 1 yang artinya adalah urutan ke-2, maka lakukan aritmatika di bawah ini
                temp = letter%10; // <-- misal (97 mod 10) = (7)  lalu masukkan nilai 7 ke temp
            break;
        
            default:
                // Jika order bukan 0 dan 1 maka lakukan = nothing
            break;
        }
    }
    else
    {
        // jika nilai letter lebih dari 100, maka cek order dengan switch di bawah
        switch (order)
        {
            case 0:
                // Jika order = 0 yang artinya adalah urutan ke-1, maka lakukan aritmatika di bawah ini
                temp = 1; // <-- karena interval ASCII tidak mencapai > 199, maka langsung masukan 1 ke temp
            break;

            case 1:
                // Jika order = 1 yang artinya adalah urutan ke-2, maka lakukan aritmatika di bawah ini
                temp = ((letter-100)-(letter%10))/10; // <-- misal ((112-100)-(112 mod 10)) : 10) = ((12)-(2)) : 10) = ((10) : 10) = (1) lalu masukkan nilai 1 ke temp
            break;

            case 2:
                // Jika order = 2 yang artinya adalah urutan ke-3, maka lakukan aritmatika di bawah ini
                temp = letter%10; // <-- misal (112 mod 10) = (2)  lalu masukkan nilai 2 ke temp 
            break;
        
            default:
                // Jika order bukan 0 dan 1 maka lakukan = nothing
            break;
        }
    }

    return temp; // <-- kembalikan nilai temp ke pemanggil
}

// fungsi yang mengembalikan nilai integer berupa jumlah sel bernilai 0 di akhir baris setelah sel bernilai 1 untuk menanggulangi tercetaknya white space yang tidak dibutuhkan diakhir baris pola
// Parameter int column digunakan untuk akses posisi terakhir, int arrBlock[column] sebagai pass by reference karena merupakan array digunakan untuk mengakses sel pola akhir baris
int delLastBlock(int column, int arrBlock[column]) {
    int temp = 0; // <-- untuk menampung nilai sementara yang nantinya akan direturn
    column -= 1; // <-- column kurangi 1 agar sesuai dengan posisi index

    while (arrBlock[column--] != 1) // <-- jika selama mengakses baris pola column dari belakang/akhir bukan merupakan nilai 1, maka increment temp
    {
        temp++; // <-- tambah nilai 1 ke temp
    }

    return temp; // <-- kembalikan nilai temp ke pemanggil    
}

// <-- prosedur yang memproses huruf menjadi nilai ASCII nya lalu dirubah menjadi pola 0 dan 1 sesuai aturan yang akan disimpan ke array arrBlock
// Parameter char letter yaitu huruf yang akan dijadikan pola 0 dan 1
// parameter int column untuk inisiator int arrBlock[5][column] agar tidak error
// Parameter int arrBlock[5][column] untuk pass by reference array arrBlock di main
// Parameter last berguna untuk menentukan apakah huruf yang masuk merupakan huruf akhir atau bukan, jika akhir maka column tak perlu di tambah pola 2 spasi (dua 0)
void numToBlock(char letter, int column, int arrBlock[5][column], int last) {
    int temp;// <-- untuk menampung nilai sementara yang nantinya akan digunakan pada for loop

    // Jika letter/huruf kurang dari 100 maka temp = 2 (perulangan hanya 2 kali). Jika tidak, maka temp = 3 (perulangan hanya 3 kali)
    if (letter < 100)
    {
        temp = 2; // <-- temp = 2
    }
    else
    {
        temp = 3; // <-- temp = 3
    }

    // For di bawah ini untuk merubah huruf menjadi pola 0 dan 1, perulangan sebanyak nilai temp (sesuai banyaknya digit nilai ASCII huruf)
    for (i = 0; i < temp; i++)
    {
        // Switch yang mengecek nilai numSplit(letter, i), yaitu angka digit ke-i dari nilai ASCII letter/huruf
        switch (numSplit(letter, i))
        {
            case 0:
                // Jika ternyata angkanya adalah 0 maka polanya adalah:

                // baris ke-1 dan kolom ke-position[0] 3 langkah ke depan
                arrBlock[0][position[0]++] = 0; //
                arrBlock[0][position[0]++] = 1; // <-- (0, 1, 0) // akan terus di update hingga bawah
                arrBlock[0][position[0]++] = 0; //

                // If di bawah ini digunakan untuk memberi spasi kepada pola jika digit yang masuk bukanlah digit terakhir
                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0; // <-- (0, 1, 0, 0)
                }

                // baris ke-2 dan kolom ke-position[0] 3 langkah ke depan
                arrBlock[1][position[1]++] = 1; //
                arrBlock[1][position[1]++] = 0; // <-- (0, 1, 0, 0) 
                arrBlock[1][position[1]++] = 1; //     (1, 0, 1,)

                // If di bawah ini digunakan untuk memberi spasi kepada pola jika digit yang masuk bukanlah digit terakhir
                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0; // <-- (0, 1, 0, 0)
                }//                                        (1, 0, 1, 0)

                // baris ke-3 dan kolom ke-position[0] 3 langkah ke depan
                arrBlock[2][position[2]++] = 1; // <-- (0, 1, 0, 0) 
                arrBlock[2][position[2]++] = 0; //     (1, 0, 1, 0)
                arrBlock[2][position[2]++] = 1; //     (1, 0, 1)

                // If di bawah ini digunakan untuk memberi spasi kepada pola jika digit yang masuk bukanlah digit terakhir
                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0; // <-- (0, 1, 0, 0) 
                                                    //     (1, 0, 1, 0)
                                                    //     (1, 0, 1, 0)
                }

                // baris ke-3 dan kolom ke-position[0] 3 langkah ke depan
                arrBlock[3][position[3]++] = 1; // <-- (0, 1, 0, 0)
                arrBlock[3][position[3]++] = 0; //     (1, 0, 1, 0)
                arrBlock[3][position[3]++] = 1; //     (1, 0, 1, 0)
                                                //     (1, 0, 1)

                // If di bawah ini digunakan untuk memberi spasi kepada pola jika digit yang masuk bukanlah digit terakhir
                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0; // <-- (0, 1, 0, 0)
                                                    //     (1, 0, 1, 0)
                                                    //     (1, 0, 1, 0)
                                                    //     (1, 0, 1, 0)
                }

                // baris ke-3 dan kolom ke-position[0] 3 langkah ke depan
                arrBlock[4][position[4]++] = 0; // <-- (0, 1, 0, 0)
                arrBlock[4][position[4]++] = 1; //     (1, 0, 1, 0)
                arrBlock[4][position[4]++] = 0; //     (1, 0, 1, 0)
                                                //     (1, 0, 1, 0)
                                                //     (0, 1, 0)

                // If di bawah ini digunakan untuk memberi spasi kepada pola jika digit yang masuk bukanlah digit terakhir
                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0; // <-- (0, 1, 0, 0)
                                                    //     (1, 0, 1, 0)
                                                    //     (1, 0, 1, 0)
                                                    //     (1, 0, 1, 0)
                                                    //     (0, 1, 0, 0)
                }
            break;

            case 1:
                // Jika ternyata angkanya adalah 1 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya saja pada angka 1 hanya butuh column saja

                arrBlock[0][position[0]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 2:
                // Jika ternyata angkanya adalah 2 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada

                arrBlock[0][position[0]++] = 0;
                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 1;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;
                arrBlock[4][position[4]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 3:
                // Jika ternyata angkanya adalah 3 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada
                // *angka 3 hanya butuh 2 sel pola

                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 1;
                arrBlock[4][position[4]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 4:
                // Jika ternyata angkanya adalah 4 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada

                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;
                arrBlock[0][position[0]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 1;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 5:
                // Jika ternyata angkanya adalah 5 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada

                arrBlock[0][position[0]++] = 0;
                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 1;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;
                arrBlock[4][position[4]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 6:
                // Jika ternyata angkanya adalah 6 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada
                
                arrBlock[0][position[0]++] = 0;
                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 1;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 1;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;
                arrBlock[4][position[4]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 7:
                // Jika ternyata angkanya adalah 7 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada

                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 8:
                // Jika ternyata angkanya adalah 8 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada

                arrBlock[0][position[0]++] = 0;
                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 1;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 1;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;
                arrBlock[4][position[4]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;

            case 9:
                // Jika ternyata angkanya adalah 9 maka polanya adalah:
                // Pola pembentukan mirip dengan komentar angka 0 di atas, hanya berbeda dengan pola 0 dan 1 yang diinput ke arrBlock. Karena position terus bertambah maka pola yang telah diinput sebelumnya akan tetap ada
                
                arrBlock[0][position[0]++] = 0;
                arrBlock[0][position[0]++] = 1;
                arrBlock[0][position[0]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[0][position[0]++] = 0;
                }

                arrBlock[1][position[1]++] = 1;
                arrBlock[1][position[1]++] = 0;
                arrBlock[1][position[1]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[1][position[1]++] = 0;
                }

                arrBlock[2][position[2]++] = 0;
                arrBlock[2][position[2]++] = 1;
                arrBlock[2][position[2]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[2][position[2]++] = 0;
                }

                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 0;
                arrBlock[3][position[3]++] = 1;

                if (i != temp-1)
                {
                    arrBlock[3][position[3]++] = 0;
                }

                arrBlock[4][position[4]++] = 0;
                arrBlock[4][position[4]++] = 1;
                arrBlock[4][position[4]++] = 0;

                if (i != temp-1)
                {
                    arrBlock[4][position[4]++] = 0;
                }
            break;
        
            default:
            break;
        }
    }

    // Jika huruf yang ada di parameter bukanlah huruf terkahir maka tambahkan 2 spasi (dua angka 0) ke pola di dalam arrBlock tadi
    if (last != 1)
    {
        for (i = 0; i < 2; i++) // <-- perulangan sebanyak 2 kali karena merupakan pemisah (spasi) pergantian antara digit akhir nilai ASCII huruf sebelumnya ke digit pertama nilai ASCII huruf selanjutnya
        {
            arrBlock[0][position[0]++] = 0; // baris 1
            arrBlock[1][position[1]++] = 0; // baris 2
            arrBlock[2][position[2]++] = 0; // baris 3
            arrBlock[3][position[3]++] = 0; // baris 4
            arrBlock[4][position[4]++] = 0; // baris 5
        }
        
    }
    
}

// prosedur ini digunakan untuk mencetak keluaran pola berupa tampilan angka dengan huruf B ke layar
// parameter int type merupakan nilai 0 atau 1. dimana 0 adalah white space dan 1 adalah huruf 'B', asalah parameter ini adalah dari arrBlock
// parameter width adalah ketebalan yang diinginkan oleh user dalam mencetak pola angka 
void printBlock(int type, int width) {
    if (type == 0) // Cek nilai tipe 0 atau 1
    {
        // Jika 0, maka cetak ke layar berupa ' ' atau white space sebanyak width
        for (i = 0; i < width; i++)
        {
            printf(" "); // <-- cetak ' ' atau white space
        }
    }
    else
    {
        // Jika 1, maka cetak ke layar berupa 'B' atau huruf B sebanyak width
        for (i = 0; i < width; i++)
        {
            printf("B"); // <-- cetak 'B' atau huruf B
        }
    }
}
