#include <stdio.h>

int MaxBilangan(int a, int b, int c, int d) {
    int maxAB = (a > b) ? a : b;  
    int maxCD = (c > d) ? c : d;  
    return (maxAB > maxCD) ? maxAB : maxCD;
}

int main() {
int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = MaxBilangan(a, b, c, d);
        printf("%d", hasil);

return 0;
}