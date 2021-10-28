/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP5 (Kisah Techi dan Carla)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

#include <stdio.h>

int main() {
    int n, m; // Deklarasi Variabel untuk menampung panjang array
    int i, j; // Deklarasi Variabel iterator
    int techixcarla = 0, bersaudara = 0; // Deklarasi Variabel untuk parameter output

    // Meminta Masukan user berupa panjang array pertama yang akan digunakan untuk mendefinisikan banyak kartu yang akan diambil Techi
    scanf("%d", &n);

    char x[n]; // Deklarasi Array penampung kartu Techi

    // For untuk memasukan input kartu secara berurutan pada Array pertama
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &x[i]);
    }

    // Meminta Masukan user berupa panjang array kedua yang akan digunakan untuk mendefinisikan banyak kartu yang akan diambil Carla
    scanf("%d", &m);

    char y[m]; // Deklarasi Array penampung kartu Carla

    // For untuk memasukan input kartu secara berurutan pada Array kedua
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &y[i]);
    }

    // Algoritma pertamau ntuk menentukan nilai variabel komponen yang telah dispesikasikan
    if (n == m) // Cek n dan m, apakah sama.
    {
        // Jika n sama dengan m, maka eksekusi blok kode ini,
        // Jika tidak memenuhi, eksekusi else setelah blok kode ini

        // For primer digunakan untuk iterasi Array pertama
        for (i = 0; i < n; i++)
        {
            if (x[i] >= 'A' && x[i] <= 'I') // Cek indeks ke i pada Array pertama, apakah berada pada interval A samapi I
            {
                if (y[i] >= '1' && y[i] <= '9') // Cek indeks ke i pada Array kedua, apakah berada pada interval 1 samapi 9
                {
                    // For sekunder digunakan untuk mengecek, apakah isi nilai Array pertama pada indeks ke i ada yang sama dengan semua isi nilai dari Array kedua
                    for (j = 0; j < n; j++)
                    {
                        if ((x[i]-'A') == (y[j]-'1')) // Cek apakah Array pertama dengan Array kedua sama pada indeks i dan j
                        {
                            techixcarla++; // Jika sama maka tambahkan 1 ke variabel techixcarla
                        } 
                    }
                }
                else if (y[i] >= 'A' && y[i] <= 'I') // Jika Array kedua ternyata adalah sama jenis dengan Array pertama, tambahkan 1 ke variabel bersaudara
                {
                    bersaudara++;
                }
                
            } 
            else if (x[i] >= '1' && x[i] <= '9') // Cek indeks ke i pada Array pertama, apakah berada pada interval 1 samapi 9
            {
                if (y[i] >= 'A' && y[i] <= 'I') // Cek indeks ke i pada Array kedua, apakah berada pada interval A samapi I
                {
                    // For sekunder digunakan untuk mengecek, apakah isi nilai Array pertama pada indeks ke i ada yang sama dengan semua isi nilai dari Array kedua
                    for (j = 0; j < n; j++)
                    {
                        if ((x[i]-'1') == (y[j]-'A')) // Cek apakah Array pertama dengan Array kedua sama pada indeks i dan j
                        {
                            techixcarla++; // Jika sama maka tambahkan 1 ke variabel techixcarla
                        } 
                    } 
                }
                else if (y[i] >= '1' && y[i] <= '9') // Jika Array kedua ternyata adalah sama jenis dengan Array pertama, tambahkan 1 ke variabel bersaudara
                {
                    bersaudara++;
                }
            }
            
            
        }
        
    } 
    else 
    {
        // Blok kode ini digunakan jika n != m,
        if (x[0] >= 'A' && x[0] <= 'I') // Cek indeks ke 0 pada Array pertama, apakah berada pada interval A samapi I
        {
            if (y[0] >= 'A' && y[0] <= 'I') // Cek indeks ke 0 pada Array kedua, apakah berada pada interval A samapi I, jika ya tambah 1 ke variabel bersaudara
            {
                bersaudara++;
            }
            
        } 
        else if (x[0] >= '1' && x[0] <= '9') // Cek indeks ke 0 pada Array pertama, apakah berada pada interval 1 samapi 9
        {
            if (y[0] >= '1' && y[0] <= '9') // Cek indeks ke 0 pada Array kedua, apakah berada pada interval 1 samapi 9, jika ya tambah 1 ke variabel bersaudara
            {
                bersaudara++;
            }
        }
    }

    // Algoritma kedua digunakan setelah variabel komponen terisi nilai dari Algoritma pertama untuk mencetak output ke layar
    if (techixcarla == n) // Cek apakah techixcarla == n, jika iya maka sudah pasti bahwa Carla menyukai balik Techi
    {
        if (n == m) // Cek apakah n == m, jika iya cetak kartu Techi selang seling dengan kartu Carla
        {
            // For ini digunakan untuk mencetak kartu selang seling, dan didesain agar tidak ada spasi di akhir
            for (i = 0; i < n; i++)
            {
                if (i == n-1)
                {
                    if (x[0] >= 'A' && x[0] <= 'I')
                    {
                        printf("%c", x[i]);
                        printf(" %d", y[i]-'1'+1);
                    } 
                    else
                    {
                        printf("%d", x[i]-'1'+1);
                        printf(" %c", y[i]);  
                    }
                }
                else
                {
                    if (x[0] >= 'A' && x[0] <= 'I')
                    {
                        printf("%c ", x[i]);
                        printf("%d ", y[i]-'1'+1);
                    } 
                    else
                    {
                        printf("%d ", x[i]-'1'+1);
                        printf("%c ", y[i]);  
                    }
                }
            }

        printf("\n");
        }
        printf("Nilai kartu mereka cocok,\nCarla menyukai balik Techi.\n");
        
    } else if (bersaudara >= 1) // Cek apakah variabel bersaudara >= 1, jika iya maka mereka bersaudara, oh tidak!
    {
        if (n == m) // Cek apakah n == m, jika iya cetak kartu Techi selang seling dengan kartu Carla
        {
            // For ini digunakan untuk mencetak kartu selang seling, dan didesain agar tidak ada spasi di akhir
            for (i = 0; i < n; i++)
            {
                if (i == n-1)
                {
                    if (x[0] >= 'A' && x[0] <= 'I')
                    {
                        printf("%c", x[i]);
                        printf(" %d", y[i]-'1'+1);
                    } 
                    else
                    {
                        printf("%d", x[i]-'1'+1);
                        printf(" %c", y[i]);  
                    }
                }
                else
                {
                    if (x[0] >= 'A' && x[0] <= 'I')
                    {
                        printf("%c ", x[i]);
                        printf("%d ", y[i]-'1'+1);
                    } 
                    else
                    {
                        printf("%d ", x[i]-'1'+1);
                        printf("%c ", y[i]);  
                    }
                }
            }\

        printf("\n");
        }
        printf("Kartu mereka sejenis,\nternyata mereka bersaudara!\n");
    } 
    else
    {
        // Jika kedua konsisi di atas tidak terpenuhi, otomastis Carla tidak menyukai balik Techi, :(

        if (n == m) // Cek apakah n == m, jika iya cetak kartu Techi selang seling dengan kartu Carla
        {
            // For ini digunakan untuk mencetak kartu selang seling, dan didesain agar tidak ada spasi di akhir
            for (i = 0; i < n; i++)
            {
                if (i == n-1)
                {
                    if (x[0] >= 'A' && x[0] <= 'I')
                    {
                        printf("%c", x[i]);
                        printf(" %d", y[i]-'1'+1);
                    } 
                    else
                    {
                        printf("%d", x[i]-'1'+1);
                        printf(" %c", y[i]);  
                    }
                }
                else
                {
                    if (x[0] >= 'A' && x[0] <= 'I')
                    {
                        printf("%c ", x[i]);
                        printf("%d ", y[i]-'1'+1);
                    } 
                    else
                    {
                        printf("%d ", x[i]-'1'+1);
                        printf("%c ", y[i]);  
                    }
                }
            }
        printf("\n");
        }
        printf("Nilai kartu mereka tidak cocok,\nCarla tidak menyukai Techi.\n");
    }
    
    return 0;
}
