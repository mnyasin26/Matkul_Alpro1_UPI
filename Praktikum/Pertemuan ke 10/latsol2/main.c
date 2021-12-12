// Deklarasi Pustaka
#include "header.h"

// Fungsi utama program
int main() {
    int n;
    scanf("%d", &n);
    data dataMhs[n];

    // Prosedur input struct
    inputStruct(n, dataMhs);

    // For loop untuk menjumlahkan ASCII dan Nilai
    int i;
    for (i = 0; i < n; i++)
    {
        dataMhs[i].jumlahASC = jumlahASC(dataMhs[i]); // fungsi jumlah ASCII nama
        dataMhs[i].jumlahASC += dataMhs[i].nilai;
    }
    
    // Prosedur pengelompokan nilai 
    pengelompokan(n, dataMhs);

    // Prosedur output
    output(n, dataMhs);
    
    return 0;
}