// Penulis: Muhamad Nur Yasin Amadudin (2100137)
#include <stdio.h>
#include <string.h>

int charToInt (char masukan) {
    return masukan - '0';
}

int power2 (int exponent) {
    int i, base = 1;

    for (i = 0; i < exponent; i++)
    {
        base = base * 2;
    }
    
    if (exponent == 0)
    {
        return 1;
    } 

    else 
    {
        return base;
    }
    
}

int main () {
    int i, j, k, jmlh_brs, hasil, sum = 0;

    scanf("%d", &jmlh_brs);

    for (i = 0; i < jmlh_brs; i++)
    {
        hasil = 0;
        char masukan[8] = {0};
        int temp[8] = {0};
        scanf("%s", &masukan);
        k = 0;

        for (j = strlen(masukan)-1; j >= 0; j--, k++)
        {
            temp[k] = charToInt(masukan[j]);
            
        }
        
        for (j = 0; j < 8; j++)
        {
            if (temp[j] == 1)
            {
                hasil = hasil + power2(j);
            } 
            
        }
        
        

        sum = sum + hasil;

    }

    printf("%d\n", sum);
    
}