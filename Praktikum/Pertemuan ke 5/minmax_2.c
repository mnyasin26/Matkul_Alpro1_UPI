#include <stdio.h>

int main() {
    int n;
    int i, j;
    
    scanf("%d", &n);

    int masukan[n];
    int temp = 0;
    int max_ke_2, min_ke_2;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &masukan[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (masukan[j] < masukan[j+1] && (j != (n-1)))
            {
                temp = masukan[j];
                masukan[j] = masukan [j+1];
                masukan[j+1] = temp;
            }
            
        }
    }

    for (i = 0; i < n; i++)
    {
        if (i == 1)
        {
            min_ke_2 = masukan [i];
        }

        if (masukan[i] == masukan[1]-1)
        {
            
        }
        
        
    }
    
    
    printf("Nilai minimum kedua   : %d\n", masukan[n-1]);
    printf("Nilai maksimum kedua  : %d\n", masukan[1]);

    return 0;
}