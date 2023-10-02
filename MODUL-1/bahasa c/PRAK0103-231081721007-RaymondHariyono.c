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

float hasil=(float) (a + b) * x / y;
  printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f ", hasil);
 
  return 0;
}

