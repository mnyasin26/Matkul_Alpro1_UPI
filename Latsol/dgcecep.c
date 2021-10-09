/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int n;
    int m;
    int p;
    int r;

    int i;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);
    scanf("%d", &r);

    int temp = n;

    for (i = 1; i <= r; ++i) {
        temp = temp + (temp/2)*m;
        if (i >= 3)
        {
            temp = temp - p;
        }
        
    }

    printf("%d\n", temp);
    
}