/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Evaluasi ke-2 (Permainan Malam Tahun Baru)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Deklrasi Pustaka Pribadi
#include "header.h"

int main() {

    // Deklarasi Variabel-Variabel
    int i, j = 0; // <-- untuk iterasi
    int position = 0; // <-- untuk itrasi
    char clock[8]; // <-- untuk menyimpan masukan berupa durasi film seperti "2:00:25"
    int time; // <-- untuk menyimpan durasi film, tetapi dalam bentuk hitungan detik, misal 7227 detik
    int n; // <-- untuk menyimpan nilai berapa kalimat yang akan diinput utnuk dicek anagram atau tidak 

    scanf("%d", &n); // <-- input masukan untuk n

    base data[n]; // <-- delarasi array tipe data terstruktur bernama data dengan panjang n

    // For sebenyak n
    for (i = 0; i < n; i++)
    {    
        scanf("%s", &data[i].raw); // <-- input masukan user berupa kalimat seperti "I_Am_Lord_Voldemort?Tom_Marvolo_Riddle"

        /////////////////////////////////////////////////////////////////
        while (data[i].raw[j] != '?')                                   //
        {                                                               //
            data[i].depan[position++] = data[i].raw[j++];               //
        }                                                               //
        data[i].depan[position] = 0;                                    //
                                                                        //
        position = 0;                                                   //
        j++;                                                            // <-- Blok Kode ini berguna untuk memisahkan kalimat sebelum dan setelah simbol '?' 
        while (j != strlen(data[i].raw))                                //
        {                                                               //
            data[i].belakang[position++] = data[i].raw[j++];            //
        }                                                               //
        data[i].belakang[position] = 0;                                 //
                                                                        //  
        position = 0;                                                   //
        j = 0;                                                          //
        /////////////////////////////////////////////////////////////////

        data[i].anagram = check(data[i].depan, data[i].belakang); // <-- memanggil fungsi check untuk memeriksa apakah kalimat sebelum dan sesudah simbol '?' adalah anagram
    }
    
    scanf("%s", &clock); // <-- input string durasi "2:00:25"

    time = stringToInt(clock); // <-- memanggil fungsi stringToInt untuk mengkonversi string "2:00:25" menjadi integer durasi dalam detik "7225" lalu simpan ke variabel time

    /////////////////////////////////////////////
    int temp = 0;                               //
    for (i = 0; i < n; i++)                     //
    {                                           //
        if (data[i].anagram == 1)               //
        {                                       //
            printf("Anagram!\n");               //
            temp++;                             // <-- untuk mencetak ke layar apakah urutan pasangan kalimat anagram atau tidak
        }                                       //
        else                                    //
        {                                       //  
            printf("Bukan Anagram!\n");         //
        }                                       //
    }                                           //
    /////////////////////////////////////////////
    time += temp; // <-- time ditambah dengan jumlah pasangan kalimat yang anagram

    output(time); // <-- memanggil prosedur output untuk mencetak Lanjut Nonton atau tidur berdasarkan paramter time apakah palindrom atau tidak

    return 0;
}