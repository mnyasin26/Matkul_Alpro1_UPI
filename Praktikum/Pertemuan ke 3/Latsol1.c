// Deklarasi Library standar bahasa C
#include <stdio.h>

// Deklarasi tipe data terstruktur bernama 'bungkus'
typedef struct
{
    int bil1, bil2, bil3; // Deklarasi tiga buah variabel tipe data integer
    char huruf; // Deklarasi satu buah variabel tipe data integer
} bungkus;

// int main sebagai tempat program utama
int main () {

    // Deklarasi tipe data bungkus dengan nama 'karung'
    bungkus karung;

    // Meminta karung user berupa tiga buah integer dan satu buah karakter lalu disimpan ke variabel terkait
    scanf("%d %d %d", &karung.bil1, &karung.bil2, &karung.bil3);
    scanf(" %c", &karung.huruf);

    // Switch untuk memeriksa dan mengeksekusi berdasarkan nilai karakter karung.huruf
    switch (karung.huruf)
    {
        case 'A':
            // Jika karung.huruf == 'A', maka eksekudi case ini
            printf("%d", ((karung.bil1 * karung.bil2) + (karung.bil2 * karung.bil3)));
            break;

        case 'B':
            // Jika karung.huruf == 'B', maka eksekudi case ini
            printf("%d", ((karung.bil1 * karung.bil2) / (karung.bil3)));
            break;

        case 'C':
            // Jika karung.huruf == 'C', maka eksekudi case ini
            printf("%d", ((karung.bil2 - karung.bil3) * (karung.bil1)));
            break;
    
        default:
            // Jika karung.huruf != 'A' atau 'B' atau 'C', maka eksekudi case default ini
            printf("%d", ((karung.bil1 + karung.bil2) - (karung.bil3)));
            break;
    }

    // Kembalikan nilai 0 ketika program berjalan sukses
    return 0;
}
