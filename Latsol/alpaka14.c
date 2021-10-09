/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

/* My function */
int charToInt (char masukan) {
    return masukan - '0';
}

/* Main Programs */
int main () {
    /* Library */
    char masukan;
    int temp_angka;
    int i;

    int x = 0;
    int y = 0; 

    int angka[3];
    char karakter[3];

    /* Algorithms */
    for (i = 0; i <= 5; ++i) 
    {
        scanf("%c", &masukan);
        getchar();    

        if (48 <= masukan && masukan <= 57) {
            temp_angka = charToInt(masukan);
            angka[x] = temp_angka;
           
            ++x;
        } else {
            karakter[y] = masukan;
            
            ++y;
        }
    }

    

    if (x > 3 || y > 3)
    {
        printf("tidak valid\n");
    } else {
        for (i = 0; i < 3; i++)
        {
            printf("%c\n", karakter[i]);
            printf("%d\n", angka[i]);
        }
    }

    
    
    return 0;
}