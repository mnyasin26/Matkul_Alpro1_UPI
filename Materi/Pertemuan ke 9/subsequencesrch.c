#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", &str);

    int i; int jumlah = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'k' && str[i+1] == 'a')
        {
            jumlah++;
        }
        
    }

    printf("jumlah suku kata 'ka' adalah: %d", jumlah);
    
    return 0;
}