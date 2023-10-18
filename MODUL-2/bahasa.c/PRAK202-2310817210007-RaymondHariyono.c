#include <stdio.h>

int main(){
    float pertama;
    float kedua;

    printf("Input \n");
    
    printf("Masukkan Nilai Pertama: ");
    scanf("%g",& pertama);
    
    printf("Masukkan Nilai Kedua: ");
    scanf("%f",& kedua);
   
    float hasil = pertama + kedua;
    
    printf("\n");
    printf("Output \n");
    printf("hasil dari nilai pertama \"%g\" dan nilai kedua \"%.1f\" adalah \"%.2f",pertama, kedua, hasil);
    
return 0;
}