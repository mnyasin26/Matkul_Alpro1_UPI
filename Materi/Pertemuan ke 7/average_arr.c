#include <stdio.h>

int main() {
    int masukan [10];
    int hasil;
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &masukan[i]);
    }

    hasil = 0;

    for (i = 0; i < 10; i++)
    {
        hasil = hasil + masukan[i];
    }
    
    printf("Rata-rata arr: %0.2f", (float)hasil/10.0);

    return 0;
}