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

    int hasil = jumlaharr(n, arr);
    printf("%d", hasil);

    return 0;
}