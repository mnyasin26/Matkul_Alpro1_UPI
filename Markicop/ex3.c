#include<stdio.h>
#include<string.h>

int main()
{
    char kodeawal[100] = {'\0'};
    char kode[100] = {'\0'};
    char katakunci[20] = {'\0'};

    scanf("%s", kodeawal);

    int a=0;
    int x=0;
    do
    {
        x += 1;
        a++;
    }while(kodeawal[a] != '!');

    int z = strlen(kodeawal);
    int b = x+2;
    int y = 0;
    do
    {
        y += 1;
        b++;
    }while((kodeawal[b] != '!') && (b<=z));
    
    strncpy(kode, kodeawal, x);
    strncpy(katakunci, &kodeawal[x+1], y);

    int status = 0;
    int j;
    int i=0;
    while(i < y)
    {
        j = 0;
        while(j < x)
        {
            if(katakunci[i] == kode[j])
            {
                status += 1;
            }
            else if(katakunci[i] != kode[j])
            {
                status = 0;
            }
            
            if(status != 0)
            {
                int k = j;
                while(k<x)
                {
                    kode[k] = kode[k+1];
                    k++;
                }
                j--;
            }
            printf("Kode: %s ", kode);
            //printf("%d", status);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("Tanpa kunci: %s\n", kode);
}