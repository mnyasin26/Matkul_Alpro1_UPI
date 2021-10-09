// Penulis: Muhamad Nur Yasin Amadudin (2100137)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// fungsi untuk mengubah char ke integer a-z dan spasi
int charToInt (char masukan) {
    // variabel penampung sementara
    int temp;

    // klasifikasikan interval karakter
    if (masukan >= 48 & masukan <= 57) 
    {
        temp = masukan - '0';
    } 
    else 
    {
        temp = 27;
    }
    // kembalikan nilai temp
    return temp;
}
int exponent(int masukan) {
    int temp = 1, i;

    for (i = 0; i < masukan; i++)
    {
        temp = temp * 2;
    }
    
    return temp;
}

// program utama
int main () {
    char masukan[1000], keluaran[1000];
    int i, x, j = 0;
    int temp[8], hasil;

    scanf("%s", &masukan);
    //printf("%s\n", masukan);
    //hasil = 0;
    
    
    for (i = 0; i < strlen(masukan)/8; i++)
    {
        hasil = 0;
        x = 7*(i+1)+i;
        for (j = 0; j < 8; j++)
        {
            if (charToInt(masukan[x]) != 0)
            {
                hasil = hasil + exponent(j);
                
            }
        
            //temp[j] = charToInt(masukan[x]);
            //printf("%c\n", masukan[x]);
            //printf("%d", temp[j]);
            x--;
        }

        //printf("ini adalah hasil perhitungan: %d\n", hasil);

        if (hasil == 27)
        {
            keluaran[i] = ' ';
        } else if (hasil <= 26 && hasil >= 1)
        {
            keluaran[i] = '`' + hasil;
        } else 
        {
            keluaran[i] = 0;
        }
        
    }
    
    printf("%s\n", keluaran);

    return 0;
}