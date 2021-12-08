#include "header.h"

int sumVoc(char arr[]) {
    int i; int sumVocal = 0;
    for (i = 0; i < strlen(arr); i++)
    {
        if ((arr[i] == 'a') || (arr[i] == 'i') || (arr[i] == 'u') || (arr[i] == 'e') || (arr[i] == 'o') ||
            (arr[i] == 'A') || (arr[i] == 'I') || (arr[i] == 'U') || (arr[i] == 'E') || (arr[i] == 'O'))
        {
            sumVocal++;
        }
    }
    
    return sumVocal;
}