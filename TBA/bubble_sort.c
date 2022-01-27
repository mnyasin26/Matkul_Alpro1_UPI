#include <stdio.h>

int main(){
    int tape[7];
    
    int spasi = 1;

    int i;
    for (i = 0; i < 7; i++)
    {
        if (i == 0 || i == 6)
        {
            tape[i] = 0;
        }
        else
        {
            scanf("%d", &tape[i]);
            
        }        
    }


    int index = 1;
    int stat = 1;
    while (stat == 1)
    {
        //stat = 0;
        if (tape[index] == 1)
        {
            tape[index] = 1;
            index += 1;
            stat = 1;
        }

        if (tape[index] == 2)
        {
            stat = 1;
            tape[index] = 2;
            index += 1;
            if (tape[index] == 1)
            {
                tape[index] = 2;
                index -= 1;
                if (tape[index] == 2)
                {
                    tape[index] = 1;
                    index += 1;
                }
            }
            
        }

        if (tape[index] == 3)
        {
            stat = 1;
            tape[index] = 3;
            index += 1;
            if (tape[index] == 1)
            {
                tape[index] = 3;
                index -= 1;
                if (tape[index] == 3)
                {
                    tape[index] = 1;
                    index += 1;
                }
            }
            else if (tape[index] == 2)
            {
                tape[index] = 3;
                index -= 1;
                if (tape[index] == 3)
                {
                    tape[index] = 2;
                    index += 1;
                }
            }
            
        }

        if (tape[index] == 4)
        {
            stat = 1;
            tape[index] = 4;
            index += 1;
            if (tape[index] == 1)
            {
                tape[index] = 4;
                index -= 1;
                if (tape[index] == 4)
                {
                    tape[index] = 1;
                    index += 1;
                }
            }
            else if (tape[index] == 2)
            {
                tape[index] = 4;
                index -= 1;
                if (tape[index] == 4)
                {
                    tape[index] = 2;
                    index += 1;
                }
            }
            else if (tape[index] == 3)
            {
                tape[index] = 4;
                index -= 1;
                if (tape[index] == 4)
                {
                    tape[index] = 3;
                    index += 1;
                }
            }
            
        }

        if (tape[index] == 5)
        {
            stat = 1;
            tape[index] = 5;
            index += 1;
            if (tape[index] == 1)
            {
                tape[index] = 5;
                index -= 1;
                if (tape[index] == 5)
                {
                    tape[index] = 1;
                    index += 1;
                }
            }
            else if (tape[index] == 2)
            {
                tape[index] = 5;
                index -= 1;
                if (tape[index] == 5)
                {
                    tape[index] = 2;
                    index += 1;
                }
            }
            else if (tape[index] == 3)
            {
                tape[index] = 5;
                index -= 1;
                if (tape[index] == 5)
                {
                    tape[index] = 3;
                    index += 1;
                }
            }
            else if (tape[index] == 4)
            {
                tape[index] = 5;
                index -= 1;
                if (tape[index] == 5)
                {
                    tape[index] = 4;
                    index += 1;
                }
            }
            
        }

        if (tape[index] == 0)
        {
            index++;
        }
        

        if (index >= 6)
        {
            index = 1;
        }
        
        for (i = 0; i < 7; i++)
        {
            printf("%d", tape[i]);
        }
        printf("\n");
        for (i = 0; i < index; i++)
        {
            printf(" ");
        }
        //printf("%d^%d^", tape[index], index);
    }
    
    for (i = 0; i < 7; i++)
    {
        printf("%d", tape[i]);
    }
    printf("\n");
    for (i = 0; i < index; i++)
    {
        printf(" ");
    }
    printf("^");


}