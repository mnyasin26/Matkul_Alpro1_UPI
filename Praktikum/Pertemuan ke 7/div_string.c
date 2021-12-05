#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char bagi1[100] = {'\0'};
    char bagi2[100] = {'\0'};

    scanf("%s", &str);

    int i; int index = 0; int str_len = strlen(str)-1;
    for (i = str_len; i > str_len/2; i--)
    {
        bagi1[index++] = str[i];
    }
    index = 0;
    for (i = str_len/2; i >= 0; i--)
    {
        bagi2[index++] = str[i];
    }
    
    printf("%s\n%s", bagi1, bagi2);
    
    return 0;
}