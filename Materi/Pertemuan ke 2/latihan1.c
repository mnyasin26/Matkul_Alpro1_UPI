#include <stdio.h>

int main () {
    int bilSatu;//Membuat vatiabel untuk menampung bilangan pertama
    int bilDua;//Membuat vatiabel untuk menampung bilangan kedua
    //Memnita masukan dari user untuk kedua bilangan
    printf("masukkan bilangan pertama:\n");
    scanf("%d", &bilSatu);
    printf("masukkan bilangan kedua:\n");
    scanf("%d", &bilDua);
    /* Membuat variabel untuk menampung hasil
    pertambahan bilangan pertama dan kedua */
    int hasil = bilSatu + bilDua;
    // Menampilkan hasil pertambahan kedua bilangan
    printf("hasil penambahan adalah %d\n", hasil);
    return 0;
}