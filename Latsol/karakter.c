#include <stdio.h>
#include <string.h>

int main () {
    char masukan[1000];
    int i, j, n, x = 0, y = 0;

    scanf("%d", &n);
    //printf("nilai n: %d\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", &masukan);
        getchar();
        //printf("nilai masukan: %s\n", masukan);
        for (j = 0; j < strlen(masukan); j++)
        {
            //printf("nilai banyak karakter: %d\n", strlen(masukan));
            if (masukan[j] <= 57 && masukan[j] >= 48)
            {
                x++;
            }
        }

        if (x >= 2)
        {
            y++;
        }

        x = 0;
        
    }

    //printf("nilai y: %d\n", y);

    if (y >= 3)
    {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}