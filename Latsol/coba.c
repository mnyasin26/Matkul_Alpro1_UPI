/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int n;
    int m;
    int k;
    int h;
    int r;

    scanf ("%d", &n);
    scanf ("%d", &m);
    scanf ("%d", &k);
    scanf ("%d", &h);
    scanf ("%d", &r);

    printf ("%d\n", ((n*100 + m*150 + k*75 + h*175)*r));
    
    return 0;
}