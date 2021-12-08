#include "header.h"

int main() {
    
    char arr[201];
    scanf("%s", arr);
    
    int i;
    int sumVocal = sumVoc(arr);
    for (i = 0; i < sumVocal; i++)
    {
        printf("%s", arr);
    }
    
    return 0;
}