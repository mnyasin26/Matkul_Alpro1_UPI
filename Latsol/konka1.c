#include <stdio.h>

int main () {
    char masukan[6];
    int i, x = 0, y = 0;

    for (i = 0; i < 6; i++)
    {
        scanf("%c", &masukan[i]);
        getchar();
        
    }


    for (i = 0; i < 6; i +=2 )
    {
        if ((masukan[i+1] >= 48 && masukan[i+1] <= 57) && (masukan[i] < 48 || masukan[i] > 57))
        {
            x++;
        }
        if ((masukan[i] >= 48 && masukan[i] <= 57) && (masukan[i+1] < 48 || masukan[i+1] > 57))
        {
            y++;
        }
    }
    
    if (x == 3 || y == 3)
    {
        printf("kombinasi valid\n");
    } else {
        printf("kombinasi tidak valid\n");
    }

    return 0;
    
}