#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    scanf("%s", arr);

    int i, v = 0, k = 0;
    for (i = 0; i < strlen(arr); i++)
    {
        if ((arr[i] == 'a') || (arr[i] == 'i') || (arr[i] == 'u') || (arr[i] == 'e') || (arr[i] == 'o') ||
            (arr[i] == 'A') || (arr[i] == 'I') || (arr[i] == 'U') || (arr[i] == 'E') || (arr[i] == 'O'))
        {
            v++;
        }
        else
        {
            k++;
        }
    }

    int j, x = 0;
    if (((v*k)%2) == 0)
    {
        for (i = 0; i < strlen(arr); i++)
        {
            printf("%c", arr[i]);
            if ((i%4) == 3)
            {
                printf("\n");
            }
            
        }
        
    }
    else
    {
        for (i = 0; i < strlen(arr); i++)
        {
            printf("%c", arr[i]);
            if (((i%3) == 2) && (i != strlen(arr)-1))
            {
                printf("\n");
            }
            
        }
    }
    
    printf("\n");
    return 0;
}