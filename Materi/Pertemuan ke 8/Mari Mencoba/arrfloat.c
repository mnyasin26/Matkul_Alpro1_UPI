#include <stdio.h>
#include <math.h>



int main() {
    int n, i;
    int depan;
    int belakang;
   

    
    

    
    scanf("%d", &n);
    float arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    i = 0;

    while (i < n)
    {
        
        depan = arr[i];

        
        
        if ((depan % 2 == 0) && (arr[i] % 2 == 0))
        {
            printf("Float ini depan dan belakang koma adalah genap: %f", arr[i]);
        }
        i++;
    }
    
    return 0;
}