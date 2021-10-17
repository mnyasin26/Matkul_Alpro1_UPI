#include <stdio.h>

/*
int main() {
    int masukan, i, j;

    scanf("%d", &masukan);

    for (i = 0; i < masukan; i++)
    {
        for (j = masukan; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
*/

/*
int main() {
    int masukan, i, j;

    scanf("%d", &masukan);

    for (i = 0; i < masukan; i++)
    {
        for (j = masukan-1; j > i; j--)
        {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}
*/

/*
int main() {
    int masukan, i, j;

    scanf("%d", &masukan);

    for (i = 0; i < masukan; i++)
    {
        for (j = masukan-1; j > i; j--)
        {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }

    for (i = 0; i < masukan-1; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}
*/

int main() {
    int masukan, i, j;

    scanf("%d", &masukan);

    for (i = 0; i < masukan; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("0");
        }

        printf("1");
        
        for (j = masukan-1; j > i; j--)
        {
            printf("0");
        }
        
        printf("\n");
    }
    
    
}