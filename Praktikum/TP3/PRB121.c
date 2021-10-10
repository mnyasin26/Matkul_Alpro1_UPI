/* 
Saya Muhamad Nur Yasin Amadudin (2100137) mengerjakan 
Soal TP3 (Pekerjaan Rumah Bobi 1)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// deklarasi library standar agar dapat menggunakan fungsi dasar dalam Bahasa C
#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y;
    int r;
}lingkaran;

// ada 4?
int main () {
    int kode_k;
    int bil1, bil2, bil3;
    int prsn_luas;
    char pil_lngkrn;

    double temp_double;
    int temp_int;

    lingkaran cA;
    lingkaran cB;

    scanf("%d", &kode_k);
    scanf(" %d %d %d", &cA.r, &cA.x, &cA.y);
    scanf(" %d %d %d", &cB.r, &cB.x, &cB.y);
    scanf(" %c", &pil_lngkrn);
    scanf(" %d", &prsn_luas);

    bil1 = kode_k/100;
    bil2 = ((kode_k % 100)/10); 
    bil3 = (kode_k % 10);

    switch (bil1)
    {
        case 1:
            temp_double = ((3.14*(cA.r*cA.r)) + (3.14*(cB.r*cB.r)));
            printf("ELuas AB: %0.2lf cm2\n", temp_double);
        break;

        case 2:
            temp_double = ((2*(3.14*(cA.r))) + (2*(3.14*(cB.r))));
            printf("EKeliling AB: %0.2lf cm\n", temp_double);
        break;

        case 3:
            temp_int = sqrt(((cA.x - cB.x)*(cA.x - cB.x)) + ((cA.y - cB.y)*(cA.y - cB.y)));
            printf("Jarak AB: %d satuan\n", temp_int);
        break;

        default:
            if (pil_lngkrn == 'A')
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cA.r*cA.r));
                printf("Luas %d%% A: %0.2lf cm2\n", prsn_luas, temp_double);
            } 
            else 
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cB.r*cB.r));
                printf("Luas %d%% B: %0.2lf cm2\n", prsn_luas, temp_double);
            }
        break;
    }

    switch (bil2)
    {
        case 1:
            temp_double = ((3.14*(cA.r*cA.r)) + (3.14*(cB.r*cB.r)));
            printf("ELuas AB: %0.2lf cm2\n", temp_double);
        break;

        case 2:
            temp_double = ((2*(3.14*(cA.r))) + (2*(3.14*(cB.r))));
            printf("EKeliling AB: %0.2lf cm\n", temp_double);
        break;

        case 3:
            temp_int = sqrt(((cA.x - cB.x)*(cA.x - cB.x)) + ((cA.y - cB.y)*(cA.y - cB.y)));
            printf("Jarak AB: %d satuan\n", temp_int);
        break;

        default:
            if (pil_lngkrn == 'A')
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cA.r*cA.r));
                printf("Luas %d%% A: %0.2lf cm2\n", prsn_luas, temp_double);
            } 
            else 
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cB.r*cB.r));
                printf("Luas %d%% B: %0.2lf cm2\n", prsn_luas, temp_double);
            }
        break;
    }

    switch (bil3)
    {
        case 1:
            temp_double = ((3.14*(cA.r*cA.r)) + (3.14*(cB.r*cB.r)));
            printf("ELuas AB: %0.2lf cm2\n", temp_double);
        break;

        case 2:
            temp_double = ((2*(3.14*(cA.r))) + (2*(3.14*(cB.r))));
            printf("EKeliling AB: %0.2lf cm\n", temp_double);
        break;

        case 3:
            temp_int = sqrt(((cA.x - cB.x)*(cA.x - cB.x)) + ((cA.y - cB.y)*(cA.y - cB.y)));
            printf("Jarak AB: %d satuan\n", temp_int);
        break;

        default:
            if (pil_lngkrn == 'A')
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cA.r*cA.r));
                printf("Luas %d%% A: %0.2lf cm2\n", prsn_luas, temp_double);
            } 
            else 
            {
                temp_double = (prsn_luas/100.00) * (3.14*(cB.r*cB.r));
                printf("Luas %d%% B: %0.2lf cm2\n", prsn_luas, temp_double);
            }
        break;
    }

    return 0;
}