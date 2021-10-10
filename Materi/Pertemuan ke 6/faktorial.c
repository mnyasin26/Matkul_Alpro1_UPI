#include <stdio.h>

int main() {
    int masukan;
    int i;
    int jumlah_hasil = 1;

    scanf("%d", &masukan);

    for (i = 1; i <= masukan; i++)
    {
        printf("%d x %d = %d\n", jumlah_hasil, i, jumlah_hasil*i);
        jumlah_hasil = jumlah_hasil*i;
    }
    
}