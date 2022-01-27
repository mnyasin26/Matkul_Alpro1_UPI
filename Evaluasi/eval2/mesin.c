/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Evaluasi ke-2 (Permainan Malam Tahun Baru)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Deklrasi Pustaka Pribadi
#include "header.h"

// fungsi untuk mengubah char dengan simbol angka menjadi nilai integer aslinya
int charToAngka(char angka) {
    int temp;
    temp = angka-48; // <-- kurangi nilai char dengan 48 agar mendapatkan nilai asli integer
    return temp;
}

// fungsi untuk mengubah bentuk durasi "2:00:25" menjadi dalam bentuk detik
int stringToInt(char clock[8]) {
    int temp = 0;
    temp += charToAngka(clock[0])*60*60; // <-- durasi (detik) jam
    temp += (charToAngka(clock[2])*10*60) + (charToAngka(clock[3])*60); // <-- durasi (detik) Menit
    temp += (charToAngka(clock[5])*10) + (charToAngka(clock[6])); // <-- durasi (detik) Detik
    
    return temp;
}

// fungsi yang mengembalikan nilai berupa urutan karakter dalam abjad yang dimasukkan dalam parameter
int posisiHuruf(char huruf) {
    int temp;

    if (huruf >= 65 && huruf <= 90)
    {
        temp = huruf-64; // <-- jika huruf Kapital kurangi dengan 64 agar mendapat urutan abjadnya
    }
    else if (huruf >= 97 && huruf <= 122)
    {
        temp = huruf-96; // <-- jika huruf Kecil kurangi dengan 97 agar mendapat urutan abjadnya
    }
    else
    {
        temp = 0; // <-- jika bukan huruf abjad maka nilainya 0
    }
    
    return temp;
}

// fungsi untuk cek kalimat sebelum dan sesudah '?' anagram atau tidak, dengan nilai kembalian 0 atau 1
int check(char depan[], char belakang[]) {
    int temp, i;
    int tempDepan = 0;
    int tempBelakang = 0;
    for (i = 0; i < strlen(depan); i++)
    {
        tempDepan += posisiHuruf(depan[i]); // <-- jumlahkan urutan tidap karakter yang ada di string kalimat sebelum '?'
    }
    for (i = 0; i < strlen(belakang); i++)
    {
        tempBelakang += posisiHuruf(belakang[i]); // <-- jumlahkan urutan tidap karakter yang ada di string kalimat sesudah '?'
    }
    
    if (tempDepan == tempBelakang) // <-- bandingkan nilai jumlah urutannya, Jika sama, maka dapat dipastikan pasangan kalimat tersebut anagram, tentu berlaku sebaliknya
    {
        temp = 1; // <-- anagram
    }
    else
    {
        temp = 0; // <-- tidak anagram
    }
   
    return temp;
}

// fungsi untuk check apakah waktu yang sudah dalam bentuk detik merupakan angka palindrom atau bukan
int checkPolindrom(int time) {
    int temp;
    int n = time;
    int terbalik = 0;
    int sisa;

    /////////////////////////////////////////
    while (n != 0) {                        //
        sisa = n % 10;                      //
        terbalik = terbalik * 10 + sisa;    // <-- proses membalikkan urutan nilai 
        n /= 10;                            //
    }                                       //
    /////////////////////////////////////////
    
    if (time == terbalik) // <-- cek angka yang terbalik dengan yang tidak terbalik
    {
        temp = 1; // <-- palindrome!
    }
    else
    {
        temp = 0; // <-- bukan palindrome!!!
    }

    return temp;
}

// prosedur untuk menampilkan ke layar berupa "lanjut Nonton atau Tidur"
void output(int time) {
    if (checkPolindrom(time) == 1) // <-- cek apakah durasi dalam detik palindrom atau tidak
    {
        printf("\nLanjut Nonton\n"); // <-- Palindrom
    }
    else
    {
        printf("\nTidur\n"); // <-- Bukan palindrom
    }
}