/* Penulis: Muhamad Nur Yasin Amadudin (2100137) */
#include <stdio.h>

int main () {
    char vkl[7] = "eioaaa";
    char knsn[11] = "sndmbtngks";
    
    char nm_kbmg[100];
    int bnyk_dmb, pngli, i;

    //printf("%s\n", vkl);
    //printf("%s\n", knsn);

    scanf("%d", &bnyk_dmb);
    scanf("%d", &pngli);
    
    for (i = 0; i < bnyk_dmb; i++)
    {
        
        nm_kbmg[0] = knsn[(((i+1)*1*pngli)-1)%10];
        nm_kbmg[1] = vkl[(((i+1)*2*pngli)-1)%6];
        nm_kbmg[2] = knsn[(((i+1)*3*pngli)-1)%10];
        nm_kbmg[3] = vkl[(((i+1)*4*pngli)-1)%6];
        
        //printf("Domba ke: %d\n", i + 1);
        printf("%s\n", nm_kbmg);
    }

    if (bnyk_dmb == 0)
    {
        printf("\n");
    }
    
    
    return 0;

}