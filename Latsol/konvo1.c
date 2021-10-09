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
        if ((masukan[i+1] == 'a' || masukan[i+1] == 'i' || masukan[i+1] == 'u' || masukan[i+1] == 'e' || masukan[i+1] == 'o') && (masukan[i] != 'a' && masukan[i] != 'i' && masukan[i] != 'u' && masukan[i] != 'e' && masukan[i] != 'o'))
        {
            x++;
        }
        if ((masukan[i] == 'a' || masukan[i] == 'i' || masukan[i] == 'u' || masukan[i] == 'e' || masukan[i] == 'o') && (masukan[i+1] != 'a' && masukan[i+1] != 'i' && masukan[i+1] != 'u' && masukan[i+1] != 'e' && masukan[i+1] != 'o'))
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