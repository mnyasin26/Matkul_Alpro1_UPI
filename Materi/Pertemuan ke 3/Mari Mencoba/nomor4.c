#include <stdio.h>
#include <math.h>

int main () {
    float a, temp, tpa;
    int dpn, blkg;

    scanf("%f", &a);

    dpn = a;
    temp = dpn;
    blkg = (a - dpn) * 100.00;

    tpa = a - temp * 100.00;

    printf("Nilai float: %f\n", a - temp * 100.00);

    printf("Nilai depan: %d\n", dpn);
    printf("Nilai belakang: %d\n", blkg);

    if (dpn % blkg == 0)
    {
        printf("Nilai depan koma 'adalah' kelipatan dari nilai belakang koma\n");
    } else {
        printf("Nilai depan koma 'bukan' kelipatan dari nilai belakang koma\n");
    }
    
    return 0;

}