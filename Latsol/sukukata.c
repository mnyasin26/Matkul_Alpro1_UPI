#include <stdio.h>
#include <string.h>

int main() {
    char masukan[1000];
    int n;
    int i, j;
    int x, y = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        x = 0;

        scanf("%s", &masukan);

        for (j = 0; j < strlen(masukan); j++)
        {
            if (masukan[j] == 'b')
            {
                if (j != strlen(masukan) - 1)
                {
                    if (masukan[j+1] == 'a')
                    {
                        x++;
                    }
                    
                }
                
            }
            
            
        }
        
        if (x >= 2)
            {
                y++;
            }

    }
    
    if (y >= 3)
    {
        printf("yes\n");
    } 
    else
    {
        printf("no\n");
    }
    
    return 0;
}