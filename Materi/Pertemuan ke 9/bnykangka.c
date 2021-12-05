#include <stdio.h>
#include <string.h>

int main () {
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", &str);

    int i; int jumlah = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            jumlah++;
        }
        
    }
    
    printf("%d", jumlah);
    return 0;
}