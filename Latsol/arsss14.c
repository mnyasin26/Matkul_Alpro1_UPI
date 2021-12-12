#include <stdio.h>
#include <string.h>

void inputInt(int *x) {
    int temp;
    scanf("%d", &temp);
    *x = temp;
}

void inputArr(int n, char arr[n][301]) {
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
}

void outputArr(int n, char arr[n][301]) {
    int i;
    for (i = 0; i < n; i++)
    {
       printf("%s\n", arr[i]);
    }
}

void strrevAlt(char sub[]) {

    int i; int counter= 0;
    char temp[strlen(sub)];
    for (i = strlen(sub)-1; i >= 0 ; i--)
    {
        temp[counter++] = sub[i];
    }

    for (i = 0; i < strlen(sub); i++)
    {
        sub[i] = temp[i];
    }
}


int subScan(int n, char str[n][301], char sub[]) {
    int i, j, k;
    char temp[strlen(sub)+1];
    temp[strlen(sub)] = 0;
    int hasil = 0;
    int counter = 0;

    //printf("ini sub: %s\n", sub);
    
    for (i = 0; i < n; i++)
    {
        
        for (j = 0; j < strlen(str[i]); j++)
        {
            for (k = j; k < j+strlen(sub); k++)
            {
                temp[counter++] = str[i][k];

                if (counter == strlen(sub))
                {
                    counter = 0;
                }
            }
            //printf("'%s' dan '%s' dan counter: %d\n", temp, sub, counter);
            if (strcmp (temp, sub) == 0)
            {
                //printf("'%s' dan '%s'\n", temp, sub);
                hasil++;
                break;
            }
            
        }
        
    }
    
    return hasil;
}


int main() {
    int n;
    inputInt(&n);
    char str1[n][301];
    inputArr(n, str1);

    int m;
    inputInt(&m);
    char str2[m][301];
    inputArr(m, str2);

    char str_sub[1][301];
    inputArr(1, str_sub);

    //printf("ini sub: %s", str_sub[0]);

    
    if (subScan(n, str1, str_sub[0]) == subScan(m, str2, str_sub[0]))
    {
        printf("valid\n");
    }
    else
    {
        printf("tidak valid\n");
    }
    

    //printf("%d ", subScan(n, str1, str_sub[0]));
    //printf("%d", subScanLast(n, str1, str_sub[1]));

    
    
    return 0;
    //outputArr(n, str1);
}