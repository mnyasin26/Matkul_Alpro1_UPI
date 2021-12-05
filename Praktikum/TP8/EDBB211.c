/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP8 (Enkripsi Directory Boba Bobi 1)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Import Library yang akan digunakan
#include <stdio.h>
#include <string.h>

// Kode Program
int main() {
    // Array a-z dan A-Z untuk memudahkan proses enkripsi
    char a_z[26];
    char A_Z[26];

    // Deklarasi Variabel Input untuk menampung masukan user
    char input[1000] = {'\0'};

    // For untuk memasukkan karakter a-z ke array a_z serta A-Z ke array A_Z menggunakan nilai ASCII
    int i, j, k;
    for (i = 0; i < 26; i++)
    {
        a_z[i] = i+97;
        A_Z[i] = i+65;
    }
    
    // Input masukan berupa alamat Directory lalu masukkan ke var input
    scanf("%s", &input);

    // Proses penghitungan kedalaman directory
    int bnyk_str = 1;
    for (i = 0; i < strlen(input); i++)
    {
        if ((input[i] == '\\'))
        {
            bnyk_str++;
        }
    }

    char str_encode[bnyk_str][202]; // <-- untuk menyimpan hasil enkripsi
    char str_original[bnyk_str][202]; // <-- untuk menyimpan string yang belum dienkripsi
    
    // Proses pemisahan alamat direktori serta menghitung kunci k sekaligus string mana yang terpanjang
    int str_ke = 0; j = 0; int max = 0; int k_kunci = 0;
    for (i = 0; i < strlen(input); i++)
    { 
        if (input[i] != '\\')
        {   
            str_original[str_ke][j++] = input[i];

            if ((str_ke) == (bnyk_str-1))
            {
                k_kunci += input[i];
            }

            if ((i) == (strlen(input)-1))
            {
                k_kunci = k_kunci%26; //<-- mod 26 karena jumlah huruf abjad ada 26
            }
        }
        else
        {
            str_original[str_ke][j] = '\0'; // <-- memberi karakter null di akhir string bagian
            j = 0;

            if (strlen(str_original[str_ke]) > max)
            {
                max = strlen(str_original[str_ke]);
            }
            str_ke++;
        }

        if ((strlen(str_original[str_ke]) > max) && (i == strlen(input)-1))
        {
            max = strlen(str_original[str_ke]); // <-- panjang karakter terpanjang
        }
    }

    // Proses Encoding String sesuai dengan kunci k
    str_ke = 0; j = 0;
    for (i = 0; i < strlen(input); i++)
    { 
        if (input[i] != '\\')
        {   
            if (((input[i] >= 97) && (input[i] <= 122)) || ((input[i] >= 65) && (input[i] <= 90)))
            {
                if ((input[i] >= 97) && (input[i] <= 122))
                {
                    str_encode[str_ke][j++] = a_z[((input[i]-97)+k_kunci)%26];
                }

                if (((input[i] >= 65) && (input[i] <= 90)))
                {
                    str_encode[str_ke][j++] = A_Z[((input[i]-65)+k_kunci)%26];
                }
            }
            else
            {
                str_encode[str_ke][j++] = input[i];
            }
        }
        else
        {
            str_encode[str_ke][j] = '\0';
            j = 0;
            str_ke++;
        }
    }
    

    // Output Pola Pesan
    printf(">> Pola Pesan <<\n");
    int counter = 0;
    for (i = 0; i < bnyk_str; i++)
    {
        int temp_len = strlen(str_encode[i]);
        for (j = 0; j < temp_len - ((temp_len)/2); j++)
        {
            printf("%c", str_encode[i][j]);
        }

        for (k = 0; k < max - temp_len; k++)
        {
            printf("%c", a_z[counter++]);
            if (counter == 26)
            {
                counter = 0;
            }
        }

        for (k = j; k < temp_len; k++)
        {
            printf("%c", str_encode[i][k]);
        }

        printf("\n");
    }
    
    // Output Path Directory Terenkripsi
    printf("\n>> Path Directory Terenkripsi <<\n");
    for (i = 0; i < bnyk_str; i++)
    {
        printf("%s", str_encode[i]);
        if (i != bnyk_str-1)
        {
            printf("/");
        }
    }

    // Output Kamus
    printf("\n\n>> Kamus <<\n");
    for (i = 0; i < bnyk_str; i++)
    {
        printf("%d. [%s] -> [%s]\n",i+1, str_encode[i], str_original[i]);
    }
    
    return 0;
}