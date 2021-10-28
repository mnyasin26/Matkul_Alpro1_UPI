/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 1 urutan ke-1 (Segitiga Kejujuran)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// deklarasi library untuk menggunakan sintaks sintaks dalam Bahasa C
#include <stdio.h>
#include <math.h>

// int main() menjadi syarat awal dalam memulai program berbahasa C
int main () {
    // Deklarasi variabel untuk menampung masukan masing masing segitiga
    double a, b, c; // Variabel untuk segitiga pertama
    double x, y, z; // Variabel untuk segitiga kedua
    
    // Deklarasi variabel untuk menampung nilai-nilai sementara komponen segitiga   
    int tinggi;
    double alas;
    double hasil_sgt1, hasil_sgt2;
    int selisih;

    // Meminta masukan dari user menggunakan scanf
    scanf("%lf %lf %lf", &a, &b, &c); // User memasukan nilai untuk segitiga pertama lalu disimpan pada variabel terkait
    scanf("%lf %lf %lf", &x, &y, &z); // User memasukan nilai untuk segitiga keuda lalu disimpan pada variabel terkait

    
    if (((a == b) && (a == c)) && ((x == y) && (x == z))) // Cek apakah 3 sisi masing-masing segitiga adalah sama panjang
    {
        // Jika syarat terpenuhi, eksekusi blok kode ini
        // Jika tidak, ekesekusi else if setelah blok kode ini

        printf("segitiga sama sisi\n"); // Tampilkan string "segitiga sama sisi" ke layar

        // Hitung luas segitiga pertama
        alas = a;
        tinggi = sqrt(((a*a)-((a*0.5)*(a*0.5))));
        hasil_sgt1 = (0.5)*alas*tinggi ;

        // Hitung luas segitiga kedua
        alas = x;
        tinggi = sqrt((x*x)-((x*0.5)*(x*0.5)));
        hasil_sgt2 = (0.5)*alas*tinggi ;

        // Cek apakah luas segitiga pertama lebih besar dari luas segitiga kedua
        if (hasil_sgt1 >= hasil_sgt2)
        {
            // Jika syarat terpenuhi, eksekusi blok kode ini
            // Jika tidak, ekesekusi else setelah blok kode ini

            printf("segitiga pertama\n"); // Tampilkan string "segitiga pertama" ke layar
            selisih = hasil_sgt1-hasil_sgt2; // selisih = luas segitiga pertama - luas segitiga kedua
            printf("selisih %d\n", selisih); // Tampilkan string "selisih" serta nilai selisih ke layar
        }else {
            printf("segitiga kedua\n"); // Tampilkan string "segitiga kedua" ke layar
            selisih = hasil_sgt2-hasil_sgt1; // selisih = luas segitiga kedua - luas segitiga pertama
            printf("selisih %d\n", selisih); // Tampilkan string "selisih" serta nilai selisih ke layar
        }
            
     
        
    } else if (((a == b) || (b == c) || (c == a)) && ((x == y) || (y == z) || (z == x)) && (((a != b) || (a != c)) && ((x != y) || (x != z)))) // Cek apakah ada persis 2 sisi yang sama panjang pada masing masing segitiga
    {
        // Jika syarat terpenuhi, eksekusi blok kode ini
        // Jika tidak, ekesekusi else setelah blok kode ini
        
        printf("segitiga sama kaki\n"); // munculkan string "segitiga sama kaki" ke layar

        // Menentukan luas segitiga sama kaki yang pertama
        if (a == b)
        {
            alas = c;
            tinggi = sqrt((a*a) - ((((0.5)*c)*((0.5)*c))));

        } else if (b == c)
        {
            alas = a;
            tinggi = sqrt((b*b) - (((0.5)*a)*((0.5)*a)));

        } else if (c == a)
        {
            alas = b;
            tinggi = sqrt((c*c) - (((0.5)*b)*((0.5)*b)));

        }
        
        hasil_sgt1 = (0.5)*alas*tinggi ;

        // Menentukan luas segitiga sama kaki yang kedua
        if (x == y)
        {
            alas = z;
            tinggi = sqrt((x*x) - (((0.5)*z)*((0.5)*z)));

        } else if (y == z)
        {
            alas = x;
            tinggi = sqrt((y*y) - (((0.5)*x)*((0.5)*x)));

        } else if (z == x)
        {
            alas = y;
            tinggi = sqrt((z*z) - (((0.5)*y)*((0.5)*y)));

        }

        hasil_sgt2 = (0.5)*alas*tinggi ;

        if (hasil_sgt1 >= hasil_sgt2) // Cek apakah luas segitiga pertama lebih besar dari luas segitiga kedua
        {
            // Jika syarat terpenuhi, eksekusi blok kode ini
            // Jika tidak, ekesekusi else setelah blok kode ini

            printf("segitiga pertama\n"); // Tampilkan string "segitiga pertama" ke layar
            selisih = hasil_sgt1-hasil_sgt2; // selisih = luas segitiga pertama - luas segitiga kedua
            printf("selisih %d\n", selisih); // Tampilkan string "selisih" serta nilai selisih ke layar
        }else {
            printf("segitiga kedua\n"); // Tampilkan string "segitiga pertama" ke layar
            selisih = hasil_sgt2-hasil_sgt1; // selisih = luas segitiga kedua - luas segitiga pertama
            printf("selisih %d\n", selisih); // Tampilkan string "selisih" serta nilai selisih ke layar
        }



        
        
    } else if (((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) && ((x*x + y*y == z*z) || (x*x + z*z == y*y) || (y*y + z*z == x*x))) // Cek apakah ada korelasi rumus phytagoras antar sisi-sisi masing masing segitiga
    {
        // Jika syarat terpenuhi, eksekusi blok kode ini
        // Jika tidak, ekesekusi else setelah blok kode ini

        printf("segitiga siku-siku\n"); // munculkan string "segitiga siku-siku" ke layar

            // Menentukan luas segitiga siku-siku yang pertama
            if ((a < c) && (b < c))
            {
                alas = a;
                tinggi = b;

            } else if ((a < b) && (c < b))
            {
                alas = a;
                tinggi = c;

            } else if ((b < a) && (c < a))
            {
                alas = b;
                tinggi = c;
            }
            
            hasil_sgt1 = (0.5)*alas*tinggi ;
            
            // Menentukan luas segitiga siku-siku yang kedua
            if ((x < z) && (y < z))
            {
                alas = x;
                tinggi = y;
                
            } else if ((x < y) && (z < y))
            {
                alas = x;
                tinggi = z;
                
            } else if ((y < x) && (z < x))
            {
                alas = y;
                tinggi = z;
            }

            hasil_sgt2 = (0.5)*alas*tinggi ;


            if (hasil_sgt1 >= hasil_sgt2) // Cek apakah luas segitiga pertama lebih besar dari luas segitiga kedua
            {
                // Jika syarat terpenuhi, eksekusi blok kode ini
                // Jika tidak, ekesekusi else setelah blok kode ini

                printf("segitiga pertama\n"); // Tampilkan string "segitiga pertama" ke layar
                selisih = hasil_sgt1-hasil_sgt2; // selisih = luas segitiga pertama - luas segitiga kedua
                printf("selisih %d\n", selisih); // Tampilkan string "selisih" serta nilai selisih ke layar
            }else {
                printf("segitiga kedua\n"); // Tampilkan string "segitiga kedua" ke layar
                selisih = hasil_sgt2-hasil_sgt1; // selisih = luas segitiga kedua - luas segitiga pertama 
                printf("selisih %d\n", selisih); // Tampilkan string "selisih" serta nilai selisih ke layar
            }
        
    } else {
        // Jika semua kondisi tidak memenuhi, maka munculkan ke layar "tidak sama"
        printf("tidak sama\n");

    }
    
    return 0;
    
}