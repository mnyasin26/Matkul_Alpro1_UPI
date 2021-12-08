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
            for (j = 0; j < strlen(arr[i]) ; j++)
            {
                for (k = 0; k < spasi; k++)
                {
                    printf(" ");
                    
                }
                spasi++;
                printf("%c\n", arr[i][j]);
            }
            
        }
        else
        {
            for (k = 0; k < spasi; k++)
            {
                printf(" ");
            }

            for (j = strlen(arr[i])-1; j >= 0 ; j--)
            {
                printf("%c", arr[i][j]);
            }

            printf("\n");
            spasi += strlen(arr[i]);
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