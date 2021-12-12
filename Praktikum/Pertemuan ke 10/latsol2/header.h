// Deklarasi Pustaka yang akan digunakan pada main dan mesin
#include <stdio.h>
#include <string.h>

// Deklarasi Tipe Data Terstruktur agar dapat digunakan di semua file
typedef struct
{
    char nama[201];
    int nilai;
    char kelompok;
    int jumlahASC;
}data;

void inputStruct(int n, data dataMhs[]);
void pengelompokan(int n, data dataMhs[]);
int jumlahASC(data dataMhs);
void output(int n, data dataMhs[]);