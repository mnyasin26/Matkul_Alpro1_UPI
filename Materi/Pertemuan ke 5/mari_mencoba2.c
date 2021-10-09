#include <stdio.h>

typedef struct
{
    int nilai;
    int nim;
}mahasiwa;

int main () {
    mahasiwa m1, m2, m3;

    printf("masukan nim dan nilai mahasiswa 1:\n");
    scanf("%d %d", &m1.nim, &m1.nilai);
    printf("masukan nim dan nilai mahasiswa 2:\n");
    scanf("%d %d", &m2.nim, &m2.nilai);
    printf("masukan nim dan nilai mahasiswa 3:\n");
    scanf("%d %d", &m3.nim, &m3.nilai);

    if ((m1.nilai >= m2.nilai) && (m1.nilai >= m3.nilai))
    {
        printf("nilai terbesar adalah pada nim: %d", m1.nim);
    } else if ((m2.nilai >= m1.nilai) && (m2.nilai >= m3.nilai))
    {
        printf("nilai terbesar adalah pada nim: %d", m2.nim);
    } else {
        printf("nilai terbesar adalah pada nim: %d", m3.nim);
    }
    
    return 0;

}
