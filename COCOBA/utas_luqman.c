#include <stdio.h>
#include <string.h>

int main(){
    int m, n;
    printf("Masukkan tinggi tumpukan: ");
    scanf("%d",&m);

    printf("Masukkan banyak tumpukan: ");
    scanf("%d",&n);

    int arr[m][n];
    int stat[n];
    int i, j;  int max = 0;


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Masukkan berat benda pada baris ke-%d kolom ke-%d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    
    }




    for (i = 0; i < n; i++)
    {
        max = 0;
        for (j = 0; j < m; j++)
        {
            if (arr[j][i] >= max)
            {
                if (j == m-1)
                {
                    stat[i] = 1;
                }
                else
                {
                    stat[i] = 0;
                }
                max = arr[j][i];
                printf("max: %d ", max);
            }
            
            
            
        }
        
        
        
    }

    int k; int index = 0;
    for (i = 0; i < n; i++)
    {
        if (stat[i] == 0)
        {
            printf("Susunan tersebut tidak memenuhi perintah Tuan Dip.\n");
            stat[0] = 2;
            
            break;
        }
    }

    
    if (stat[0] != 2)
    {
        printf("Susunan tersebut memenuhi perintah Tuan Dip.\n");
    }
    
    
    
    
    


}