/* 
Saya Muhamad Nur Yasin Amadudin [2100137] mengerjakan 
soal Kuis 3 urutan ke-1 (Segitiga Paling)
dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan 
kecurangan seperti yang telah dispesifikasikan. Aamiin. 
*/

// Impor pustaka pribadi
#include "header.h"

// Definisi prosedur input untuk proses pemasukkan atribut segitiga sekaligus menentukan segitiga terluas serta sisi miringnya
// Parameter n untuk iterasi dan deklarasi segitiga, parameter segitiga untuk identitas segitiga di main, parameter maxLuasSegitiga (pass by reference) untuk menampung nilai luas terbesar segitiga, parameter macSisiMiring (pass by reference)  untuk menampung nilai sisi miring segitiga terluas
void input(int n, sgt segitiga[n], int *maxLuasSegitiga, int *maxSisiMiring) {
    int i, j; // <-- variabel untuk membantu proses iterasi
    int temp; // <-- variabel untuk menyimpan luas segitiga ke i sesaat
    for (i = 0; i < n; i++) // <-- for loop sebanyak n
    {
        for (j = 0; j < 3; j++) // for loop sebanyak 3 kali
        {
            scanf("%d", &segitiga[i].sisi[j]); // <-- proses input sisi segitiga
        }
        
        temp = luasSegitiga(n, segitiga[i]); // <-- nilai fungsi luasSegitiga dimasukkan ke temp
        if (*maxLuasSegitiga < temp) // <-- control flow if untuk komparasi nilai maxLuasSegitiga dengan temp
        {
            // Jika temp lebih besar, maka
            *maxLuasSegitiga = temp; // <-- masukkan nilai temp ke maxLuasSegitiga
            *maxSisiMiring = sisiMiring(segitiga[i]); // <-- masukkan nilai fungsi sisiMiring ke maxSisiMiring
        }
    }
}

// Definisi fungsi sisiMiring untuk mencari sisi miring dari sebuah segitiga
// Parameter sgt segitiga untuk keperluan pencarian
int sisiMiring(sgt segitiga) {
    int i; // Variabel iterasi
    int max = 0; // Variabel untuk menampung nilai terbesar dari sisi-sisi segitiga
    for (i = 0; i < 3; i++) // <-- for loop sebanyak 3 kali
    {
        if (max < segitiga.sisi[i]) // <-- control flow untuk komparasi max dengan segitiga.sisi[i]
        {
            // Jika max lebih kecil dari segitiga.sisi[i], maka
            max = segitiga.sisi[i]; // <-- masukkan nilai segitiga.sisi[i] ke max
        }
    }
    return max; // <-- kembalikan nilai max ke pemanggil
}

// Definisi fungsi integer luasSegitiga untuk proses penghitungan luas segitiga
int luasSegitiga(int n, sgt segitiga) {
    int i; // Variabel iterasi
    int alasTinggi[2]; // <-- Varaibel untuk menampung sisi selain sisi Miring
    int counter = 0; // <-- variabel iterasi untuk alasTInggi
    int temp = sisiMiring(segitiga); // <-- varaibel temp yang bernilai dari fungsi sisiMiring(segitiga)

    for (i = 0; i < 3; i++) // <-- for loop sebanyak 3 kali untuk memfilter sisi miring
    {
        if (segitiga.sisi[i] != temp) // <-- control flow untuk komparasi segitiga.sisi[ke-i] dengan temp
        {
            // Jika segitiga.sisi[i] tidak sama dengan temp, maka
            alasTinggi[counter++] = segitiga.sisi[i]; // <-- masukkan nilai segitiga.sisi[i] ke alasTinggi[counter++]
        }
    }
    
    segitiga.luas = (alasTinggi[0]*alasTinggi[1])/2; // <-- kalkulasi rumus luas segitiga dari alasTinggi lalau masukkan ke segitiga.luas
    
    return segitiga.luas; // <-- kembalikan nilai segitiga.luas ke pemanggil
}