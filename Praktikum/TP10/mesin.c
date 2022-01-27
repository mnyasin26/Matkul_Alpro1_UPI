/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP10 (Infinite Techi Story - The Impostor Among Us)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Pustaka pribadi
#include "header.h"

// Variabel global di dalam mesin.c
int i, j;
int temp = 0;
char a_z[26];
char A_Z[26];


// Prosedur untuk input x[i]
void inputInt(int n, int x[]) {
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
}

// Prosedur dekripsi kata
void dekripsi(int n, int x[], char str[], char kode[]) {
    if (strcmp(kode, "maju") == 0)
    {
        for (i = 0; i < n; i++)
        {
            if ((str[i] >= 97) && (str[i] <= 122))
            {
                str[i] = 97+(((str[i]-97)+x[i])%26);
            }
            else
            {
                str[i] = 65+(((str[i]-65)+x[i])%26);
            }
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if ((str[i] >= 97) && (str[i] <= 122))
            {
                str[i] = 97+(25-(((25-(str[i]-97))+x[i])%26));
            }
            else
            {
                str[i] = 65+(25-(((25-(str[i]-65))+x[i])%26));
            }

        }
    }
}

// Fungsi untuk mengenali PTR, ITS, dan BOB, mengambalikan nilai berupa int 1 = itheas, 2 = peter, 3, boba dan bobi
int identifikasi(int n, int m, char str[], char kode[]) {
    char strTemp[4];
    strTemp[3] = 0;
    int counter = 0;
    int temp = -1;
    if (strcmp(kode, "maju") == 0)
    {
        for (i = 0; i < n; i++)
        {
            strTemp[counter++] = str[i];
            i += m;
        }
    }
    else
    {
        for (i = n-1; i >= 0; i--)
        {
            strTemp[counter++] = str[i];
            i -= m;
        }
    }
    
    if ((strcmp(strTemp, "its") == 0) || (strcmp(strTemp, "ITS") == 0))
    {
        temp = 1;
    }
    else if ((strcmp(strTemp, "ptr") == 0) || (strcmp(strTemp, "PTR") == 0))
    {
        temp = 2;
    }
    else if ((strcmp(strTemp, "bob") == 0) || (strcmp(strTemp, "BOB") == 0))
    {
        temp = 3;
    }
    
    return temp;
}