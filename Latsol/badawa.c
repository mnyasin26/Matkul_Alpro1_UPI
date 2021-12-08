#include <stdio.h>
#include <string.h>

int i,j,k;
int counter;
int result = 0;
int strLen;
typedef struct
{
    char str[301];
    int len;
    int hasil;
}bentuk;


int prosesKata(int n, char t) {
    int temp; int temp2;
    if (n == 1)
    {
        temp2 = n;
    }
    else
    {
        temp2 = n-1;
    }
    
    result = 0;
    switch (t)
    {
        case 'a':
            counter = 0;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if ((counter%strLen) == 0)
                    {
                        result++;
                        
                    }
                    counter++;
                    //printf("*");
                }
                //printf("\n");
            }
            return result;
        break;

        case 'b':
            counter = 0;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < 1+(i*2); j++)
                {
                    if ((counter%strLen) == 0)
                    {
                        result++;
                        
                    }
                    counter++;
                    //printf("*");
                    //printf("result: %d\n", counter);
                }
                //printf("\n");
            }

            return result;
            
        break;

        case 'c':
            counter = 0;
            for (i = 0; i < temp2; i++)
            {
                for (j = 0; j < n+(i*2); j++)
                {
                    
                    if ((counter%strLen) == 0)
                    {
                        result++;
                        
                    }
                    counter++;
                    //printf("*");
                    //printf("result: %d\n", counter);
                }
                //printf("\n");
                
            }
            temp = n+(i*2);

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < temp; j++)
                {
                    if ((counter%strLen) == 0)
                    {
                        result++;
                    }
                    counter++;
                    //printf("*");
                    //printf("result: %d\n", counter);
                }
                //printf("\n");
            }

            for (i = 0; i < temp2; i++)
            {
                for (j = 0; j < n+(i*2); j++)
                {
                    
                    if ((counter%strLen) == 0)
                    {
                        result++;
                    }
                    counter++;
                    //printf("*");
                    //printf("result: %d\n", counter);
                }
                //printf("\n");
            }

            return result;
            
        break;
    
        default:
        break;
    }
    
}

int main() {
    char str[301];
    scanf("%s", &str);
    strLen = strlen(str);

    int n;
    scanf("%d", &n);
    bentuk bentukan[n];
    for (k = 0; k < n; k++)
    {
        scanf("%s", &bentukan[k].str);
        scanf("%d", &bentukan[k].len);

        if (strcmp(bentukan[k].str, "kotak") == 0)
        {
            bentukan[k].hasil = prosesKata(bentukan[k].len, 'a');
        } 
        else if (strcmp(bentukan[k].str, "segitiga") == 0)
        {
            bentukan[k].hasil = prosesKata(bentukan[k].len, 'b');
        }
        else
        {
            bentukan[k].hasil = prosesKata(bentukan[k].len, 'c');
        }
    }
    
    for (k = 0; k < n; k++) {
        printf("%d\n", bentukan[k].hasil);
    }
    


    return 0;

}
