#include "header.h"

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int hasil = maxarr(n, arr)*minarr(n, arr);
    for (i = 0; i < hasil; i++)
    {
        printf("Terima Kasih untuk Tetap Semangat\n", hasil);
    }
    
    return 0;
}