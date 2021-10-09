#include <stdio.h>

int main () {
    int masukan;
    scanf("%d", &masukan);

    int x_two = masukan*2;
    int x_three = x_two*2-2;

    int i;
    int j;
    int k;

    int x = 1;

    for (i = 1; i <= x_two; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        

        for (k = x_three; k >= x; --k) {
            printf(" ");
        }

        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }

        for (j = 1; j < i; ++j)
        {
            printf("*");
        }

        for (k = x_three; k >= x; --k) {
            printf(" ");
        }

        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }

        printf("\n");
        x = x + 2;

        
    }

    for (i = 1; i <= x_two; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf(" ");
        }

        for (j = x_two; j >= i; --j)
        {
            printf(" ");
        }

        int temp1 = masukan-2;

        for (j = 1; j <= i+2*temp1; ++j)
        {
            if (i > masukan) {
                for (j = 1; j <= i+2*temp1; ++j) {
                    printf(" ");
                    
                }
                break;
            }
            printf("*");
            
        }

        

        for (j = x_two; j >= i; --j)
        {
            printf("*");
        }

        printf("\n");
    }
    
    

}