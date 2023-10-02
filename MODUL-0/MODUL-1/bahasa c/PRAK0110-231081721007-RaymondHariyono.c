#include <stdio.h>
#include <math.h>
int main(){

int alas, tinggi, sisiA, sisiB, sisiC;
printf("diketahui : \n");

printf("alas = ");
scanf("%d" ,&alas);

printf("tinggi = ");
scanf("%d" ,&tinggi);

sisiA = tinggi;
sisiB = sqrt(pow (alas , 2) + pow(tinggi , 2));
sisiC = alas;

int keliling = sisiA + sisiB + sisiC;
int luas = 0.5 * alas * tinggi;

printf("jawab : \n");
printf("Sisi A = %d cm \n" , sisiA);
printf("Sisi B = %d cm \n" , sisiB);
printf("Sisi C = %d cm \n" , sisiC);
printf("keliling %d cm \n" , keliling);
printf("luas %d cm " , luas);

return 0;
}