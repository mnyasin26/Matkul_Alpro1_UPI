/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Evaluasi ke-2 (Permainan Malam Tahun Baru)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Deklarasi Library untuk menggunakan fungsi/prosedur printf(), scanf(), dan strlen()
#include <stdio.h>
#include <string.h>

// Definisi tipe data terstruktur untuk menyimpan komponen yang diperlukan untuk menjalankan program
typedef struct
{
    char raw[201]; // <-- untuk menampung kalimat full bersama simbol '?'
    char depan[201]; // <-- untuk menampung kalimat sebelum '?'
    char belakang[201]; // <-- untuk menampung kalimat setelah '?'
    int anagram; // <-- jika nilainya 0, maka bukan anagram. Jika nilainya 1, maka anagram
} base;

int check(char depan[], char belakang[]); // <-- fungsi untuk cek kalimat sebelum dan sesudah '?' anagram atau tidak, dengan nilai kembalian 0 atau 1
int checkPolindrom(int time); // <-- fungsi untuk check apakah waktu yang sudah dalam bentuk detik merupakan angka palindrom atau bukan
int posisiHuruf(char huruf); // <-- fungsi yang mengembalikan nilai berupa urutan karakter dalam abjad yang dimasukkan dalam parameter
int charToAngka(char angka); // <-- fungsi untuk mengubah char dengan simbol angka menjadi nilai integer aslinya
int stringToInt(char clock[8]); // <-- fungsi untuk mengubah bentuk durasi "2:00:25" menjadi dalam bentuk detik

void output(int time); // <-- prosedur untuk menampilkan ke layar berupa "lanjut Nonton atau Tidur"