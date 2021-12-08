#include <stdio.h>
#include <string.h>

int i, j, k;
int spasi = 0;

void input(int n, char arr[n][301]) {
    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
    
}

void print_arr(int n, char arr[n][301]) {
    for (i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
}

void keluaran(int n, char arr[n][301]) {
    for (i = 0; i < n; i++)
    {
        if ((i%2) == 0)
        {
            for (j = 0; j < spasi; j++)
            {
                printf(" ");
            }
            printf("%s\n", arr[i]);

            if (strlen(arr[i])%2 == 1)
            {
                spasi += strlen(arr[i])/2;
            }
            else
            {
                spasi += (strlen(arr[i])/2);
            }
            
        }
        else
        {
            for (j = strlen(arr[i])-1; j >= 0 ; j--)
            {
                for (k = 0; k < spasi; k++)
                {
                    printf(" ");
                }

                switch (arr[i][j])
                {
                    case 'a':
                        arr[i][j] = '4';
                    break;

                    case 'e':
                        arr[i][j] = '3';
                    break;

                    case 'i':
                        arr[i][j] = '1';
                    break;

                    case 'o':
                        arr[i][j] = '0';
                    break;
                
                    default:
                    break;
                }
                
                printf("%c\n", arr[i][j]);
            }
        }

        
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][301];

    input(n, arr);
    
    keluaran(n, arr);

    return 0;
}