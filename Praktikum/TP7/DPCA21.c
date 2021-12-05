/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP7 (Dekripsi PT. Cinta Abadi)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Import Library stdio.h dan string. untuk menggunakan fungsi yang akan digunakan, terutama strlen()
#include <stdio.h>
#include <string.h>

// Program Utama
int main() {
    // Deklarasi variabel yang dibutuhkan
    char temp; // Untuk menyimpan sementara nilai 1 karakter
    int i = 0; // Iterator
    char str[100] = {'\0'}; // str dengan panjang 100 dan isinya adalah null semua, agar memudahkan penggunaan string (Template String)
    char str_kunci[100]; // untuk menyimpan string kata kunci
    int nilai_str_kunci; // untuk menyimpan jumlah nilai ASCII dari tiap karakter yang ada di kata kunci
    int nilai_str_search; // untuk menyimpan jumlah nilai ASCII dari iterasi pencarian karakter yang sama dengan nilai ASCII kata kunci
    char str_sblm_desc[100] = {'\0'}; // untuk menyimpan hasil penghapusan karakter
    char str_stlh_desc1[100] = {'\0'}; // untuk menyimpan string hasil dekripsi 1
    
    // do while ini berfungsi untuk menginput karakter hingga sebelum tanda seru
    do
    {
        scanf(" %c", &temp); // simpan ke temp
        if (temp != '!')
        {
            // jika temp bukan tanda seru, maka masukan temp ke str[ke-i], dimana i akan ditambah 1 setelah dibaca
            str[i++] = temp;
        }

    } while (temp != '!'); // syarat do while yang bernilai true jika temp bukan tanda seru

    // Memasukan string yang terletak setelah tanda seru sebagai kata kunci
    scanf("%s", &str_kunci);

    // deklarasi beberapa variabel pembantu
    int j, k; 
    
    /* str temp ini digunakan untuk meyimpan nilai integer yang berkorespondensi dengan kata yang akan dihapus
        misal passwordini
              00000000000
    */
    int str_temp[strlen(str)]; 


    // For ini untuk mengisikan nilai 0 ke setiap isi array str_temp
    for (i = 0; i < strlen(str); i++)
    {
        str_temp[i] = 0;
    }
    
    // merubah nilai penyimpanan sementara jumlah ASCII kata kunci menjadi 0, agar dapat di isikan dengan nilai sebetulnya
    nilai_str_kunci = 0;

    // for ini digunakan untuk memasukan nilai ASCII kata kunci
    for (j = 0; j < strlen(str_kunci); j++)
    {
        nilai_str_kunci += str_kunci[j];
    }
    
    /* for ini digunakan untuk menandai string yang akan dihapus dengan kata kuncinya, misal:
        kata kunci: as
        passwordini
        01100000000
    nilai 1 pada array tersebut merepresentasikan bahwa letak tersebut ditandai sebagai bagian yang sama dengan kata kunci
    */
    for (i = 0; i < strlen(str); i++)
    {
        nilai_str_search = 0;

        // for ini akan bergerak per karakter kata yang akan dicari, lalu menambahkan nilai ASCII sebanyak panjang string kata kunci langkah kedepan 
        for (j = i; j < i + strlen(str_kunci); j++)
        {
            nilai_str_search += str[j];
        }

        // if ini digunakan untuk mengecek secara pasti apakah karakter yang dicari ASCII nya sudah sama atau belum, lalu dicek apakah sama atau tidak antara karakter depan dan belakang dari kata kunci dengan kata yang ingin dihapuskan
        if ((nilai_str_kunci == nilai_str_search) && (str[i] == str_kunci[0]) && 
            (str[j-1] == str_kunci[strlen(str_kunci)-1]))
        {
            // for ini untuk merubah nilai posisi array integer str_temp yang sama dengan posisi string yang ingin dihapus menjadi 1
            for (k = j-1; k >= i; k--)
            {
                str_temp[k] = 1;
            }
        }
    }


    int counter = 0; // iterator

    /* for ini digunakan untuk mengeliminasi array yang ditandai
        passwordini
        01100000000

        maka hasilnya:
        pswordini
    */  
    for (i = 0; i < strlen(str); i++)
    {
        if (str_temp[i] == 0)
        {
            str_sblm_desc[counter++] = str[i];
        }
    }

    // Bagian akhir kode untuk menampilkan output yang diinginkan
    if (strlen(str_sblm_desc) == 0) // Cek apakah string kata yang ingin didekripsi ada isinya atau tidak
    {
        // jika tidak ada isinya keluarkan ini

        printf("==== Inputan Tidak Valid! ====\n");
    } 
    else
    {
        // jika ada isinya, lakukan Dekripsi 1 dan 2

        // Output tanpa kunci
        printf("Tanpa kunci: %s\n", str_sblm_desc);
        
        // Dekripsi 1
        printf("\nDekripsi 1: ");
        int counter1 = 0, counter2 = strlen(str_sblm_desc)-1;
        for (i = 0; i < strlen(str_sblm_desc); i++)
        {
            // if ini digunakan untuk selang seling karakter yang keluar dari str tanpa kunci: awal akhir awal+1 akhir-1 dan seterusnya
            if ((i%2) == 0)
            {
                str_stlh_desc1[i] = str_sblm_desc[counter1++];
                printf("%c", str_stlh_desc1[i]);
            }
            else
            {
                str_stlh_desc1[i] = str_sblm_desc[counter2--];
                printf("%c", str_stlh_desc1[i]);
            }
        }

        // Deskripsi 2
        // Dekripsi 2 menggunakan string hasil Dekripsi 1 lalu dibagi 2, tiap bagian diputarbalikan urutan karakternya
        char kiri[strlen(str_stlh_desc1)/2+1]; char kanan[strlen(str_stlh_desc1)/2+1]; // Array untuk menampung bagian kanan dan kiri str dekripsi 1
        counter1 = strlen(str_stlh_desc1)/2-1; counter2 = strlen(str_sblm_desc)-1; // digunakan untuk mengontrol keluarnya karakter
        for (i = 0; i < strlen(str_stlh_desc1)/2; i++)
        {
            // Isi bagian kanan dan kiri dari pembagian dekripsi 1
            kiri[i] = str_stlh_desc1[counter1--];
            kanan[i] = str_stlh_desc1[counter2--];

            // if ini digunakan untuk memberikan null diakhir array kanan dan kiri agar bisa dibaca sebagai string
            if (i == strlen(str_stlh_desc1)/2-1)
            {
                kiri[i+1] = 0;
                kanan[i+1] = 0;
            }
            
        }

        /* if ini untuk mengkategorikan apakah jumlah hurufnya genap atau ganjil pada str setelah dekripsi 1
             jika genap tidak perlu menyelipkan karakter di tengah
             jika ganjil perlu menyelipkan karakter di tengah dari karakter tengah str dekripsi 1
        */
        if (strlen(str_stlh_desc1)%2 == 0)
        {
            printf("\n\nDekripsi 2: %s%s\n", kiri, kanan);
        }
        else
        {
            printf("\n\nDekripsi 2: %s%c%s\n", kiri, str_stlh_desc1[strlen(str_stlh_desc1)/2], kanan);
        }
    }

    return 0;
}