/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 2 urutan ke-1 (String Ganjil Genap Gege)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Import Library
#include <stdio.h> // <-- stdio.h berisikan fungsi-fungsi standar di bahasa C seperti printf, scanf dll.
#include <string.h> // <-- string.h berisikan fungsi-fungsi seperti strcmp(), strcpy(), strlen()

// Program Utama
int main() {
    // Deklarasi dan Input
    char str_masukan[901]; // <-- Panjang Array 900 + 1(untuk karakter null)
    scanf("%s", &str_masukan); // <-- Proses pemasukan nilai berupa string ke str_masukan

    char gnp_gnjl[7]; // <-- Panjang Array 6 + 1(untuk karakter null) yang digunakan untuk menyimpan string "genap" atau "ganjil"
    scanf("%s", &gnp_gnjl); // <-- Proses pemasukan nilai berupa string ke str_masukan

    int sub_len; // <-- sub_len bertipe integer digunakan untuk menampung nilai panjang sub string yang ingin dicocokkan
    scanf("%d", &sub_len); // <-- Proses pemasukan nilai berupa string ke str_masukan

    char sub_str[11]; // <-- Panjang Array 10 + 1(untuk karakter null) yang digunakan untuk menyimpan sub string yang ingin dicocokkan
    scanf("%s", &sub_str); // <-- Proses pemasukan nilai berupa string ke str_masukan
    // ========================================================================= //

    // Deklarasi Variabel Pembantu
    int i, j = 0, k = 0; // <-- digunakan untuk iterasi primer
    int counter = 0; int counter2 = 0; // <-- digunakan untuk iterasi sekunder
    char str_scanned[901]; // <-- digunakan untuk menyimpan hasil scanning ganjil/genap
    char temp[sub_len+1]; temp[sub_len] = 0; // <-- digunakan untuk penyimpanan sementara substring yang ingin dicocokkan
    // ========================================================================= //

    // Algoritma utama untuk scanning Sub-String pada sebuah string
    if (strcmp(gnp_gnjl, "genap") == 0) // <-- cek apakah masukan user kepada gnp_gnjl berupa genap atau ganjil dengan memanfaatkan fungsi strcmp()
    {
        // Jika user memasukkan "genap" maka eksekudi blok kode ini
        for (i = 0; i < strlen(str_masukan); i++) // <-- perulangan sebanyak panjang string di dalam str_masukan
        {
            if (i%2 == 1) // <-- cek apakah iterasi saat ini adalah index ganjil atau bukan
            {
                // Jika index ganjil maka eksekusi blok kode ini
                str_scanned[counter++] = str_masukan[i]; // <-- Masukkan karakter ke-i dari string str_masukan ke str_scanned index counter saat ini
                
                k = i; // <-- inisialisasi k sebagai nilai i yang sekarang
                j = 0; // <-- inisialisasi j = 0, agar dapat digunakan secara normal pada while di bawah
                while (j < sub_len) // <-- perulangan sebanyak sub_len atau panjang substring
                {
                    // while ini digunakan untuk memasukkan tiap karakter ke-i string masukan secara satu persatu
                    // misal: "hayyu" dan panjang sub string = 2, maka ketika disimpan di temp menjadi: ha, ay, yy, yu 
                    temp[j] = str_masukan[k++];
                    k++;
                    j++; // <-- pengubah kondisi while
                }

                // If di bawah digunakan sebagai pengecek subtring yang ingin dicari setelah tadi karakter satu persatu sudah disimpan ke temp               
                if (strcmp(temp, sub_str) == 0) // <-- cek apakah temp dan subtring masukan user sama
                {
                    // Jika ya tambahkan 1 ke counter2
                    counter2++;
                }
            }

            // If di bawah digunakan untuk memberikan karakter null di akhir string yang sudah discan tadi, agar bisa digunakan oleh format specifier %s
            if (i == strlen(str_masukan)-1) // <-- cek apakah i sekarang sama dengan panjang string masukan dikurangi 1
            {
                // Jika ya, str scan pada index ke-counter isi dengan 0
                str_scanned[counter] = 0;
            }
        }
    }
    else
    {
        // bagian blok kode ini digunakan untuk menangani masukan user bila Ganjil, sehingga struktur kode mirip dengan sebelummnya

        for (i = 0; i < strlen(str_masukan); i++)
        {
            if (i%2 == 0) // <-- pembedanya hanya berada di sini yang tadinya == 1. diganti menjadi == 0 agar sesuai dengan permintaan yaitu ganjil dimana posisi index akan genap
            {
                str_scanned[counter++] = str_masukan[i];
                k = i;

                for (j = 0; j < sub_len; j++)
                {
                    temp[j] = str_masukan[k++];
                    k++;
                }
                
                if (strcmp(temp, sub_str) == 0)
                {
                    counter2++;
                }
            }

            if (i == strlen(str_masukan)-1)
            {
                str_scanned[counter] = 0;
            }
        }
    }

    // Output
    printf("%s\n", str_scanned); // <-- Tampilkan ke layar string hasil scan ganjil/genap
    printf("%d\n", counter2);// <-- Tampilkan ke layar nilai jumlah subtring yang berada pada string masukan sesuai urutan ganjil/genap
    
    // Kebalikan nilai 0 jika program berjalan sukses
    return 0;
}