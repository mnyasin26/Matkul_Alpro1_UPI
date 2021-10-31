/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal UTS nomor 2 (Berapa Hayo Jumlah Hurufnya)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

#include <stdio.h>

/*
3
sky
7

 sssss   kykyk
sssssss kykykyk
ssssss  kykykyk
 ssssss  kykyk
  ssss  kykyk
   ssss  kyk
    ss  kyk
     ss  k
        k
       s


*/


int main(){
    int m, n;
    int i, j;
    int x = 0, y = 0;
    int p = 0, q = 0;
    int hasilbagi = 0;

    int puluhan, pengurangan = 0, temp = 1, temp2 = 0;
    
    
    scanf("%d", &m);
    char kata[m];

    

    for (i = 0; i < m; i++)
    {
        scanf(" %c", &kata[i]);
    }

    hasilbagi = m/2;
    char kiri[hasilbagi];
    char kanan[m-hasilbagi];

    for (i = 0; i < hasilbagi; i++)
    {
        kiri[i] = kata[i];
    }

    for (i = hasilbagi; i < m; i++)
    {
        kanan[i-hasilbagi] = kata[i];
        //printf("Nilai i: %d\n", i);
        //printf("Nilai i-hasilbagi: %d\n", i-hasilbagi);
    }
    
    //printf("String kiri: %s\n", kiri);
    //printf("String kanan: %s", kanan);
    
    

    scanf("%d", &n);
    

    puluhan = n/10;
    

    for ( i = 0; i < puluhan+2; i++)
    {
        for (j = i; j < puluhan+1; j++)
        {
            if (n <= 2)
            {
                
            } 
            else 
            {
                printf(" ");
            }
            
            
        }

        for (j = 0; j <= ((i*2) + (n-((puluhan+2)*2))+1); j++)
        {
            printf("%c", kiri[p++]);
            if (p == (m/2))
            {
                p = 0;
            }
            
        }

        //printf("nilai i: %d", i);
        for (j = i; j < puluhan+2; j++)
        {
            if (n <= 2)
            {
                
            } 
            else 
            {
                printf(" ");
            }
        }

        for (j = i; j < puluhan+1; j++)
        {
            if (n <= 2)
            {
                
            } 
            else 
            {
                printf(" ");
            }
        }

        for (j = 0; j <= ((i*2) + (n-((puluhan+2)*2))+1); j++)
        {
            printf("%c", kanan[q++]);
            if (q == m-hasilbagi)
            {
                q = 0;
            }
        }

        
        if (n <= 2 && i == 0)
        {
            
        } 
        else 
        {
            printf("\n");
        }

        
        
        p = 0;
        q = 0;
    }

    
    for ( i = 0; i < n+1; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }

        

        for (j = 0; j < n-(temp); j++)
        {
            printf("%c", kiri[p++]);
            if (p == (m/2))
            {
                p = 0;
            }
        }

        if (n%2 == 0)
        {
            for (j = 0; j < 2; j++)
            {
                if ((i == n) || (i == n-1))
                {
                    
                } 
                else
                {
                    printf(" ");
                }
                
            }
        }
        else
        {
            for (j = 0; j < 2; j++)
            {
                if ((i == n))
                {
                    
                } 
                else
                {
                    printf(" ");
                }
                
            }
        }
        
        
        if (i == 1)
        {
            y = 2;
        }

        if (i == n)
        {
            y = 1;
            
        }
        
        
        if (y == 2)
        {
            y = 0;
            temp2 += 2;
        }
        
        
        
        for (j = 0; j < n-(temp2); j++)
        {
            printf("%c", kanan[q++]);
            if (q == m-hasilbagi)
            {
                q = 0;
            }
        }
        y++;
        
        
        x++;
        if (i == n-1)
        {
            x = 1;
            
        }
        if (x == 2)
        {
            x = 0;
            temp += 2;
        }

        
        printf("\n");
        
        p = 0;
        q = 0;
    }
    
    



    return 0;
   
}