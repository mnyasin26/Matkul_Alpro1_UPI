#include <stdio.h>

int jmlhBagi(int len, int arr1[len], int arr2[len], int position[len]){
    int temp = 0;
    int counter = 0;

    for (int i = 0; i < len; i++)
    {
        if (arr1[i]%arr2[i] == 0)
        {
            temp++;
            position[counter++] = i;
        }
        
    }

    return temp;
}

void input(int arr[], int len) {
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void output(int len, int arr[], int position[]) {
    int counter = 0;
    for (int i = 0; i < len; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }
        
        printf("%d", arr[position[counter++]]);
    }
}

int main(){
    int n;
    int hasil_len;
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];
    int position[n];
    

    input(arr1, n);    
    input(arr2, n);
    hasil_len = jmlhBagi(n, arr1, arr2, position);
    
    // printf("%d", position[0]);
    output(hasil_len, arr1, position);
    if (hasil_len != 0)
    {
        printf("\n");
    }
    output(hasil_len, arr2, position);
    
    printf("\n");
}