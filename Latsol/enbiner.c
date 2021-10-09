// Penulis: Muhamad Nur Yasin Amadudin (2100137)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fungsi untuk mengubah char ke integer a-z dan spasi
int charToInt (char masukan) {
    // variabel penampung sementara
    int temp;

    // klasifikasikan interval karakter
    if (masukan <= 122 & masukan >= 97) 
    {
        temp = masukan - '`';
    } 
    else 
    {
        temp = 27;
    }
    // kembalikan nilai temp
    return temp;
}


// program utama
int main () {
    // deklarasi variabel masukan
    char masukan[100];

    // deklarasi varibel pemrosesan
    int i, j, temp, biner[8];

    // input masukan dari user berupa string dan spasi
    scanf("%[^\n]s", &masukan);
    
    /* algoritma untuk mengubah nilai integer ke bilangan biner dan langsung 
    dimunculkan ke layar */
    for (j = 0; j < strlen(masukan); j++)
    {
        temp = charToInt(masukan[j]);
        
        for (i = 0; i < 8; i++)
        {
            biner[i] = temp % 2;
            temp = temp / 2;
        }
        
        // menampilkan array biner[8] ke layar
        for (i = 7; i >= 0; i--)
        {
            printf("%d", biner[i]);
        }
        
    }
    printf("\n");
    return 0;
}