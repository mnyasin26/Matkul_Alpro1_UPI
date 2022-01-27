/*
Saya [Muhamad Nur Yasin Amadudin] [2100137] mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah 
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak 
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Impor Library
#include <stdio.h>
#include <string.h>

// Deklarasi Fungsi Buatan
int numLen(int val); // <-- fungsi yang mengembalikan nilai integer berupa panjang pola yang dibutuhkan secara horizontal per angka. Misal parameter bernilai 1, maka kembaliannya 1. Jika 3, maka 2. selain angka 1 dan 3 akan mengembalikan 3
int numSplit(char str, int order); // <-- fungsi yang mengembalikan nilai integer berupa satu digit angka berdasarkan urutan digitnya dari angka masukan. Misal 'a' = 97 urutan 1 (0) maka nilai kembaliannya adalah 9. Jika urutan 2 maka nilai kembaliannya adalah 7
int delLastBlock(int column, int arrBlock[column]); // <-- fungsi yang mengembalikan nilai integer berupa jumlah sel bernilai 0 di akhir baris setelah sel bernilai 1 untuk menanggulangi tercetaknya white space yang tidak dibutuhkan diakhir baris pola

// Deklarasi Prosedur Buatan
void numToBlock(char letter, int column, int arrBlock[5][column], int last); // <-- prosedur yang memproses huruf menjadi nilai ASCII nya lalu dirubah menjadi pola 0 dan 1 sesuai aturan yang akan disimpan ke array arrBlock
void printBlock(int type, int width); // <-- prosedur ini digunakan untuk mencetak keluaran pola berupa tampilan angka dengan huruf B ke layar
