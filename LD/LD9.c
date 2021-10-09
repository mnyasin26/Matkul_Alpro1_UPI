#include <stdio.h>
int main () {
    int a;
    float x;
    int b;

    printf ("Contoh membaca dan menulis, ketik nilai integer : ");
    scanf ("%d", &a);
    printf ("Nilai yang dibaca : %d \n", a);

    printf ("ketik nilai sebuah bilangan riil: ");
    scanf ("%f", &x);
    printf ("Nilai yang dibaca : %f \n", x);

    scanf("%d", &b);

    return 0;
}