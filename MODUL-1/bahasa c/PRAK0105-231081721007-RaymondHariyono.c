#include <stdio.h>
int main(){

int a, b, x, y;
   printf("Variabel a bernilai ");
   scanf("%d",& a);
   
   printf("Variabel b bernilai ");
   scanf("%d", & b);
   
   printf("Variabel x bernilai ");
   scanf("%d", & x);

   printf("Variabel y bernilai ");
   scanf("%d", & y);

int hasilbagi=(x % y) +(a % b);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d" , hasilbagi);

return 0;
}