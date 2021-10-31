/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal UTS nomor 1 (Pola Piringan Bintang)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

#include <stdio.h>

int main() {
    int n; // Deklarasi n untuk menampung nilai masukan berupa integer yang akan mempengaruhi pola bintang
    int i, j; // Deklarasi variabel i dan j untuk keperluan iterator sintaks for

    scanf("%d", &n); // Meminta masukan user untuk variabel n

    /* *Pola bintang dibagi menjadi 5 bagian yang akan dibentuk oleh 5 For Primer
                 *                  Bagian 1 (line 18 - 19)
________________**__________________//
         *    **       *    *       Bagian 2 (line 20 - 21)
________**____**______**___***______//
      **    ******  **    *****     Bagian 3 (line 22 - 23)
______**____******__**____*****_____//
        **    **      **   ***      Bagian 4 (line 24 - 25)
_________*____**_______*____*_______//
                **                  Bagian 5 (line 26 - 27)
_________________*__________________//
      
    */

    // For primer ke-1, untuk membentuk Bagian 1
    for (i = 0; i < n; i++) // mengulang sebanyak n, sebagai baris
    {
        // For sekunder 1, membentuk spasi di samping kiri sebelum pola bintang segitiga di bagian 1
        for (j = 0; j < n*5; j++)
        {
            printf(" ");
        }

        // For sekunder 2, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = i; j < n-1; j++)
        {
            printf(" ");
        }

        // For sekunder 3, membentuk bintang segitiga
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        
        // New line untuk baris baru
        printf("\n");
    }

    // For primer ke-2, untuk membentuk Bagian 2
    for (i = 0; i < n; i++)
    {
        
        // For sekunder 1, membentuk spasi sebelum pola bintang pertama pada Bagian 2
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }

        // For sekunder 2, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = i; j < n-1; j++)
        {
            printf(" ");
        }

        // For sekunder 3, membentuk pola bintang pertama berbentuk segitiga
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        // For sekunder 4, membentuk spasi di antara pola bintang pertama dan kedua
        for (j = 0; j < n*2; j++)
        {
            printf(" ");
        }

        // For sekunder 5, membentuk pola bintang kedua yangitu persegi
        for (j = 0; j < n; j++)
        {
            printf("*");
        }

        // For sekunder 6, membentuk spasi antara pola bintang kedua dengan pola bintang ketiga
        for (j = 0; j < n*3; j++)
        {
            printf(" ");
        }

        // For sekunder 7, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = i; j < n-1; j++)
        {
            printf(" ");
        }

        // For sekunder 8, membentuk pola bintang ketiga yaitu segitiga
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }

        // For sekunder 9, membentuk spasi antara pola bintang ketiga dan keempat
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }

        // For sekunder 10, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        // For sekunder 11, membentuk segitiga menurun
        for (j = 0; j <= i*2; j++)
        {
            printf("*");
        }
        
        // New line untuk baris baru
        printf("\n");
    }

    // For primer ke-3, untuk membentuk Bagian 3
    for (i = 0; i < n; i++)
    {
        // For sekunder 1, membentuk pola bintang pertama yaitu persegi
        for (j = 0; j < n; j++)
        {
            printf("*");
        } 

        // For sekunder 2, membentuk spasi antar pola bintang pertama dengan pola bintang kedua
        for (j = 0; j < n*2; j++)
        {
            printf(" ");
        }

        // For sekunder 3, membentuk pola bintang kedua yaitu persegi
        for (j = 0; j < n*3; j++)
        {
            printf("*");
        }

        // For sekunder 4, membentuk spasi antara pola bintang kedua denga pola bintang ketiga
        for (j = 0; j < n; j++)
        {
            printf(" ");
        } 

        // For sekunder 5, membentuk pola bintang ketiga yaitu persegi
        for (j = 0; j < n; j++)
        {
            printf("*");
        } 

        // For sekunder 6, membentuk spasi antara pola bintang ketiga dengan pola bintang keempat
        for (j = 0; j < n*2; j++)
        {
            printf(" ");
        } 

        // For sekunder 9, membentuk pola bintang keempat yaitu persegi
        for (j = 0; j <= n*2; j++)
        {
            printf("*");
        } 
        
        printf("\n");
    }
    
    // For primer ke-4, untuk membentuk Bagian 4
    for (i = 0; i < n; i++)
    {
        // For sekunder 1, membentuk spasi sebelum pola bintang pertama pada Bagian 4
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }

        // For sekunder 2, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        // For sekunder 3, membentuk pola bintang pertama berbentuk segitiga
        for (j = i; j < n; j++)
        {
            printf("*");
        }

        // For sekunder 4, membentuk spasi di antara pola bintang pertama dan kedua
        for (j = 0; j < n*2; j++)
        {
            printf(" ");
        }

        // For sekunder 5, membentuk pola bintang kedua yangitu persegi
        for (j = 0; j < n; j++)
        {
            printf("*");
        }

        // For sekunder 6, membentuk spasi antara pola bintang kedua dengan pola bintang ketiga
        for (j = 0; j < n*3; j++)
        {
            printf(" ");
        }

        // For sekunder 7, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        // For sekunder 8, membentuk pola bintang ketiga yaitu segitiga
        for (j = i; j < n; j++)
        {
            printf("*");
        }

        // For sekunder 9, membentuk spasi antara pola bintang ketiga dan keempat
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }

        // For sekunder 10, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }

        // For sekunder 11, membentuk segitiga menurun bagian kiri
        for (j = i+1; j <= n; j++)
        {
            printf("*");
        }

        // For sekunder 12, membentuk segitiga menurun bagian kanan
        for (j = i+1; j < n; j++)
        {
            printf("*");
        }
        
        // New line untuk baris baru
        printf("\n");
    }

    // For primer ke-5, untuk membentuk Bagian 5
    for (i = 0; i < n; i++)
    {
        // For sekunder 1, membentuk spasi di samping kiri sebelum pola bintang segitiga di bagian 1
        for (j = 0; j < n*5; j++)
        {
            printf(" ");
        }

        // For sekunder 2, membentuk spasi yang jika digabungkan dengan bintang segitiga akan membentuk persegi
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        // For sekunder 3, membentuk bintang segitiga
        for (j = i; j < n; j++)
        {
            printf("*");
        }
        
        // New line untuk baris baru
        printf("\n");
    }

    return 0;
    
}