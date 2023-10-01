#include <stdio.h>
int main(){

int a , b , c;
   printf("nilai a: ");
   scanf("%d" , & a);
   
   printf("nilai b: ");
   scanf("%d" , & b);
   
   printf("nilai c: ");
   scanf("%d" , & c);
   
float keliling = a + b + c;
int hargaTanah = 85000;
int biayaDiperlukan= keliling * hargaTanah;
   printf("Diketahui : \n");
   printf("Panjang sisi segitiga berturut-turut adalah %d, %d dan %d \n", a,b,c);
   printf("Keliling Tanah Pak Dengklek adalah %.0f \n" , keliling);
   printf("Harga tanah Per Meter adalah %d  \n" , hargaTanah);
   printf("jawaban: \n");
   printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",biayaDiperlukan);

return 0;
}