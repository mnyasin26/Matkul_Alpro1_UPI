/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int arr[6];
    int i, temp, jam, menit, detik;

    for (i = 0; i <= 5; ++i)
    {
        scanf("%d", &arr[i]);

    }

    temp = (arr[0]*arr[3]) + (arr[1]*arr[4]) + (arr[2]*arr[5]);

    jam = temp/60;
    menit = temp - jam*60;
    detik = 0;

    char enol, enol1, enol2;
    
    if (jam < 10)
    {
       enol = '0';
    } else {
        enol = 0;
    }

    if (menit < 10)
    {
       enol1 = '0';
    } else {
        enol1 = 0;
    }

    if (detik < 10)
    {
       enol2 = '0';
    } else {
        enol2 = 0;
    }
    

    printf("%02d:%02d:%02d\n", jam, menit, detik);
    return 0;
}