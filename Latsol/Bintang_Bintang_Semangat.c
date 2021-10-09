#include <stdio.h>

int main () {
    int i;
    int j;
    int k;
    int l;
    int n;
    int o;
    int p;

    int q;
    int w;
    int e;

    int masukan;
    int x = 1;
    int y = 1;
    int z = 2;
    

    scanf("%d", &masukan);
    int m = (masukan*2-2);

    for (i = 1; i <= masukan; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("*");  
        }
        for (k = m; k >= x; --k) {
            printf(" ");
            
        }
        for (l = 1; l <= i; ++l) {
            printf("*");
            
        }
        for (n = 1; n <= i; ++n) {
            printf("*");
            
        }
        for (o = masukan; o >= y; --o) {
            printf("*");
            
        }
        for (p = 1; p < i; ++p) {
            printf("*");
            
        }




        y = y+1;
        x = x+2;
        printf("\n");
    }

    

    for (q = masukan-1; q >= 1; --q) {
        for (w = 1; w <= q; ++w) {
            printf("*");
        }
        for (e = 1; e <= z; ++e) {
            printf(" ");
        }
        for (w = 1; w <= q; ++w) {
            printf("*");
        }
        for (w = masukan-1; w >= q; --w) {
            printf("*");
        }
        for (w = 1; w <= q; ++w) {
            printf("*");
        }
        for (w = 1; w <= q; ++w) {
            printf("*");
        }
        
        

        z = z + 2;
        printf("\n");
    }
    x = 1;
    for (i = 1; i <= masukan; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("*");  
        }
        for (k = m; k >= x; --k) {
            printf(" ");
            
        }
        for (l = 1; l <= i; ++l) {
            printf("*");
            
        }
        




        y = y+1;
        x = x+2;
        printf("\n");
    }
}