#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    scanf("%s", &str);

    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' ||
            str[i] == 'o')
        {
            str[i] = (i%10)+'0';
        }
    }
    printf("%s", str);

    return 0;
}