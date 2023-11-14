#include <stdio.h>

int main() {
    int n, m;
    int hasil=0, hasilBaris=0;
    scanf("%d %d", &n, &m);
    for (int i = 1; i < n+1; i++) {
        for (int j = i; j > 0; j--) {
            if (j > 1) {
                printf("(%d*%d) + ", j, m);
            }
            else if (j == 1) {
                int hasilTerakhir = (j * m);
                hasilBaris = hasilBaris + hasilTerakhir;
                printf("(%d*%d) = %d\n", j, m, hasilBaris);
                hasil = hasil + hasilBaris;
                hasilBaris = 0;
            }
        }
    }
    printf("%d", hasil);
    return 0;
}