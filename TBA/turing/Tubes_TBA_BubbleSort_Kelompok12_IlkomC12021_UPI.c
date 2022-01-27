/* Program Sederhana Mesin Turing - Bubble Sort
oleh kelompok 12 Ilkom C1 2021 UPI
*/

#include "header.h"

void main() {
    char tape[8];
    int i;
    int index = 1;
    int time = 1800;

    initial:
    system("cls");
    printf("----------Mesin Turing----------");
    printf("\nOleh Kelompok 12 Kelas Ilkom C1 2021 UPI");
    printf("\n\n=======Bubble Sorting=======");
    printf("\nformat masukan '#XXXXX#'");
    printf("\ndimana X = 1-5");
    printf("\ncontoh: #32154#");
    printf("\n\nInput string: ");
    scanf("%s", &tape);
    system("cls");
    printf("Initializing\n");
    Sleep(time);
    system("cls");
    printf("Initializing .\n");
    cetakTape(index, tape, 'A');
    Sleep(time);
    system("cls");
    printf("Initializing ..\n");
    cetakTape(index, tape, 'A');
    Sleep(time);
    system("cls");
    printf("Initializing ...\n");
    cetakTape(index, tape, 'A');
    
    state_A:
    output(index, tape, 'A');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'A');
        index += 1;
        goto state_A;
        break;

        case '2':
        output(index, tape, 'A');
        index += 1;
        goto state_B;
        break;

        case '3':
        output(index, tape, 'A');
        index += 1;
        goto state_C;
        break;

        case '4':
        output(index, tape, 'A');
        index += 1;
        goto state_D;
        break;

        case '5':
        output(index, tape, 'A');
        index += 1;
        goto state_E;
        break;
    
        default:
        goto error;
        break;
    }
    

    state_B:
    output(index, tape, 'B');
    switch (tape[index])
    {
        case '1':
        tape[index] = '2';
        output(index, tape, 'B');
        index -= 1;
        goto state_F;
        break;

        case '3':
        output(index, tape, 'B');
        index += 1;
        goto state_C;
        break;

        case '4':
        output(index, tape, 'B');
        index += 1;
        goto state_D;
        break;

        case '5':
        output(index, tape, 'B');
        index += 1;
        goto state_E;
        break;

        case '#':
        output(index, tape, 'B');
        index -= 1;
        goto state_P;
        break;

        default:
        goto error;
        break;
    }

    state_C:
    output(index, tape, 'C');
    switch (tape[index])
    {
        case '1':
        tape[index] = '3';
        output(index, tape, 'C');
        index -= 1;
        goto state_H;
        break;

        case '2':
        tape[index] = '3';
        output(index, tape, 'C');
        index -= 1;
        goto state_G;
        break;

        
        case '4':
        output(index, tape, 'C');
        index += 1;
        goto state_D;
        break;
        

        case '5':
        output(index, tape, 'C');
        index += 1;
        goto state_E;
        break;

        case '#':
        output(index, tape, 'C');
        index -= 1;
        goto state_P;
        break;

        default:
        goto error;
        break;
    }

    
    state_D:
    output(index, tape, 'D');
    switch (tape[index])
    {
        case '1':
        tape[index] = '4';
        output(index, tape, 'D');
        index -= 1;
        goto state_I;
        break;

        case '2':
        tape[index] = '4';
        output(index, tape, 'D');
        index -= 1;
        goto state_J;
        break;

        case '3':
        tape[index] = '4';
        output(index, tape, 'D');
        index -= 1;
        goto state_K;
        break;

        case '5':
        output(index, tape, 'D');
        index += 1;
        goto state_E;
        break;

        case '#':
        output(index, tape, 'D');
        index -= 1;
        goto state_P;
        break;

        default:
        goto error;
        break;
    }

    state_E:
    output(index, tape, 'E');
    switch (tape[index])
    {
        case '1':
        tape[index] = '5';
        output(index, tape, 'E');
        index -= 1;
        goto state_O;
        break;

        case '2':
        tape[index] = '5';
        output(index, tape, 'E');
        index -= 1;
        goto state_N;
        break;

        case '3':
        tape[index] = '5';
        output(index, tape, 'E');
        index -= 1;
        goto state_M;
        break;

        case '4':
        tape[index] = '5';
        output(index, tape, 'E');
        index -= 1;
        goto state_L;
        break;

        case '#':
        output(index, tape, 'E');
        index -= 1;
        goto state_P;
        break;

        default:
        goto error;
        break;
    }

    state_F:
    output(index, tape, 'F');
    switch (tape[index])
    {
        case '2':
        tape[index] = '1';
        output(index, tape, 'F');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_G:
    output(index, tape, 'G');
    switch (tape[index])
    {
        case '3':
        tape[index] = '2';
        output(index, tape, 'G');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_H:
    output(index, tape, 'H');
    switch (tape[index])
    {
        case '3':
        tape[index] = '1';
        output(index, tape, 'H');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_I:
    output(index, tape, 'I');
    switch (tape[index])
    {
        case '4':
        tape[index] = '1';
        output(index, tape, 'I');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_J:
    output(index, tape, 'J');
    switch (tape[index])
    {
        case '4':
        tape[index] = '2';
        output(index, tape, 'J');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_K:
    output(index, tape, 'K');
    switch (tape[index])
    {
        case '4':
        tape[index] = '3';
        output(index, tape, 'K');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_L:
    output(index, tape, 'L');
    switch (tape[index])
    {
        case '5':
        tape[index] = '4';
        output(index, tape, 'L');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_M:
    output(index, tape, 'M');
    switch (tape[index])
    {
        case '5':
        tape[index] = '3';
        output(index, tape, 'M');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_N:
    output(index, tape, 'N');
    switch (tape[index])
    {
        case '5':
        tape[index] = '2';
        output(index, tape, 'N');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_O:
    output(index, tape, 'O');
    switch (tape[index])
    {
        case '5':
        tape[index] = '1';
        output(index, tape, 'O');
        index += 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    state_P:
    output(index, tape, 'P');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'P');
        index -= 1;
        goto state_P;
        break;

        case '2':
        output(index, tape, 'P');
        index -= 1;
        goto state_P;
        break;

        case '3':
        output(index, tape, 'P');
        index -= 1;
        goto state_P;
        break;

        case '4':
        output(index, tape, 'P');
        index -= 1;
        goto state_P;
        break;

        case '5':
        output(index, tape, 'P');
        index -= 1;
        goto state_P;
        break;

        case '#':
        output(index, tape, 'P');
        index += 1;
        goto state_Q;
        break;

        default:
        goto error;
        break;
    }

    state_Q:
    output(index, tape, 'Q');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'Q');
        index += 1;
        goto state_R;
        break;

        case '2':
        output(index, tape, 'Q');
        index += 1;
        goto state_X;
        break;

        case '3':
        output(index, tape, 'Q');
        index += 1;
        goto state_X;
        break;

        case '4':
        output(index, tape, 'Q');
        index += 1;
        goto state_X;
        break;

        case '5':
        output(index, tape, 'Q');
        index += 1;
        goto state_X;
        break;

        default:
        goto error;
        break;
    }

    state_R:
    output(index, tape, 'R');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'R');
        index += 1;
        goto state_X;
        break;

        case '2':
        output(index, tape, 'R');
        index += 1;
        goto state_S;
        break;

        case '3':
        output(index, tape, 'R');
        index += 1;
        goto state_X;
        break;

        case '4':
        output(index, tape, 'R');
        index += 1;
        goto state_X;
        break;

        case '5':
        output(index, tape, 'R');
        index += 1;
        goto state_X;
        break;

        default:
        goto error;
        break;
    }

    state_S:
    output(index, tape, 'S');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'S');
        index += 1;
        goto state_X;
        break;

        case '2':
        output(index, tape, 'S');
        index += 1;
        goto state_X;
        break;

        case '3':
        output(index, tape, 'S');
        index += 1;
        goto state_T;
        break;

        case '4':
        output(index, tape, 'S');
        index += 1;
        goto state_X;
        break;

        case '5':
        output(index, tape, 'S');
        index += 1;
        goto state_X;
        break;

        default:
        goto error;
        break;
    }

    state_T:
    output(index, tape, 'T');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'T');
        index += 1;
        goto state_X;
        break;

        case '2':
        output(index, tape, 'T');
        index += 1;
        goto state_X;
        break;

        case '3':
        output(index, tape, 'T');
        index += 1;
        goto state_X;
        break;

        case '4':
        output(index, tape, 'T');
        index += 1;
        goto state_U;
        break;

        case '5':
        output(index, tape, 'T');
        index += 1;
        goto state_X;
        break;

        default:
        goto error;
        break;
    }

    state_U:
    output(index, tape, 'U');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'U');
        index += 1;
        goto state_X;
        break;

        case '2':
        output(index, tape, 'U');
        index += 1;
        goto state_X;
        break;

        case '3':
        output(index, tape, 'U');
        index += 1;
        goto state_X;
        break;

        case '4':
        output(index, tape, 'U');
        index += 1;
        goto state_X;
        break;

        case '5':
        output(index, tape, 'U');
        index += 1;
        goto state_V;
        break;

        default:
        goto error;
        break;
    }

    state_V:
    output(index, tape, 'V');
    switch (tape[index])
    {
        case '#':
        output(index, tape, 'V');
        goto state_W;
        break;

        default:
        goto error;
        break;
    }

    state_W:
    output(index, tape, 'W');
    switch (tape[index])
    {
        case '#':
        output(index, tape, 'W');
        goto end;
        break;

        default:
        goto error;
        break;
    }

    state_X:
    output(index, tape, 'X');
    switch (tape[index])
    {
        case '1':
        output(index, tape, 'X');
        index -= 1;
        goto state_A;
        break;

        case '2':
        output(index, tape, 'X');
        index -= 1;
        goto state_A;
        break;

        case '3':
        output(index, tape, 'X');
        index -= 1;
        goto state_A;
        break;

        case '4':
        output(index, tape, 'X');
        index -= 1;
        goto state_A;
        break;

        case '5':
        output(index, tape, 'X');
        index -= 1;
        goto state_A;
        break;

        default:
        goto error;
        break;
    }

    end:
    printf("Program: Success");
    getch();
    goto finish;

    error:
    printf("Program: Error");
    getch();

    finish:
}