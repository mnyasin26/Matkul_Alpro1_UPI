#include "header.h"

int main() {
    char str[101];
    scanf("%s", &str);

    if (napjilASC(str) == 0)
    {
        printf("Nilai ASCII: genap.");
    }
    else
    {
        printf("Nilai ASCII: ganjil.");
    }
    
    return 0;
}