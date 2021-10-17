#include <stdio.h>
/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP3 (Pekerjaan Rumah Bobi 1)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/


int main() {

    // Deklarasi variabel
    int n;              // n menampung niali integer untuk ukuran alien
    char c;             // c menampung karakter berupa vokal atau konsonan
    int i, j, k = 1;    // i = iterator baris, j = iterator kolom, k = iterator spasi bentuk trapesium pemisah antena alien
    int x = 0;          // x untuk menampung nilai genap atau ganjil berutan dari bawah

    // Input User
    scanf(" %c", &c);
    scanf("%d", &n);

    
    // Algoritma Program
    if (((c == 'A') || (c == 'I') || (c == 'U') || (c == 'E') || (c == 'O')) || 
        ((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o'))) // Cek karakter c, apakah vokal atau bukan
    {
        // Jika c merupakan vokal, maka eksekusi blok kode ini dengan badan alien terdiri dari angka genap 0 - 8
        // jika c bukan merupakan vokal, maka eksekusi else setelah blok kode ini yaitu membuat badan alien yang terdiri dari angka ganjil 1 - 9

        // For primer yang pertama digunakan untuk membentuk bagian atas alien
        for (i = 1; i <= n; i++) // Tepat mengulang untuk baris sebanyak n
        {
            // For sekunder 1, membentuk spasi sebelum antena kiri alien
            for (j = 1; j <= i; j++) // mengulang sebanyak nilai i;
            {
                printf(" "); // spasi
            }

            // For sekunder 2, membentuk antena kiri alien
            for (j = 1; j <= i; j++) // mengulang sebanyak nilai i;
            {
                printf("%d", x); // angka genap 
            }

            // For sekunder 3, membentuk spasi antar antena kiri dan kanan alien
            for (j = (n*5) + (4*(n-1)); j >= k; j--) // mengulang dari sebanyak (n*5) + (4*(n-1)) menurun 4 perulangan tiap nilai i berubah
            {
                printf(" "); // spasi
            }

            k+=4; // iterator control untuk for sekunder 3

            // For sekunder 4, membentuk antena kanan alien
            for (j = 1; j <= i; j++) // mengulang sebanyak nilai i;
            {
                printf("%d", x); // angka genap
            }

            // Control Flow if untuk merubah nilai x (genap)
            if (x == 8) // Cek nilai x
            {
                // Jika nilai x == 8, maka ubah nilai x ke nilai 0
                x = 0;
            } 
            else 
            {
                // Jika nilai x != 8, maka tambah nilai 2 ke variabel x
                x += 2;
            }
            
            printf("\n"); // new line baris
            
        }

        // For primer yang kedua digunakan untuk membentuk bagian tengah alien
        for (i = 1; i <= n; i++) // Tepat mengulang untuk baris sebanyak n
        {
            // For sekunder 1, membentuk spasi sebelum bagian tengah alien
            for (j = n-1; j >= i; j--) // mengulang dari sebanyak nilai n-1, lalu menyesuaikan nilai i;
            {
                printf(" "); // spasi
            }

            // For sekunder 2, membentuk bagian kiri tengah alien berupa segitiga
            for (j = 1; j <= i; j++) // mengulang sesuai nilai i
            { 
                printf("%d", x); // angka genap
            } 

            // For sekunder 2, membentuk bagian mata kiri alien berupa persegi yang ada di atas kaki ke-1
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                // Control flow if untuk membentuk mata kiri alien
                if (i == 1 || i == n) // cek nilai i
                {
                    // i = 1 meurpakan awal baris
                    // i = n merupakan akhir baris

                    // jika i == 1 atau i == n, maka cetak angka genap
                    printf("%d", x); // angka genap
                } 
                else
                {
                    // Jika tidak, maka cetak spasi, dengan kata lain cetak spasi bila bukan awal baris atau akhir baris
                    printf(" "); // spasi
                }
            } 

            // For sekunder 3, membentuk bagian di atas antara kaki kiri yaitu kaki ke-1 dan kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 4, membentuk bagian di atas kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 5, membentuk bagian mata mulut alien berupa persegi yang ada di atas antara kaki ke-2 dan kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                // Control dlow if else if untuk membentuk mulut alien
                if (i != n-1) // cek nilai i
                {
                    // Jika i bukanlah baris ke-(n-1), cetak angka genap
                    printf("%d", x); // angka genap
                } 
                else if (i == 1)
                {
                    // Jika i adalah bari pertama, cetak angka genap
                    printf("%d", x); // angka genap
                } 
                else 
                {
                    // Jika i adalah baris ke-(n-1), cetak spasi
                    printf(" "); // spasi
                }
                
            }  

            // For sekunder 6, membentuk bagian di atas kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 7, membentuk bagian di atas antara kaki kanan yaitu kaki ke-3 dan kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 8, membentuk bagian mata kanan alien berupa persegi yang ada di atas kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                
                // Control flow if untuk membentuk mata kiri alien
                if (i == 1 || i == n)
                {
                    // i = 1 merupakan awal baris
                    // i = n merupakan akhir baris
                    
                    // jika i == 1 atau i == n, maka cetak angka genap
                    printf("%d", x); // ankga genap
                } 
                else
                {
                    // Jika tidak, maka cetak spasi, dengan kata lain cetak spasi bila bukan awal baris atau akhir baris
                    printf(" "); // spasi
                }
            } 

            // For sekunder 9, membentuk bagian kanan tengah alien berupa segitiga
            for (j = 1; j <= i; j++) // mengulang sesuai nilai i
            {
                printf("%d", x); // angka genap
            }


            // Control Flow if untuk merubah nilai x (genap)
            if (x == 8)
            {
                // Jika nilai x == 8, maka ubah nilai x ke nilai 0
                x = 0;
            } 
            else 
            {
                // Jika nilai x != 8, maka tambah nilai 2 ke variabel x
                x += 2;
            }

            printf("\n"); // new line baris
        }

        // For primer yang ketiga digunakan untuk membentuk bagian bawah alien
        for (i = 1; i <= n; i++) // Tepat mengulang sebanyak n
        {
            // For sekunder 1, membentuk spasi sebelum kaki ke-1
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-1
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 1, membentuk spasi sebelum kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 1, membentuk spasi sebelum kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka genap
            }

            // For sekunder 1, membentuk spasi sebelum kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // spasi
            }

            printf("\n");

            // Control Flow if untuk merubah nilai x (genap)
            if (x == 8)
            {
                // Jika nilai x == 8, maka ubah nilai x ke nilai 0
                x = 0;
            } 
            else 
            {
                // Jika nilai x != 8, maka tambah nilai 2 ke variabel x
                x += 2;
            }
        }
    }
    else
    {
        // *perbedaan blok ini hanyalah pada variabel x sebagai control angka ganjil
        x = 1; // x diubak ke angka 1

        // For primer yang pertama digunakan untuk membentuk bagian atas alien
        for (i = 1; i <= n; i++) // Tepat mengulang untuk baris sebanyak n
        {
            // For sekunder 1, membentuk spasi sebelum antena kiri alien
            for (j = 1; j <= i; j++) // mengulang sebanyak nilai i;
            {
                printf(" "); // spasi
            }

            // For sekunder 2, membentuk antena kiri alien
            for (j = 1; j <= i; j++) // mengulang sebanyak nilai i;
            {
                printf("%d", x); // angka ganjil 
            }

            // For sekunder 3, membentuk spasi antar antena kiri dan kanan alien
            for (j = (n*5) + (4*(n-1)); j >= k; j--) // mengulang dari sebanyak (n*5) + (4*(n-1)) menurun 4 perulangan tiap nilai i berubah
            {
                printf(" "); // spasi
            }

            k+=4; // iterator control untuk for sekunder 3

            // For sekunder 4, membentuk antena kanan alien
            for (j = 1; j <= i; j++) // mengulang sebanyak nilai i;
            {
                printf("%d", x); // angka ganjil
            }

            // Control Flow if untuk merubah nilai x (ganjil)
            if (x == 9) // Cek nilai x
            {
                // Jika nilai x == 9, maka ubah nilai x ke nilai 1
                x = 1;
            } 
            else 
            {
                // Jika nilai x != 9, maka tambah nilai 2 ke variabel x
                x += 2;
            }
            
            printf("\n"); // new line baris
            
        }

        // For primer yang kedua digunakan untuk membentuk bagian tengah alien
        for (i = 1; i <= n; i++) // Tepat mengulang untuk baris sebanyak n
        {
            // For sekunder 1, membentuk spasi sebelum bagian tengah alien
            for (j = n-1; j >= i; j--) // mengulang dari sebanyak nilai n-1, lalu menyesuaikan nilai i;
            {
                printf(" "); // spasi
            }

            // For sekunder 2, membentuk bagian kiri tengah alien berupa segitiga
            for (j = 1; j <= i; j++) // mengulang sesuai nilai i
            { 
                printf("%d", x); // angka ganjil
            } 

            // For sekunder 2, membentuk bagian mata kiri alien berupa persegi yang ada di atas kaki ke-1
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                // Control flow if untuk membentuk mata kiri alien
                if (i == 1 || i == n) // cek nilai i
                {
                    // i = 1 meurpakan awal baris
                    // i = n merupakan akhir baris

                    // jika i == 1 atau i == n, maka cetak angka ganjil
                    printf("%d", x); // angka ganjil
                } 
                else
                {
                    // Jika tidak, maka cetak spasi, dengan kata lain cetak spasi bila bukan awal baris atau akhir baris
                    printf(" "); // spasi
                }
            } 

            // For sekunder 3, membentuk bagian di atas antara kaki kiri yaitu kaki ke-1 dan kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 4, membentuk bagian di atas kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 5, membentuk bagian mata mulut alien berupa persegi yang ada di atas antara kaki ke-2 dan kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak nilai n
            {
                // Control dlow if else if untuk membentuk mulut alien
                if (i != n-1) // cek nilai i
                {
                    // Jika i bukanlah baris ke-(n-1), cetak angka ganjil
                    printf("%d", x); // angka ganjil
                } 
                else if (i == 1)
                {
                    // Jika i adalah bari pertama, cetak angka ganjil
                    printf("%d", x); // angka ganjil
                } 
                else 
                {
                    // Jika i adalah baris ke-(n-1), cetak spasi
                    printf(" "); // spasi
                }
                
            }  

            // For sekunder 6, membentuk bagian di atas kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 7, membentuk bagian di atas antara kaki kanan yaitu kaki ke-3 dan kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 8, membentuk bagian mata kanan alien berupa persegi yang ada di atas kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                
                // Control flow if untuk membentuk mata kiri alien
                if (i == 1 || i == n)
                {
                    // i = 1 merupakan awal baris
                    // i = n merupakan akhir baris
                    
                    // jika i == 1 atau i == n, maka cetak angka ganjil
                    printf("%d", x); // ankga ganjil
                } 
                else
                {
                    // Jika tidak, maka cetak spasi, dengan kata lain cetak spasi bila bukan awal baris atau akhir baris
                    printf(" "); // spasi
                }
            } 

            // For sekunder 9, membentuk bagian kanan tengah alien berupa segitiga
            for (j = 1; j <= i; j++) // mengulang sesuai nilai i
            {
                printf("%d", x); // angka ganjil
            }


            // Control Flow if untuk merubah nilai x (ganjil)
            if (x == 9)
            {
                // Jika nilai x == 9, maka ubah nilai x ke nilai 1
                x = 1;
            } 
            else 
            {
                // Jika nilai x != 9, maka tambah nilai 2 ke variabel x
                x += 2;
            }

            printf("\n"); // new line baris
        }

        // For primer yang ketiga digunakan untuk membentuk bagian bawah alien
        for (i = 1; i <= n; i++) // Tepat mengulang sebanyak n
        {
            // For sekunder 1, membentuk spasi sebelum kaki ke-1
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-1
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 1, membentuk spasi sebelum kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-2
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 1, membentuk spasi sebelum kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-3
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // angka ganjil
            }

            // For sekunder 1, membentuk spasi sebelum kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf(" "); // spasi
            }

            // For sekunder 1, membentuk kaki ke-4
            for (j = 1; j <= n; j++) // mengulang sebanyak n
            {
                printf("%d", x); // spasi
            }

            printf("\n");

            // Control Flow if untuk merubah nilai x (ganjil)
            if (x == 9)
            {
                // Jika nilai x == 9, maka ubah nilai x ke nilai 1
                x = 1;
            } 
            else 
            {
                // Jika nilai x != 9, maka tambah nilai 2 ke variabel x
                x += 2;
            }
        }

        
    }

    // Jika program sukses kembalikan nilai 0
    return 0;
}