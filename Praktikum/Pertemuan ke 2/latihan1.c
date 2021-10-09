#include <stdio.h>

int main () {
    // membuat 3 variabel untuk menampung nilai 3 kotak
    int a, b, c;

    // meminta masukan user lalu dimasukkan sesuai label kotak
    printf("Kotak A: ");
    scanf("%d", &a);
    printf("Kotak B: ");
    scanf("%d", &b);
    printf("Kotak C: ");
    scanf("%d", &c);

    // Langkang-langkah untuk menentukan kotak terbanyak dan apakah jumlahnya genap atau ganjil
    if ((a > b) && (a > c))
    {
        if (a % 2 == 0)
        {
            printf("Apel terbanyak terdapat pada kotak A dan jumlahnya genap\n");
        } else 
        {
            printf("Apel terbanyak terdapat pada kotak A dan jumlahnya ganjil\n");
        }
        
    } else if ((b > a) && (b > c))
    {
        if (b % 2 == 0)
        {
            printf("Apel terbanyak terdapat pada kotak B dan jumlahnya genap\n");
        } else 
        {
            printf("Apel terbanyak terdapat pada kotak B dan jumlahnya ganjil\n");
        }
    } else if ((c > a) && (c > b))
    {
        if (c % 2 == 0)
        {
            printf("Apel terbanyak terdapat pada kotak C dan jumlahnya genap\n");
        } else 
        {
            printf("Apel terbanyak terdapat pada kotak C dan jumlahnya ganjil\n");
        }
    } else {
        printf("Ada 2 kotak atau lebih yang jumlahnya sama\n");
    }
    
    // jika program sukses akan mengembalikan nilai 0
    return 0;

}