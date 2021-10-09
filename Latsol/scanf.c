#include <stdio.h>






int charToInt (char c) {
    int num = 0;
    num = c - '0';

    return num;
}




int main () {
    char c;
    int numer = 0;

    printf("Enter the number : ");
    scanf("%c", &c);

    numer = charToInt(c);
    printf("Character %c -> number %d", c, numer);

    return 0;
}

