#include "header.h"

int main() {
    int i, n;

    scanf("%d", &n);
    dataNilai mahasiwa[n];

    for (i = 0; i < n; i++)
    {
        scanf("%s", &mahasiwa[i].nama);
        scanf("%d", &mahasiwa[i].nilai);
    }

    pengelompokan(mahasiwa, n, 'A', 90, 100);
    pengelompokan(mahasiwa, n, 'B', 80, 89);
    pengelompokan(mahasiwa, n, 'C', 70, 79);
    pengelompokan(mahasiwa, n, 'D', 60, 69);
    pengelompokan(mahasiwa, n, 'E', 0, 60);
    
    return 0;
}