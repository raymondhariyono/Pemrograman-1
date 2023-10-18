#include <stdio.h>
#include <math.h>
int main(){
int a, b;

printf("Input \n");
scanf("%d",& a);
scanf("%d",& b);

int alas = sqrt(pow(b,2)-(pow(a,2)));
int tinggi = a;
int keliling = a + b + alas;
int luas = 0.5 * alas * tinggi;

printf("\n");
printf("Output \n");

printf("Alas= %d cm \n", alas);
printf("Tinggi= %d cm \n", tinggi);
printf("keliling= %d cm \n", keliling);
printf("Luas= %d cm^2 \n", luas);

return 0;
}