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

int frontMean (int n, int arr[]) {
    int temp = 0; int i;
    for (i = 0; i < n/2; i++)
    {
        temp += arr[i];
    }
    temp = temp/(n/2);
    return temp;
}

int backsideMean (int n, int arr[]) {
    int temp = 0; int i;
    for (i = n/2; i < n; i++)
    {
        temp += arr[i];
    }
    temp = temp/(n/2);
    return temp;
}

void sortDec(int arr[3]) {
    int i, j; int temp;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[j] < arr[i])
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

    int front_mean[3];
    front_mean[0] = frontMean(a, arr1);
    front_mean[1] = frontMean(b, arr2);
    front_mean[2] = frontMean(c, arr3);

    int backside_min[3];
    backside_min[0] = backsideMean(a, arr1);
    backside_min[1] = backsideMean(b, arr2);
    backside_min[2] = backsideMean(c, arr3);

    sortDec(front_mean);
    sortDec(backside_min);

    outputArr(front_mean);
    outputArr(backside_min);

    return 0;
    //printf("%d", a);
}