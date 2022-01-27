/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal UAS (Suku Kata Array String)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor Pustaka Standar
#include <stdio.h> // <-- fungsi printf() dan scanf()
#include <string.h> // <-- fungsi strlen() dan strcmp()


void input(int n, char arr[n][101]); // <-- deklarasi prosedur input untuk menginput string
// Parameter n sebagai pengontrol for di dalam prosesdur
// Parameter arr[n][101] untuk identitas masukkan arr di dalam prosedur tersebut

int subKata(int n, char arr[], char sukuKata[]); // deklarasi fungsi integer untuk menghitung jumlah suku kata dalam string
// Parameter n sebagai pengontrol for di dalam fungsi
// Parameter arr[] untuk menampung string yang akan dicek suku katanya
// Parameter sukuKata[] sebagai suku kata yang nanti akan dicocokkan dengan string
