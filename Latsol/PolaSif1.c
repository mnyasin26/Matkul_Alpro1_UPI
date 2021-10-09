/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int masukan, i, j;

    scanf("%d", &masukan);

    int temp = masukan+2;

    for (i = 0; i < masukan-1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }

        for (j = i; j < masukan-1; j++)
        {
            printf(" ");
        }

        for (j = i; j < masukan*2; j++)
        {
            printf("*");
        }
        
        
        printf("\n");

    }

    for (i = 0; i < masukan-1; i++) {
        printf(" ");
    }

    for (i = 0; i < masukan*3; i++) {
        printf("*");
    }

    printf("\n");

    for (i = 0; i < masukan-1; i++)
    {
        for (j = 0; j < masukan-1; j++) {
        printf(" ");
        }

        for (j = masukan; j > i+1; j--)
        {
            printf("*");
        }

        for (j = 0; j < temp; j++)
        {
            printf(" ");
        }

        for (j = masukan; j > i+1; j--)
        {
            printf("*");
        }
        
        temp = temp + 2;
        printf("\n");
    }

    temp = temp - 2;
    
    for (i = 0; i < masukan; i++) {
        
        for (j = 0; j < masukan-1; j++) {
            printf(" ");
        }

        for (j = 0; j < i+1; j++)
        {
            printf("*");
        }

        for (j = temp; j > 0; j--)
        {
            printf(" ");
        }

        for (j = 0; j < i+1; j++)
        {
            printf("*");
        }

        temp = temp - 2;

        printf("\n");
    }
    
}