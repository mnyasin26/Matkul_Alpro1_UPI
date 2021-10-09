/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    int jlmh_arr1, jlmh_arr2, i, temp_arr_dpn = 0, temp_arr_blkng = 0;

    scanf("%d", &jlmh_arr1);
    int arr_dpn[jlmh_arr1];

    for (i = 0; i < jlmh_arr1; i++)
    {
        scanf("%d", &arr_dpn[i]);

        if (i < jlmh_arr1/2)
        {
            temp_arr_dpn += arr_dpn[i];
        }
        
    }

    

    scanf("%d", &jlmh_arr2);
    int arr_blkng[jlmh_arr2];

    for (i = 0; i < jlmh_arr2; i++)
    {
        scanf("%d", &arr_blkng[i]);

        if (i >= jlmh_arr2/2)
        {
            temp_arr_blkng += arr_blkng[i];
        }
        
    }

    

    if (temp_arr_dpn == temp_arr_blkng)
    {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    
    return 0;

    
}