#include <stdio.h>
int main(){

int hargaSepatuA;
    printf("Harga sepatu A adalah "); 
    scanf("%d" , & hargaSepatuA);
   
int hargaSepatuB;
    printf("Harga sepatu B adalah "); 
    scanf("%d" , & hargaSepatuB);

float diskonA= 0.13;
float diskonB= 0.21;

int hargadiskonA = hargaSepatuA*(1-diskonA);
int hargadiskonB = hargaSepatuB*(1-diskonB);

printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n" , hargadiskonA);
printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d" , hargadiskonB);

return 0;
 }