#include <stdio.h>

typedef struct
{
    int x;
    int y;
} titik;

int main () {
    titik p1;

    printf("masukan koordinat titik x:\n");
    scanf("%d", &p1.x);
    printf("masukan koordinat titik y:\n");
    scanf("%d", &p1.y);

    printf("titik yang Anda masukkan:\n");
    printf("x: %d\n", p1.x);
    printf("y: %d\n", p1.y);

    return 0;
    
}