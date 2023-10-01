#include <stdio.h>
int main(){

 float putaran, jarak;
  
  printf("Pak Dengklek mengelilingi taman: ");
   scanf("%f",& putaran);
   
   printf("Jarak tempuh Pak Dengklek: ");
   scanf("%f", & jarak);

   float keliling = jarak / putaran;
   float jariJari = keliling / (2 * 3.14);
   printf("Diketahui : \n");
   printf("Pak Dengklek mengelilingi taman = %0.f putaran \n" , putaran);
   printf("jarak tempuh Pak Dengklek = %.0f kilometer\n" , jarak);
   printf("jawaban : \n");
   printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f kilometer\n", jariJari);

return 0;
}