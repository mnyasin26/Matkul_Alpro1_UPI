#include <stdio.h>

typedef struct
{
    int x;
    int y;
}titik;


int main() {
    int n;
    int i;
    scanf("%d", &n);
    titik arr[n];

    int penghitung = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].x);
        scanf("%d", &arr[i].y);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i].x);
        printf("%d\n", arr[i].y);
    }
    

    while (penghitung < n)
    {
        if (arr[penghitung].x % 2 == 1)
        {
            printf("x ganjil: %d\n", arr[penghitung].x);
        }

        if (arr[penghitung].y > arr[penghitung].x)
        {
            printf("y > x, y: %d\n", arr[penghitung].y);
        }

        penghitung++;
    }
    
}