#include <stdio.h>
#include <math.h>

typedef struct
{
    int a, b, c;
}properti;


int main() {
    int n;

    scanf("%d", &n);
    properti segitiga[n];

    for (int i = 0; i < n; i++)
    {
        printf("Masukan segitiga ke-%d: ", i+1);
        scanf("%d", &segitiga[i].a);
        scanf("%d", &segitiga[i].b);
        scanf("%d", &segitiga[i].c);
        
    }

    int penghitung = 0;
    int sumSegitiga = 0;

    while (penghitung < n && sumSegitiga < 3)
    {
        if (pow(segitiga[penghitung].a, 2) == pow(segitiga[penghitung].b, 2) + pow(segitiga[penghitung].c, 2) ||
            pow(segitiga[penghitung].b, 2) == pow(segitiga[penghitung].a, 2) + pow(segitiga[penghitung].c, 2) ||
            pow(segitiga[penghitung].c, 2) == pow(segitiga[penghitung].a, 2) + pow(segitiga[penghitung].b, 2))
        {
            printf("%d %d %d adalah segitiga siku siku ke-%d\n", segitiga[penghitung].a, segitiga[penghitung].b,
                    segitiga[penghitung].c, sumSegitiga+1);
            sumSegitiga++;
        }

        penghitung++;
    }
    
    return 0;
    
}