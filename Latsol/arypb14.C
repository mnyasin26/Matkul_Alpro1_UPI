#include <stdio.h>

void inputInt(int *x) {
    int temp;
    scanf("%d", &temp);
    *x = temp;
}

void inputArr(int n, int arr[]) {
    int temp; int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        arr[i] = temp;
    }
}

void outputArr(int arr[3]) {
    int i;
    for (i = 0; i < 3; i++)
    {
        if (i == 2)
        {
            printf("%d", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int maxArr (int n, int arr[]) {
    int temp = arr[0]; int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

int minArr (int n, int arr[]) {
    int temp = arr[0]; int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < temp)
        {
            temp = arr[i];
        }
    }
    return temp;
}

void sortInc(int arr[3]) {
    int i, j; int temp;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main() {
    int a;
    inputInt(&a);
    int arr1[a];
    inputArr(a, arr1);

    int b;
    inputInt(&b);
    int arr2[b];
    inputArr(b, arr2);

    int c;
    inputInt(&c);
    int arr3[c];
    inputArr(c, arr3);

    int max[3];
    max[0] = maxArr(a, arr1);
    max[1] = maxArr(b, arr2);
    max[2] = maxArr(c, arr3);

    int min[3];
    min[0] = minArr(a, arr1);
    min[1] = minArr(b, arr2);
    min[2] = minArr(c, arr3);

    sortInc(min);
    sortInc(max);

    outputArr(min);
    outputArr(max);

    return 0;
    //printf("%d", a);
}