// Penulis: Muhamad Nur Yasin Amadudin (2100137)
#include <stdio.h>
#include <string.h>

int main () {
    char huruf_kang_damang[100];
    char temp;
    char swap_char;
    char huruf [100], huruf2 [100];

    int jumlah[100] = {0}, jumlah2[100] = {0};
    int i, j, k;
    int swap_int = 0;
    int max = 0;
    int index_of;

    int loncat;

    int jumlah_baris_huruf;

    scanf("%d", &jumlah_baris_huruf);
    scanf("%s", &huruf_kang_damang);

    for (i = 0; i < strlen(huruf_kang_damang); i++)
    {
        loncat = 0;
        for (j = 0; j < strlen(huruf); j++)
        {
            
            if (huruf[j] == huruf_kang_damang[i])
            {
                temp = huruf_kang_damang[i];
                huruf[i] = temp;
                loncat = 1;
            }
            
        }
        
        

        temp = huruf_kang_damang[i];
        huruf[i] = temp;


        for (j = 0; j < strlen(huruf_kang_damang); j++)
        {
            if (temp == huruf_kang_damang[j])
            {
                jumlah[i] += 1;
            }
            
        }

    

    }

    for (j = 0; j < strlen(huruf); j++)
    {
        
        max = 0;
        for (k = j; k < strlen(huruf); k++)
        {
            if (jumlah[k] >= max)
            {
                max = jumlah[k];\
                index_of = k;
            }
            
        }

        swap_int = jumlah[j];
        jumlah[j] = max;
        jumlah[index_of] = swap_int;

        swap_char = huruf[j];
        huruf[j] = huruf[index_of];
        huruf[index_of] = swap_char;

        //printf("J: %d Nilai Max: %d\n", j, max);
        
    }
    

    char swapp_char;
    int counter = 0;
    for (i = 0; i < strlen(huruf); i++)
    {
        
        /*
        if (counter >= 1)
        {
            continue;
        }
        
        counter = 0;


        huruf2[i] = huruf[i];
        jumlah2[i] = jumlah[i];

        for (j = 0; j < strlen(huruf); j++)
        {
            if (huruf2[i] == huruf[j] && i != j)
            {
                counter++;
            }
            
        }
        */
        
    }
    


    /*
    for (j = 0; j < strlen(huruf); j++)
        {
            for (k = j; k < strlen(huruf); k++)
            {
                if ((jumlah[k] > jumlah[j]) && (j != k))
                {
                    index_of = jumlah[k];
                    //printf("max: %d\n", index_of);
                }

                

                
                if (k == strlen(huruf)-1)
                {
                    swap_int = jumlah[j];
                    jumlah[j] = jumlah[index_of];
                    jumlah[index_of] = swap_int;

                    swap_char = huruf[j];
                    huruf[j] = huruf[index_of];
                    huruf[index_of] = swap_char;
                }
                
            }
            printf("j: %d Max: %d\n", j,index_of);

            //printf("%d\n", j);
                    
               
                
                
                
        }
        */
    
    
    
    
    for (i = 0; i < jumlah_baris_huruf; i++)
    {
        printf("%c ", huruf[i]);
        printf("%d\n", jumlah[i]);
    }
    
    

    return 0;
}