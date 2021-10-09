/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 1 urutan ke-2 (Bilangan Riil yang Tertukar)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// deklarasi library untuk menggunakan sintaks sintaks dalam Bahasa C
#include <stdio.h>
#include <math.h>

// int main() menjadi syarat awal dalam memulai program berbahasa C
int main () {
    // Deklarasi variabel untuk menampung empat masukan user berupa angka desimal dengan 2 angka dibelakang koma
    double a, b, c, d;

    // Deklarasi variabel untuk menampung letak pertukaran angka depan koma dengan angka belakang koma
    int h, i, j, k;

    // Deklarasi variabel untuk menampung hasil sementara yang digunakan dalam proses pertukaran
    double temp_belakang1, temp_belakang2;
    int temp_depan1, temp_depan2;

    // Deklarasi Variabel untuk menampung hasil pertukaran
    double temp_hasil1, temp_hasil2, temp_hasil3, temp_hasil4;

    // Meminta 4 masukan user berupa angka desimal dengan 2 angka dibelakang koma lalu disimpan pada variabel terkait
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);

    // Meminta 4 masukan user berupa angka bilangan bulat lalu disimpan pada variabel terkait
    scanf("%d %d", &h, &i);
    scanf("%d %d", &j, &k);

    // *sehingga total ada 8 masukan user, yang kemudian akan digunakan beradasarkan masukan ke-n

    
    if (h == 1) // Cek masukan ke-5
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 1, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (i == 2) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini
            
            // *a akan berkolerasi dengan 1, b dengan 2, c dengan 3, dan d dengan 4

            // pisahkan dan simpan angka depan koma masukan a dan b
            temp_depan1 = a;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan a dan b
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

        } else if (i == 3) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan a dan c
            temp_depan1 = a;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan a dan c
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

        } else if (i == 4) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan a dan d
            temp_depan1 = a;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan a dan d
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            
        } else if (i == 1) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka selesai
            // pisahkan dan simpan angka depan koma masukan a dan a
            temp_depan1 = a;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan a dan a
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

        }
        
        
        
    } else if (h == 2) // Cek masukan ke-5
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 2, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (i == 1) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan b dan a
            temp_depan1 = b;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan b dan a
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 3) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan b dan c
            temp_depan1 = b;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan b dan c
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 4) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan b dan d
            temp_depan1 = b;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan b dan d
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 2) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka selesai

            // pisahkan dan simpan angka depan koma masukan b dan b
            temp_depan1 = b;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan b dan b
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

            
            
        }
        

    } else if (h == 3) // Cek masukan ke-5
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 3, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (i == 1) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan a dan c
            temp_depan1 = c;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan a dan c
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 2) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan c dan b
            temp_depan1 = c;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan c dan b
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 4) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan c dan d
            temp_depan1 = c;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan c dan d
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 3) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka selesai

            // pisahkan dan simpan angka depan koma masukan c dan c
            temp_depan1 = c;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan c dan c
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

            
            
        }
        
    } else if (h == 4) // Cek masukan ke-5
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 4, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (i == 1) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan d dan a
            temp_depan1 = d;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan d dan a
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 3) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan d dan c
            temp_depan1 = d;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan d dan c
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 2) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan d dan b
            temp_depan1 = d;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan d dan b
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

            
            

        } else if (i == 4) // Cek masukan ke-6
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka selesai
            // pisahkan dan simpan angka depan koma masukan d dan d
            temp_depan1 = d;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan d dan d
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            
        }
        
    }


// ----------------------------------------------------------------------

if (j == 1) // Cek masukan ke-7
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 1, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (k == 2) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini
            
            // *a akan berkolerasi dengan 1, b dengan 2, c dengan 3, dan d dengan 4

            // pisahkan dan simpan angka depan koma masukan a dan b
            temp_depan1 = a;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan a dan b
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

        } else if (k == 3) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan a dan c
            temp_depan1 = a;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan a dan c
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

        } else if (k == 4) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan a dan d
            temp_depan1 = a;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan a dan d
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            
        } else if (k == 1) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka selesai
            // pisahkan dan simpan angka depan koma masukan a dan a
            temp_depan1 = a;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan a dan a
            temp_belakang1 = a - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil1 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

        }
        
        
        
    } else if (j == 2) // Cek masukan ke-7
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 2, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (k == 1) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan b dan a
            temp_depan1 = b;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan b dan a
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 3) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan b dan c
            temp_depan1 = b;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan b dan c
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 4) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan b dan d
            temp_depan1 = b;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan b dan d
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 2) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka selesai

            // pisahkan dan simpan angka depan koma masukan b dan b
            temp_depan1 = b;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan b dan b
            temp_belakang1 = b - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil2 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

            
            
        }
        

    } else if (j == 3) // Cek masukan ke-7
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 3, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (k == 1) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan a dan c
            temp_depan1 = c;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan a dan c
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 2) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan c dan b
            temp_depan1 = c;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan c dan b
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 4) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan c dan d
            temp_depan1 = c;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan c dan d
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 3) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka selesai

            // pisahkan dan simpan angka depan koma masukan c dan c
            temp_depan1 = c;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan c dan c
            temp_belakang1 = c - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil3 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

            
            
        }
        
    } else if (j == 4) // Cek masukan ke-7
    {
        // Jika memenuhi syarat yaitu masukan ke 5 = 4, maka eksekusi blok kode ini
        // Jika tidak, maka eksekusi else if setelah blok kode ini

        if (k == 1) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 1, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan d dan a
            temp_depan1 = d;
            temp_depan2 = a;

            // pisahkan dan simpan angka belakang koma masukan d dan a
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = a - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil1 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 3) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 3, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan d dan c
            temp_depan1 = d;
            temp_depan2 = c;

            // pisahkan dan simpan angka belakang koma masukan d dan c
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = c - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil3 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 2) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 2, maka eksekusi blok kode ini
            // Jika tidak, maka eksekusi else if setelah blok kode ini

            // pisahkan dan simpan angka depan koma masukan d dan b
            temp_depan1 = d;
            temp_depan2 = b;

            // pisahkan dan simpan angka belakang koma masukan d dan b
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = b - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil2 = temp_depan2 + temp_belakang1;

            
            

        } else if (k == 4) // Cek masukan ke-8
        {
            // Jika memenuhi syarat yaitu masukan ke 6 = 4, maka eksekusi blok kode ini
            // Jika tidak, maka selesai
            // pisahkan dan simpan angka depan koma masukan d dan d
            temp_depan1 = d;
            temp_depan2 = d;

            // pisahkan dan simpan angka belakang koma masukan d dan d
            temp_belakang1 = d - temp_depan1;
            temp_belakang2 = d - temp_depan2;

            // tukar silang dan simpan angka depan koma dan angka berlakang koma yang sudah tadi pisahkan
            temp_hasil4 = temp_depan1 + temp_belakang2;
            temp_hasil4 = temp_depan2 + temp_belakang1;

            
            
        }
        
    }
    
    // tampilkan ke layar hasil pertukaran
    printf("%.2lf\n", temp_hasil1); // posisi pertama
    printf("%.2lf\n", temp_hasil2); // posisi kedua
    printf("%.2lf\n", temp_hasil3); // posisi ketiga
    printf("%.2lf\n", temp_hasil4); // posisi keempat
    
    
    return 0;
    
}