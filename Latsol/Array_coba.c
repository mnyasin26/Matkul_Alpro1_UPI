#include <stdio.h>

int main () {
    int arr[6];
    int arrr[6];
    int x = 0;
    int y = 0;
    int j;


    int temp[2][3];
    
    int i = 0;
    for (i = 0; i <= 5; ++i)
     {
         scanf ("%d", &arr[i]);
     }
    
    printf ("\n");

    for (i = 0; i <= 5; ++i)
     {
         printf ("%d ", arr[i]);
     }

    for (i = 0; i <= 5; ++i)
     {
         arrr[i] = arr[i];
     }

     printf ("\n");

    for (i = 0; i <= 5; ++i)
     {
         printf ("%d ", arrr[i]);
     }
    printf ("\n");

    for (j = 0; j <= 5; ++j) {
        
        if ((arrr[j]%2) == 0) {
            temp[0][x] = arrr[j];
            
            
            
            ++x;
        } else {
            temp[1][y] = arrr[j];
            

            ++y;
        }

        
        
        
    }

    printf ("\n");

    for (i = 0; i <= 2; ++i)
     {
         printf ("%d ", temp[0][i]);
     }

    printf ("\n");

     for (i = 0; i <= 2; ++i)
     {
         printf ("%d ", temp[1][i]);
     }

     printf ("\n");
     

    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}