#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n][100];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }

    for (i = 0; i < n-(n/2); i++)
    {
        for (j = n-(n/2); j < n; j++)
        {
            for (k = 0; k < strlen(str[j]); k++)
            {
                printf("%c", str[i][j]);
            }
            printf(" ");
        }
        printf("%s ", str[i]);
    }
    printf("%d\n", i);
    for (j = i-1; j < n; j++)
    {
        for (k = 0; k < strlen(str[j]); k++)
        {
            printf("%c", str[i][j]);
        }
        printf(" ");
    }
    
    
    
}