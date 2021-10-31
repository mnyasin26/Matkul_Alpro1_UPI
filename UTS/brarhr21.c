/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal UTS nomor 2 (Berapa Hayo Jumlah Hurufnya)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

#include <stdio.h>

int main() {
    int n, m; // Deklarasi n sebagai panjang array penampung karakter, m sebagai panjang array penampung karakter yang ingin dicari
    int i, j; // Deklarasi i dan j untuk kebutuhan iterator
    int awal, akhir; // Deklarasi awal dan akhir sebagai parameter ruang atau wilayah array karakter berapa yang akan dicari

    scanf("%d", &n); // Meminta masukan user ke variabel n
    char karakter[n]; // Deklarasi array penampung karakter sepanjang n

    // For untuk memasukan input karakter ke setiap indeks array karakter
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &karakter[i]);
    }

    // Meminta masukan user ke variabel awal dan akhir
    scanf("%d", &awal);
    scanf("%d", &akhir);
    
    
    scanf("%d", &m); // Meminta masukan user ke variabel m
    char pencarian[m]; // Deklarasi array penampung karakter yang ingin dicari sepanjang m
    int hasil[m]; // Deklarasi array penampung berapa jumlah dari karakter yang dicari

    // For untuk merubah nilai setiap indeks menajdi 0 pada array hasil
    for (i = 0; i < m; i++)
    {
        hasil[i] = 0;
    }
    
    // For untuk memasukan input karakter yang ingin dicari
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &pencarian[i]);
    }

    // For untuk mencocokan setiap anggota array pencarian dengan array karakter, dengan batasan indeks awal indeks akhir sesuai masukan
    for (i = awal; i <= akhir; i++)
    {
        // For untuk mencacah setiap anggota array pencarian
        for (j = 0; j < m; j++)
        {
            // if untuk mengecek apakah nilai array pencarian pada indeks j(saat ini) sama dengan isi array karakter nilai indeks i(saat ini), lalukan terus menerus hingga semua anggota sudah dicek
            if (pencarian[j] == karakter[i])
            {
                hasil[j]++; // tambahkan 1 pada array hasil indeks ke j
            }
            
        }
        
    }

    // For untuk mencetak output hasil jumlah pencarian
    for (i = 0; i < m; i++)
    {
        printf("%d", hasil[i]);

        // If untuk meniadakan spasi di akhir output
        if(i < m-1) 
        {
            printf(" "); 
        }
        
    }

    // Jangan lupa selalu berikan new line pada setiap output
    printf("\n");

    return 0;
}