/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>
#include <string.h>

int main () {
    // Dictionary --------------
    char pzz1[1000], pzz2[1000];
    char temp[1];
    int ptrn1, ptrn2;
    int i, j, k;
    

    // Algoritma --------------

    // Input
    scanf("%s", &pzz1);
    getchar();

    scanf("%d", &ptrn1);

    scanf("%s", &pzz2);
    getchar();

    scanf("%d", &ptrn2);

    for (i = 0; i < ptrn1; i++)
    {
        temp[0] = pzz1[0];

        for (j = 0; j < strlen(pzz1); j++)
        {
            if (j == strlen(pzz1)-1)
            {
                pzz1[j] = temp[0];
            } else {
                pzz1[j] = pzz1[j+1]; 
            }
        }
        printf("ini pzz 1: %s\n", pzz1);
    }

    for (i = 0; i < ptrn2; i++)
    {
        temp[0] = pzz2[strlen(pzz2)-1];

        for (j = strlen(pzz2)-1; j >= 0; j--)
        {
            if (j == 0)
            {
                pzz2[j] = temp[0];
            } else {
                pzz2[j] = pzz2[j-1]; 
            }
        }
        printf("ini pzz 2: %s\n", pzz2);
    }

    j = 0;
    
    for (i = 0; i < strlen(pzz1); i++)
    {
        printf("%c", pzz1[i]);
        printf("%c", pzz2[i]);
    }
    
    printf("\n");
    return 0;
}