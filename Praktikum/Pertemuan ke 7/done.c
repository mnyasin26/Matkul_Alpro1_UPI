#include <stdio.h>
#include <string.h>

int main() {
    char str_temp[100] = {'\0'};
    char str_max_len[100] = {'\0'};

    do
    { 
        scanf("%s", &str_temp);
        if ((strlen(str_temp) > strlen(str_max_len)))
        {
            strcpy(str_max_len, str_temp);
        }
        //printf("%s ", str_temp);
        //printf("Max: %s ", str_max_len);
    } while (strcmp(str_temp, "done") != 0);
    
    printf("=============================\n");
    printf("string terpanjang adalah kata %s, panjangnya %d karakter\n", str_max_len, strlen(str_max_len));
            
    return 0;
}