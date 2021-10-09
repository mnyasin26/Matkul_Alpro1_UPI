#include <stdio.h>

int main()
{
    int i, a = 0, b = 0;
    char n;
    char genap[3];
    char ganjil[3];

    for (i = 0; i < 6; i++)
    {
        scanf("%c", &n);
        getchar();
        

        if (97 <= n && n <= 122)
        {
            genap[a++] = n;
            
        }
        if (49 <= n && n <= 57)
        {
            ganjil[b++] = n;
        }
    }
    

    if (a == 3 && b == 3)
    {
        for (i = 0; i < 3; i++)
        {

            printf("%c\n%c\n", genap[i], ganjil[i]);
        }
    } else {
        printf("tidak valid\n");
    }
}