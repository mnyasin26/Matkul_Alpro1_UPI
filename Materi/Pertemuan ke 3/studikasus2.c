#include <stdio.h>

int main () {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a % 2 == 0)
    {
        printf("angka pertama adalah angka genap\n");
    } else {
        printf("angka pertama adalah angka ganjil\n");
    }
 
    if (b % 2 == 0)
    {
        printf("angka kedua adalah angka genap\n");
    } else {
        printf("angka kedua adalah angka ganjil\n");
    }
    
    return 0;
}