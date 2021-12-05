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

    int j; int sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strlen(str[i]); j++)
        {
            sum += str[i][j];
            //printf("%d\n", sum);
        }
        sum += 27;
    }

    if (sum%2 == 1)
    {
        for (i = 0; i < n; i++)
        {
            for (j = strlen(str[i])-1; j >= 0 ; j--)
            {
                printf("%c", str[i][j]);
            }
        }
        
    } 
    else
    {
        for (i = n-1; i >= 0; i--)
        {
            printf("%s ", str[i]);
        }
    }
    
    
}