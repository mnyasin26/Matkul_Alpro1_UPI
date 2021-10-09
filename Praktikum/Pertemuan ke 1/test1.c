#include <stdio.h>

/*
int main () {
    float number = 6.6; 
    printf("%f\n", number);
    //        ^     ^ menyebutkan nama variabel yang akan di print isinya
    //        ^ perwakilan isi variabel dengan simbol format

    //menampilkan 2 angka dibelakang koma
    printf("%0.2f\n", number);

    //deklarasi variabel
    int angkatan = 2021;
    char kelas = 'C';

    //menampilkan "Saya kelas C angkatan 2020"
    printf("Saya kelas %c angkatan %d", kelas, angkatan);

    return 0;
} */

int main () {
    char alpabet; //deklarasi variabel
    printf("masukkan huruf: ");
    scanf(" %c", &alpabet); //meminta masukan user sebuah alpabet
    // ^ ^ menyebutkan nama variabel yang akan di masukan nilai
    // ^ perwakilan variabel dengan simbol format

    int number1; //deklarasi variabel
    float number2; //deklarasi variabel

    //meminta masukan dua kali untuk variabel number1 dan number2
    printf("masukkan integer: ");
    scanf("%d", &number1);

    printf("masukkan float: ");
    scanf("%f", &number2);

    //menampilkan semua variabel
    printf("%c\n%d\n%.2f\n", alpabet, number1, number2);

    return 0;
}


