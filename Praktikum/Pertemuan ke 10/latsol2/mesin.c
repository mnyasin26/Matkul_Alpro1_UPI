// Deklarasi Pustaka
#include "header.h"

// Prosedur input struct
void inputStruct(int n, data dataMhs[]) {
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s", &dataMhs[i].nama);
        scanf("%d", &dataMhs[i].nilai);
    }
}

// fungsi hitung jumlah ASCII nama
int jumlahASC(data dataMhs) {
    int temp = 0;

    int i;
    for (i = 0; i < strlen(dataMhs.nama); i++)
    {
        temp += dataMhs.nama[i];
        //printf("Nilai temp: %d\n", temp);
    }
    
    return temp;
}

// Prosedur output
void output(int n, data dataMhs[]) {
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%s %c %d\n", dataMhs[i].nama, dataMhs[i].kelompok, dataMhs[i].jumlahASC);
    }
    
}

// Prosedur pengelompokan nilai
void pengelompokan(int n, data dataMhs[]) {
    int i;
    for (i = 0; i < n; i++)
    {
        if (dataMhs[i].nilai >= 86)
        {
            dataMhs[i].kelompok = 'A';
        }
        else if (dataMhs[i].nilai >= 71)
        {
            dataMhs[i].kelompok = 'B';
        }
        else if (dataMhs[i].nilai >= 56)
        {
            dataMhs[i].kelompok = 'C';
        }
        else if (dataMhs[i].nilai >= 41)
        {
            dataMhs[i].kelompok = 'D';
        }
        else if (dataMhs[i].nilai >= 26)
        {
            dataMhs[i].kelompok = 'E';
        }
        else
        {
            dataMhs[i].kelompok = 'F';
        }
        
    }
    
}

