/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP6 (Stok Barang)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/
#include <stdio.h>

// Deklarasi tipe data terstruktur bernama stok_brg untuk menampung nilai komponen dari suatu jenis barang
typedef struct
{
    char c; // Komponen Kode barang
    char m[200]; // Komponen Nama Barang
    int b[8]; // Komponen biner yang menunjukkan banyaknya stok barang bila di konversi ke desimal
    int nilai_desimal; // Komponen untuk menyimpan nilai desimal dari kode biner
    int nilai_dikurangi; // Komponen untuk menyimpan nilai stok barang yang telah dikurangi dari pengambilan

    char a; // Komponen untuk menyimpan karakter yang akan dikurangi
    int x; // Komponen untuk menyimpan jumlah barang yang diambil

    int strlen; // Komponen untuk menyimpan panjang array Nama barang
}stok_brg;


int main() {
    int n; // Variabel untuk menampung jumlah barang yang diinginkan
    scanf("%d", &n); // Menerima input integer dan disimpan ke variabel n

    stok_brg barang_ke[n]; // Deklarasi Array of stok_brg sepanjang n

    int i, j, k; char temp; int pangkat2; int hasil_bagi; // Variabel pembantu dalam Algortima di bawah ini
    for (i = 0; i < n; i++) // Perulangan sebanyak n kali
    {
        scanf(" %c", &temp); // Input karakter pertama lalu simpan ke temp
        barang_ke[i].c = temp; // Masukkan temp ke komonen kode barang di index ke-i Array of stok_brg
        
        j = 0; // iterator pembantu
        while (temp != ';')
        {
            scanf(" %c", &temp);
            barang_ke[i].m[j++] = temp;
        }

        barang_ke[i].strlen = j-1;

        for (j = 0; j < 8; j++)
        {
            scanf("%d", &barang_ke[i].b[j]);
        }

        barang_ke[i].nilai_desimal = 0;
        for (j = 7; j >= 0; j--)
        {
            if (barang_ke[i].b[j] == 1)
            {
                pangkat2 = 1;
                for (k = 1; k < 8-j; k++)
                {
                    
                    pangkat2 = pangkat2*2;
                }
                barang_ke[i].nilai_desimal += pangkat2;
            }
        } 
    }

    for (i = 0; i < n; i++)
    {
        barang_ke[i].nilai_dikurangi = barang_ke[i].nilai_desimal;
    }
    

    int counter = 0;
    int terjual;
    while (temp != '*')
    {
        scanf(" %c", &temp);
        for (i = 0; i < n; i++)
        {
            if (temp == barang_ke[i].c)
            {
                scanf("%d", &terjual);
                barang_ke[i].nilai_dikurangi -= terjual;
                
                if (barang_ke[i].nilai_dikurangi < 0)
                {
                    barang_ke[i].nilai_dikurangi = 0;
                }
            }
        }
        counter++;
    }

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("Stok Barang Awal\n");
        }
        printf("- %c ", barang_ke[i].c);
        for (j = 0; j < barang_ke[i].strlen; j++)
        {
            printf("%c", barang_ke[i].m[j]);
        }
        printf(" %d\n", barang_ke[i].nilai_desimal);
    }
    
    
    if (counter == 1)
    {
        printf("\n---Stok Tetap---\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                printf("\nStok Barang Update\n");
            }
            printf("- %c ", barang_ke[i].c);
            for (j = 0; j < barang_ke[i].strlen; j++)
            {
                printf("%c", barang_ke[i].m[j]);
            }
            printf(" %d\n", barang_ke[i].nilai_dikurangi);
        }
    }
    
    return 0;
}