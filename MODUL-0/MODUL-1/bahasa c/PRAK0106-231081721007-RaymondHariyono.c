#include <stdio.h>
int main(){
   
int a, b, c;
  printf("Variabel a bernilai ");
  scanf("%d",&a);
   
  printf("Variabel b bernilai ");
  scanf("%d", &b);
   
  printf("Variabel a bernilai ");
  scanf("%d", &c);

  printf("Apakah a sama dengan b ? jawabannya adalah %d \n" , a == b);
  printf("Apakah b lebih besar dari c ? jawabannya adalah %d \n" , b > c);
  printf("Apakah b tidak sama dengan c ? jawabannya adalah %d" , a != b);  

return 0;
}