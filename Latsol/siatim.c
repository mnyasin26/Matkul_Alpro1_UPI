/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>
#include <string.h>

int main () {
    // Dictionary
    char sub[1000], masukan[1000];
    int i, j, k;
    int temp = 0;

    // Algoritma
    scanf("%s", sub);
    getchar();
    scanf("%s", masukan);
    getchar();

    for (i = 0; i < strlen(sub); i++)
    {
        for (j = 0; j < strlen(masukan); j++)
        {
            for (k = 0; k < strlen(sub); k++)
            {
                /* code */
            }
            
        }
        
    }
    

    /*
    switch (strlen(sub))
    {
        case 2:
            for (j = 0; j < strlen(masukan); j++)
                {
                    if (sub[0] == masukan[j] && sub[1] == masukan[j+1])
                    {
                        temp += 1;
                    }
                }
                printf("%d\n", temp);
            break;

        case 3:
            for (j = 0; j < strlen(masukan); j++)
                {
                    if (sub[0] == masukan[j] && sub[1] == masukan[j+1] && sub[2] == masukan[j+2])
                    {
                        temp += 1;
                    }
                }
                printf("%d\n", temp);
            break;

        case 4:
            for (j = 0; j < strlen(masukan); j++)
                {
                    if (sub[0] == masukan[j] && sub[1] == masukan[j+1] && sub[2] == masukan[j+2] && sub[3] == masukan[j+3])
                    {
                        temp += 1;
                    }
                }
                printf("%d\n", temp);
            break;

        case 5:
            for (j = 0; j < strlen(masukan); j++)
                {
                    if (sub[0] == masukan[j] && sub[1] == masukan[j+1] && sub[2] == masukan[j+2] && sub[3] == masukan[j+3] && sub[4] == masukan[j+4])
                    {
                        temp += 1;
                    }
                }
                printf("%d\n", temp);
            break;
    
    default:
        printf("%d\n", 0);
        break;
    }
    */



    
    
    return 0;

}