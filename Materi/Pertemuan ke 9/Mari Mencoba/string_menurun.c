#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", &str);

    int i, j, k = 0; 
    for (i = n-1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        printf("%c\n", str[k++]);

        
    }
    
    return 0;
}