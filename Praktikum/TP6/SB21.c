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

    int i = 0, j, k; char temp; int pangkat2; int hasil_bagi; // Variabel pembantu dalam Algortima di bawah ini
    while (i < n) // Perulangan sebanyak n kali
    {
        scanf(" %c", &temp); // Input karakter pertama lalu simpan ke temp
        barang_ke[i].c = temp; // Masukkan temp ke komonen kode barang di index ke-i Array of stok_brg
        
        j = 0; // iterator pembantu
        while (temp != ';')
        {
            // Jika temp tidak sama dengan ;, maka eksekusi blok kode ini
            scanf(" %c", &temp);
            barang_ke[i].m[j++] = temp; // Misal G a n c i ; akan di simpan ke komponen nama barang
        }

        barang_ke[i].strlen = j-1; // simpan panjang nama barang untuk keperluan print di akhir

        j = 0;
        while (j < 8)
        {
            // While ini digunakan untuk memasukkan biner
            scanf("%d", &barang_ke[i].b[j]); // Biner dimasukkan ke komponen biner barang
            j++;
        }

        barang_ke[i].nilai_desimal = 0;
        j = 7;
        while (j >= 0)
        {
            // while ini digunakan untuk mengkonversi biner ke desimal lalau di simpan ke komponen nilai desimal barang
            if (barang_ke[i].b[j] == 1)
            {
                pangkat2 = 1;
                k = 1;
                while (k < 8-j)
                {
                    pangkat2 = pangkat2*2;
                    k++;
                }
                barang_ke[i].nilai_desimal += pangkat2;
            }
            j--;
        } 
        i++;
    }

    i = 0;
    while (i < n)
    {
        // while ini digunakan untuk mengcopy nilai komponen desimal barang ke komponen yang akan diuatak atik untuk update stok
        barang_ke[i].nilai_dikurangi = barang_ke[i].nilai_desimal;
        i++;
    }
    

    int counter = 0;
    int terjual;
    while (temp != '*') // Selama input tidak sama dengan '*', maka eksekusi terus
    {
        // While ini digunakan untuk menerima input Kode barang serta berapa buah barang yang terambil
        scanf(" %c", &temp);
        i = 0;
        while (i < n)
        {
            // While ini memperoses operasi pengurangan terhadap nilai komponen desimal yang dipakai untuk update stok
            if (temp == barang_ke[i].c)
            {
                scanf("%d", &terjual);
                barang_ke[i].nilai_dikurangi -= terjual; // kurangi komponen desimal update stok yang berada pada indek ke-i dengan input barang yang diambil
                
                if (barang_ke[i].nilai_dikurangi < 0)
                {
                    // If ini digunakan untuk mereset nilai yang minus menjadi 0
                    barang_ke[i].nilai_dikurangi = 0;
                }
            }
            i++;
        }
        counter++;
    }

    i = 0;
    while (i < n)
    {
        // While ini digunakan untuk menampilkan Stok Awal
        if (i == 0)
        {
            printf("Stok Barang Awal\n");
        }
        printf("- %c ", barang_ke[i].c); // strip dan Kode Barang
        j = 0;
        while (j < barang_ke[i].strlen) // Gunakan strlen yang tadi, sebagai pembatas perulangan sesuai dengan panjang string/kata yang masuk
        {
            printf("%c", barang_ke[i].m[j]); // Nama Barang
            j++;        
        }
        printf(" %d\n", barang_ke[i].nilai_desimal); // Jumlah Stok Awal
        i++;
    }
    
    
    if (counter == 1) // counter ini digunakan sebagai parameter apakah simbol * berada pada awal input setelah barang atau tidak
    {
        // If ini digunakan untuk menampilan Stok tetap atau Stok Update tergantung dari masukannya
        printf("\n---Stok Tetap---\n");
    }
    else
    {
        i = 0;
        while (i < n)
        {
            // While ini digunakan untuk menampilkan Stok Update
            if (i == 0)
            {
                printf("\nStok Barang Update\n");
            }
            printf("- %c ", barang_ke[i].c); // strip dan Kode Barang
            j = 0;
            while (j < barang_ke[i].strlen) // Gunakan strlen yang tadi sebagai pembatas perulangan sesuai dengan panjang string/kata yang masuk
            {
                printf("%c", barang_ke[i].m[j]); // Nama Barang
                j++;
            }
            printf(" %d\n", barang_ke[i].nilai_dikurangi); // Jumlah Stok Update
            i++;
        }
    }
    
    return 0;
}