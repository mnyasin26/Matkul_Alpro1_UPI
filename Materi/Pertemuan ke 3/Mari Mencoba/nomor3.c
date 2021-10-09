#include <stdio.h>

int main () {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a % 2 != 0 && b & 2 != 0)
    {
        printf("[ganjil2] -> hasil perkalian: %d", a * b);
    } else if (a % 2 == 0 && b % 2 == 0)
    {
        printf("[genap2] -> hasil penjumlahan: %d", a + b);
    } else {
        printf("bilangan pertama: %d, bilangan kedua: %d", a, b);
    }
    
    return 0;
}