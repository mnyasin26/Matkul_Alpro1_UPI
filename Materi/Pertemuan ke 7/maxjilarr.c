#include <stdio.h>

int main() {
    int masukan [10];
    int hasil_max_ganjil;
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &masukan[i]);
    }

    hasil_max_ganjil = masukan[0];

    for (i = 0; i < 10; i++)
    {
        if ((hasil_max_ganjil < masukan[i]) && (masukan[i]%2 == 1))
        {
            hasil_max_ganjil = masukan[i];
        }
        
    }
    
    printf("Nilai maksimum angka ganjil pada array adalah: %d", hasil_max_ganjil);

    return 0;
}