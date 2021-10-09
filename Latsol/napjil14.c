/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int masukan[6];
    int i = 0;
    int x = 0;
    int y = 0;
    int j = 0;

    
    int temp[2][3];
    
    

    for (i = 0; i <= 5; ++i)
    {
        scanf("%d", &masukan[i]);
    }

    
    
    for (j = 0; j <= 5; ++j) {
        
        if ((masukan[j]%2) == 0) {
            temp[0][x] = masukan[j];
            ++x;
        } else {
            temp[1][y] = masukan[j];
            ++y;
        }

    }   
    /*for (j = 0; j <= 5; ++j) {
        if (masukan[j]%2 == 0) {
            temp_genap[x] = masukan[j];
            ++x;
        } else {
            temp_ganjil[y] = masukan[j];
            ++y;
        }
    }*/


   
    
    

    if (x > 3 || y > 3) {
        printf("tidak valid\n");
    } else {
        for (i = 0; i <= 2; ++i)
        {
            printf("%d\n", temp[0][i]);
            printf("%d\n", temp[1][i]);
        } 
    }
    
    
    
}