#include <stdio.h>
int main(){

 float putaran, jarak;
  
  printf("diketahui: \n");
  printf("Pak Dengklek mengelilingi taman: ");
   scanf("%f",& putaran);
   
   printf("Jarak tempuh Pak Dengklek: ");
   scanf("%f", & jarak);

   float keliling = jarak / putaran;
   float jariJari = keliling / (2 * 3.14);
  
   printf("jawaban : \n");
   printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer ", jariJari);

return 0;
}