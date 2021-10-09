#include <stdio.h>
#include <string.h>


int main()
{
    char str[100];
    int i, spasi;
    scanf("%s", &str);
    getchar();
    int panjangstring = strlen(str);
    //printf("%d", strlen(str));
    


    i = 0;
    spasi = 0;
    while (panjangstring > 0)
    {
        spasi++;
        panjangstring -= (i * 2) + 1;
        i++;
    }

    int awal = 0;
    for (int i = 0; i < spasi; i++)
    {
        for (int j = spasi - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int j = awal; j < ((i * 2) + 1) + awal; j++)
        {
            if (j < strlen(str))
            {
                printf("%c", str[j]);
            }
            else
            {
                break;
            }
        }
        printf("\n");
        awal += (i * 2) + 1;
        panjangstring -= (i * 2) + 1;
    }
    //printf("%d %d %d", spasi, panjangstring, i);
    return 0;
}