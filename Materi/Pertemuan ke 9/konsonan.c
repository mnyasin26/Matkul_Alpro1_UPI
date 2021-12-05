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
        if ((str[i] != 'a') && (str[i] != 'i') && (str[i] != 'u') &&
            (str[i] != 'e') && (str[i] != 'o'))
        {
            jumlah++;
        }
        
    }
    
    printf("Jumlah huruf konsonan adalah: %d", jumlah);

    return 0;
}
