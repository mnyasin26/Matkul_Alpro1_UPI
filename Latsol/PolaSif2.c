#include <stdio.h>

int main () {

    int masukan, i, j, x = 0;

    scanf("%d", &masukan);

    
    int preprocessing = 3;
    
    for (i = 2; i < masukan; i++)
    {
        preprocessing = masukan+x;
        x++;
    }

    int temp = masukan+2;
    int temp2 = masukan+1;

    int temp_pre = preprocessing;
    
    
    
    
    for (j = 0; j < masukan; j++) {
            printf(" ");
        }

    for (j = 0; j < masukan; j++) {
            printf("*");
        }

    for (j = 0; j < preprocessing+1; j++) {
            printf(" ");
        }

    for (j = 0; j < masukan; j++) {
            printf("*");
        }

    printf("\n");
        
    for (i = 1; i < masukan; i++)
    {
        for (j = i; j < masukan-1; j++)
        {
            printf(" ");
        }

        for (j = 0; j < temp; j++)
        {
            printf("*");
        }

        for (j = 0; j < temp_pre+2; j++) {
            printf(" ");
        }
         
        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }

        temp_pre++;
        temp++;
        printf("\n");
        
    }

    temp_pre = preprocessing;
    temp = masukan + 2;

    for (i = 1; i < masukan; i++) {
        
        for (j = 0; j < temp-2; j++) {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }

        for (j = temp_pre; j > 0; j--)
        {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }

        temp_pre = temp_pre - 2;
        temp = temp + 1;
        printf("\n");
    }

    temp = masukan*2-1;
    temp_pre = preprocessing;

    for (j = 0; j < temp; j++) {
            printf(" ");
        }

    for (j = 0; j < temp_pre+2; j++) {
            printf("*");
        }

    printf ("\n");

    temp = masukan;
    temp2 = masukan;

    for (i = 0; i < masukan; i++) {
        
        for (j = temp; j > 0; j--) {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }

        for (j = 0; j < temp_pre; j++)
        {
            printf(" ");
        }

        for (j = 0; j < masukan; j++)
        {
            printf("*");
        }

        temp_pre = temp_pre + 2;
        temp = temp - 1;
        printf("\n");
    }


    
    
    
}