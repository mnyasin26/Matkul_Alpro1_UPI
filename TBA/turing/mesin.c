/* Program Sederhana Mesin Turing - Bubble Sort
oleh kelompok 12 Ilkom C1 2021 UPI
*/

#include "header.h"

int i;

void cetakTape(int index, char tape[], char state) {
    printf("------------------------\n    [");
    for (i = 0; i < 7-index; i++)
    {
        printf("#");
    }
    printf("%s", tape);
    for (i = 0; i < index; i++)
    {
        printf("#");
    }
    printf("]\n");
    printf("            ^\n");
    printf("        [State %c]\n", state);
    printf("------------------------\n");
}

void output(int index, char tape[], char state) {
    int time = 1400;
    Sleep(time);
    system("cls");
    
    cetakTape(index, tape, state);
}