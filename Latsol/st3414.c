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

    int j, x = 0, y;
    if (((v*k)%2) == 0)
    {
        while (x < strlen(arr))
        {
            for (i = 0; i < 4; i++)
            {
                if (x < strlen(arr))
                {
                    for (j = 0; j < i; j++)
                    {
                        printf(" ");
                    }
                    
                    printf("%c", arr[x++]);
                    if (x != strlen(arr))
                    {
                        printf("\n");
                    }
                }
                
            }

            for (i = 0; i < 4; i++)
            {
                if (x < strlen(arr)) {
                    printf("%c", arr[x++]);
                }
            }

            printf("\n");
        
        }
    }
    else
    {
        while (x < strlen(arr))
        {
            for (i = 0; i < 3; i++)
            {
                if (x < strlen(arr)) {
                    for (j = 0; j < i; j++)
                    {
                        printf(" ");
                    }
                    
                    printf("%c", arr[x++]);

                    if (x != strlen(arr))
                    {
                        printf("\n");
                    }
                }
                
             
            }

            for (i = 0; i < 3; i++)
            {
                if (x < strlen(arr)) {
                    printf("%c", arr[x++]);
                }
            }

            
            
            printf("\n");
            
            
            
        }
    }
    
    
    return 0;
}