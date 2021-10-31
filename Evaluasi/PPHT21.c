/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Evaluasi (Pola Patah Hati Techi)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

#include <stdio.h>

        /*
        3
        sky
        7

         sssss   kykyk                  Bagian 1
________sssssss kykykyk_________________//
        ssssss  kykykyk                 Bagian 2
         ssssss  kykyk                  //
          ssss  kykyk                   //
           ssss  kyk                    //
            ss  kyk                     //  
             ss  k                      //
                k                       //
               k                        //


        */


int main(){
    int m, n; // Deklarasi m untuk menampung nilai panjang array kata, dan n untuk ukuran pola yang akan dibuat
    int i, j; // Deklarasi i, j untuk keperluan iterasi
    int x = 0, y = 0; // Deklarasi x untuk mengatur alur selang seling zig zag pada tengah gambar patah hati yang kiri, y-nya untuk yang kanan
    int p = 0, q = 0; // Deklarasi p dan q sebagai memori untuk menyimpan posisi huruf yang dikeluarkan
    int hasilbagi = 0; // Deklarasi hasilbagi untuk menampung nilai pajang array kata untuk bagian hati kiri yaitu m/2

    int puluhan, //Deklarasi puluhan untuk menampung nilai puluhan ke berapa, apakah 20 puluhan atau 30 puluhan dan seterusnya
        temp = 1, temp2 = 0; // Deklarasi variabel temp untuk mengontrol zig zag
    
    
    // meminta masukan ke m lalu deklarasikan array penampung kata
    scanf("%d", &m);
    char kata[m];

    
    // gunakan for untuk memasukan karakter secara berurutan ke array kata
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &kata[i]);
    }

    hasilbagi = m/2; // panjang kata kiri
    char kiri[hasilbagi]; // Deklarasi kata kiri dengan rumus panjang array masukan kata dibagi 2, diambil angka depannya saja
    char kanan[m-hasilbagi]; // Deklarasi kata kanan yaitu sisa dari m - arrray kata kiri

    // Pisahkan setengah bagian kiri kata, ke array kiri
    for (i = 0; i < hasilbagi; i++)
    {
        kiri[i] = kata[i];
    }

    // Pisahkan setengah bagian kanan kata, ke array kanan
    for (i = hasilbagi; i < m; i++)
    {
        kanan[i-hasilbagi] = kata[i];
    }
    
    // Meminta masukan n untuk besar pola
    scanf("%d", &n);
    
    // Hitung n/10 untuk mengecek berada pada posisi manakah puluhan saat ini beradaa
    puluhan = n/10;
    

// Algortima
//----------------------------------------------------------------------------------------------------------------------

    // For primer ke-1, membentuk bagian 1
    for ( i = 0; i < puluhan+2; i++)
    {
        // For sekunder 1, membentuk spasi segitiga di paling kiri
        for (j = i; j < puluhan+1; j++) // Mengulang sesuai nilai i sampai puluhan+1
        {
            // If ini digunakan untuk mengantisipasi spasi yang tidak diperlukan jika masukan n <= 2
            if (n <= 2)// cek apakah n <= 2
            {
                
            } 
            else 
            {
                printf(" ");
            }
            
            
        }

        // For sekunder 2, membentuk trapesium kata, pinggir kanan segitiga spasi tadi
        for (j = 0; j <= ((i*2) + (n-((puluhan+2)*2))+1); j++) // agar tebentuk trapesium
        {
            // Code untuk menampilkan karakter dari awal kata kiri hingga habis lalu ulangi, jika baris baru maka akan terulang dari awal kata kiri lagi dengan menggunakan variabel reset di line ke-159
            printf("%c", kiri[p++]);
            if (p == (m/2))
            {
                p = 0;
            }
            
        }

        // For sekunder 3, membentuk Spasi antara trapesium
        for (j = i; j < puluhan+2; j++) // Mengulang sesuai nilai i sampai puluhan+2
        {
            // If ini digunakan untuk mengantisipasi spasi yang tidak diperlukan jika masukan n <= 2
            if (n <= 2)
            {
                
            } 
            else 
            {
                printf(" ");
            }
        }

        for (j = i; j < puluhan+1; j++)
        {
            // If ini digunakan untuk mengantisipasi spasi yang tidak diperlukan jika masukan n <= 2
            if (n <= 2)
            {
                
            } 
            else 
            {
                printf(" ");
            }
        }

        for (j = 0; j <= ((i*2) + (n-((puluhan+2)*2))+1); j++)
        {
            // Code untuk menampilkan karakter dari awal kata kanan hingga habis lalu ulangi, jika baris baru maka akan terulang dari awal kata kanan lagi dengan menggunakan variabel reset di line ke-160
            printf("%c", kanan[q++]);
            if (q == m-hasilbagi)
            {
                q = 0;
            }
        }

        // If ini digunakan untuk mengantisipasi new line yang tidak diperlukan jika masukan n <= 2
        if (n <= 2 && i == 0)
        {
            
        } 
        else 
        {
            printf("\n");
        }

        
        
        p = 0; // reset posisi kata kiri menuju baris baru
        q = 0; // reset posisi kata kanan menuju baris baru
    }

    // For primer ke-2, membentuk bagian 2
    for ( i = 0; i < n+1; i++) // jumlah baris
    {

        // For sekunder 1, membentuk spasi kiri bagian 2
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        // For primer sekunder 2, membentuk bagian hati kiri di bagian 2
        for (j = 0; j < n-(temp); j++)
        {
            // Code untuk menampilkan karakter dari awal kata kiri hingga habis lalu ulangi, jika baris baru maka akan terulang dari awal kata kiri lagi dengan menggunakan variabel reset di line ke-159
            printf("%c", kiri[p++]);
            if (p == (m/2))
            {
                p = 0;
            }
        }

        // If ini digunakan untuk mengontrol spasi bagian ujung bawah hati agar tidak tercetak setelah karakter
        if (n%2 == 0)
        {
            // For sekunder 3, membetuk spasi constant sebanyak 2, pada tengah tengah hati di bagian 2
            for (j = 0; j < 2; j++)
            {
                // If ini memastikan agar tidak tercetak spasi setelah karakter di ujung hati bawah jika masukan n adalah genap
                if ((i == n) || (i == n-1))
                {
                    
                } 
                else
                {
                    printf(" ");
                }
                
            }
        }
        else
        {
            // For sekunder 3, membetuk spasi constant sebanyak 2, pada tengah tengah hati di bagian 2
            for (j = 0; j < 2; j++)
            {
                // If ini memastikan agar tidak tercetak spasi setelah karakter di ujung hati bawah jika masukan n adalah ganjil
                if ((i == n))
                {
                    
                } 
                else
                {
                    printf(" ");
                }
                
            }
        }
        
        // 3 if dibawah ini digunakan untuk mengontrol bentuk hati agar sesuai zig-zagnya
        if (i == 1)
        {
            y = 2;
        }
        if (i == n)
        {
            y = 1;
        }
        if (y == 2)
        {
            y = 0;
            temp2 += 2;
        }
        
        // For sekunder 4, membentuk bagian hati kanan di bagian 2
        for (j = 0; j < n-(temp2); j++)
        {
            // Code untuk menampilkan karakter dari awal kata kanan hingga habis lalu ulangi, jika baris baru maka akan terulang dari awal kata kanan lagi dengan menggunakan variabel reset di line ke-160
            printf("%c", kanan[q++]);
            if (q == m-hasilbagi)
            {
                q = 0;
            }
        }

        // code code dibawah ini digunakan untuk mengontrol bentuk hati agar sesuai zig-zagnya
        y++; // untuk zigzag kanan
        x++; // untuk zigzag kiri
        if (i == n-1)
        {
            x = 1;
        }
        if (x == 2)
        {
            x = 0;
            temp += 2;
        }

        printf("\n");
        
        p = 0;
        q = 0;
    }
    
    // Kembalikan nilai 0 jika perogram sukses.
    return 0;
   
}