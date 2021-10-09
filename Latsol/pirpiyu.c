#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char masukan[100];
    int jumlah_baris = 0;
    int jmlkr;
    int i = 1;
    int k;
    int l = 1;
    int x = 0;

    int m;

    scanf("%s", &masukan);
    getchar();

    jmlkr = strlen(masukan);
    /*
    for (i = 1; i <= jmlkr; ++i, ++i,)
    {
        jumlah_baris = jumlah_baris + 1;
        jmlkr = -
        printf("%d\n", i);
    } */

    while (jmlkr >= 1)
    {
        
        jmlkr = jmlkr - (i);
        i = i + 2;
        jumlah_baris = jumlah_baris + 1;

    }

    k = jumlah_baris;
    

    for (i = 1; i <= jumlah_baris; ++i)
    {
        

        for (m = 0; m < k-1; m++)
        {
            printf(" ");
        }
        

        for (m = 1; m <= l; m++)
        {
            if (x >= strlen(masukan))
            {
                break;
            }
            
            
            printf("%c", masukan[x]);
            x = x + 1;
            
        }

        k = k - 1;
        l = l + 2;
        
        /*
        if (i == jumlah_baris)
        {
            
        } else {
            printf(" \n");
        }
        */

        printf("\n");
        
    }

    return 0;
    
}