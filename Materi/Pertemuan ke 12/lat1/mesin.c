#include "header.h"

int jumlaharr(int n, int arr[]) {
    int i; int hasil = 0;
    for (i = 0; i < n; i++)
    {
        hasil += arr[i];
    }

    return hasil;
}