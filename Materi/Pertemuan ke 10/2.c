#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n][100];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }

    int spasi = 0; int j; int counter = 0;
    for (i = 0; i < n; i++)
    {
        int l = 0;
        for (j = 0; j <= strlen(str[i]); j++)
        {
            int k;
            if (j==0)
            {
                for (k = 0; k < spasi; k++)
                {
                    printf(" ");
                }
            }
            
            
            
            if (j == strlen(str[i])/2)
            {
                printf(" ");
            }
            else
            {
                printf("%c", str[counter][l++]);
            }
        }
        spasi += strlen(str[i])/2;
        counter+=2;
        i++;
        printf("\n");

        if (i != n)
        {
            for (j = 0; j < strlen(str[i]); j++)
            {
                int k;
                for (k = 0; k < spasi; k++)
                {
                    printf(" ");
                }
                printf("%c\n", str[i][j]);
                
            }
            spasi++;
        }
        
        
        
        
    }
    return 0;

}