#include <stdio.h>

int main() {
    int masukan [10];
    int min, index;
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &masukan[i]);
    }

    min = masukan[0];
    index = 0;

    for (i = 0; i < 10; i++)
    {
        if ((min > masukan[i]) && (masukan[i]%2 == 0))
        {
            min = masukan[i];
            index = i;
        }
        
    }
    
    printf("Nilai minimum: %d index ke: %d", min, index);

    return 0;
}