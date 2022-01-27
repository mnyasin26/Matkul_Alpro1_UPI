#include <stdio.h>
int scanner(int len, int arr[len], int type) {
    int temp = 0;    

    for (int i = 0; i < len; i++)
    {
        if (arr[i]%2 == type)
        {
            if (temp != 0)
            {
                printf(" ");
            }
            
            printf("%d", arr[i]);
            temp++;
        }
    }

    return temp;
}

int main(){
    int i;
    int n, m;
    int temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;

    scanf("%d", &n);
    int arr1[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int arr2[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    temp1 = scanner(n, arr1, 1);
    if (temp1 != 0)
    {
        printf(" ");
    }
    temp2 = scanner(m, arr2, 1);
    if (temp1 != 0 || temp2 != 0)
    {
        printf("\n");
    }
    
    temp3 = scanner(n, arr1, 0);
    if (temp3 != 0)
    {
        printf(" ");
    }
    temp4 = scanner(m, arr2, 0); 
    
    if (temp3 != 0 || temp4 != 0)
    {
        printf("\n");
    }

    if (temp1 == 0 && temp2 == 0 && temp3 == 0 && temp4 == 0)
    {
        printf("\n");
    }
        

    return 0;
}