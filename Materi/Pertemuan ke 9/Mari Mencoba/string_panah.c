#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", &str);

    int i, j; int max = n/2;
    for (i = 0; i < strlen(str); i++)
    {
        if (i <= max)
        {
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            
            
        }
        else
        {
            for (j = max; j > 1; j--)
            {
                printf(" ");
            }
            max--;
            
        }
        printf("%c\n", str[i]);
        
    }
    
    return 0;
}