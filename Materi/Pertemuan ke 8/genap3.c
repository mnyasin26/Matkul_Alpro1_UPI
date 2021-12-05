#include <stdio.h>

int main(){
    int n;
    int i;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int genap = 0;
    int penghitung = 0;

    while (genap < 3 && penghitung < n)
    {
        if (arr[penghitung]%2 == 0)
        {
            genap++;
            printf("Nilkai genap: %d\n", arr[penghitung]);
            penghitung++;
        }
        else
        {
            penghitung++;
        }
        
    }
    
    
}