/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal UAS (Suku Kata Array String)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor Pustaka header.h agar bisa menggunakan fungsi standar
#include "header.h"

// Program Utama
int main (){
    int n; // <-- Deklarasi variabel integer n untuk menampung nilai "berapa banyak string yang akan dimasukkan"
    scanf("%d", &n); // <-- Input masukkan user ke n

    char arr[n][101]; // <-- array of string dengan panjang n tiap string maks 100 karakter
    input (n, arr); // <-- Memanggil Prosedur input, untuk input string masukkan user

    char sukuKata[101]; // <-- string untuk menyimpan sukukata yang ingin dicari
    scanf("%s", &sukuKata); // <-- input masukkan user berupa suku kata lalu masukan ke sukuKata

    int jumlahSubkata = 0; // <-- inisialisasi jumlahSubkata dengan nilai 0 agar nilainya tidak random
    for (int i = 0; i < n; i++) // <-- looping for sebanyak n kali untuk proses pencarian suku kata pada string masukkan secara berurut dari awal
    {
        jumlahSubkata += subKata(n, arr[i], sukuKata); // <-- pemanggilan fungsi dengan parameter n, arr ke i, dan sukuKata subkata lalu nilainya masukkan ke jumlahSubkata
    }
    
    printf("%d\n", jumlahSubkata); // <-- tampilkan nilai jumlahSubkata
    
    return 0; // <-- kembalikan nilai 0 sebagai pertanda program berjalan lanjayyy
}