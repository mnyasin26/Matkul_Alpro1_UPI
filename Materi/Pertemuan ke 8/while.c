#include <stdio.h>

int main() {
    int n;
    int i;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int penghitung = 0;
    int ketemu = 0;

    while (ketemu == 0 && penghitung < n)
    {
        if (arr[penghitung] == 999)
        {
            ketemu = 1;
            printf("%d\n", arr[penghitung]);
            printf("Angka 999 ditemukan!\n");
        }
        else
        {
            penghitung++;
            printf("%d\n", arr[penghitung]);
        }
    }

    /*
    if (ketemu == 1)
    {
        printf("Angka 999 ditemukan!");
    }
    else
    {
        printf("Angka 999 tidak ditemukan!");
    }
    */
    
    return 0;
    
}