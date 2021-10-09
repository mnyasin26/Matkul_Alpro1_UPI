#include <stdio.h>

int main () {
    // membuat 3 kotak integer
    int a, b, c;

    // meminta masukan user dan menyimpan nilai ke kotak tadi
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // algoritma untuk mengurutkan dari bilangan ke bilangan terkecil
    if (a > b && a > c)
    {
        // Jika a bilangan terbesar
        if (b > c)
        {
            // jika b lebih besar maka keluarkan a, b, c
            printf("%d %d %d", a, b, c);
        } else {
            // jika b tidak lebih besar maka keluarkan a, c, b
            printf("%d %d %d", a, c, b);
        }
        
    } else if (b > a && b > c)
    {
        // Jika b bilangan terbesar
        if (a > c)
        {
            // jika a lebih besar maka keluarkan b, a, c
            printf("%d %d %d", b, a, c);
        } else {
            // jika a tidak lebih besar maka keluarkan b, c, a
            printf("%d %d %d", b, c, a);
        }
        
    } else if (c > a && c > b)
    {
        // Jika c bilangan terbesar
        if (a > b)
        {
            // jika b lebih besar maka keluarkan c, a, b
            printf("%d %d %d", c, a, b);
        } else {
            // jika b tidak lebih besar maka keluarkan c, b, a
            printf("%d %d %d", c, b, a);
        }
    }
    
    return 0;
    
}