#include <stdio.h>

int main () {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && a == c)
    {
        printf("ini adalah segitiga sama sisi");
    } else if (a == b || b == c || c == a)
    {
        printf("ini adalah segitiga sama kaki");
    } else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        printf("ini adalah segitiga siku-siku");
    }
    
    return 0;
    
}