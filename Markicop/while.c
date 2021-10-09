#include <stdio.h>

int main () {
    int spasi = 0, i = 30, x = 0;


    while (i > 0)
    {
        spasi++;
        i -= (i * 2) + 1;
        x++;

        printf("%d", spasi);
    }
    printf("%d", spasi);
    
}