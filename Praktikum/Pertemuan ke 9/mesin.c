#include "header.h"

void pengelompokan(dataNilai mahasiswa[], int m, char a, int p, int q){
    int i;
    int counter = 1;
    printf("Predikat %c\n", a);
    printf("-----------------\n");
    for (i = 0; i < m; i++)
    {
        if ((mahasiswa[i].nilai >= p) && (mahasiswa[i].nilai <= q))
        {
            printf("%d. %s\n", counter++, mahasiswa[i].nama);
        }
        
    }
    
}