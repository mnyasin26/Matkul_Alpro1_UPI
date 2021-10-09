/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int masukan1[3];
    int masukan2[3];
    int i, j;

    int x = 0;
    int y = 0;

    int temp[3] = {0};

    for (i = 0; i < 3; ++i) {
        scanf("%d", &masukan1[i]);
    }
    for (i = 0; i < 3; ++i) {
        scanf("%d", &masukan2[i]);
    }

    for (i = 0; i < 3; ++i) {
        for (j = 0; j < 3; ++j) {


            if (masukan1[j]%masukan2[i] == 0)
            {
                
                temp[i] += 1;
                
            }
            
        }
        
    }

    for (i = 0; i < 3; ++i) {
        if (temp[i] >= 2)
        {
            ++x;
            
        }
    }

    if (x > 0)
    {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    
    return 0;

}