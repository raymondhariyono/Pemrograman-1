#include <stdio.h>

int reverse(int angka) {
    int angkaReverse = 0;
    while (angka > 0) {
        angkaReverse = angkaReverse * 10 + angka % 10;
        angka /= 10;
    }
    return angkaReverse;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    A = reverse(A);
    B = reverse(B);

    int C = A + B;
    printf("%d", reverse(C));

    return 0;
}
