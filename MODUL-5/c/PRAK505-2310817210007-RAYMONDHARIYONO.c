#include <stdio.h>
void Biodata(int tahunLahir, char nama[], char asalKota[]){
int tahun_sekarang = 2023;
int usia = tahun_sekarang - tahunLahir;

printf("Perkenalkan Nama Saya %s\n", nama);
printf("Umur saya %d\n", usia);
printf("Saya Adalah Angkatan: %d\n", tahun_sekarang);
printf("Asal Saya dari %s\n", asalKota);
}
int main() {
int tahunLahir;
 char Namaku[20], Asal[15];
 scanf(" %d",&tahunLahir);
 scanf(" %[^\n]%*c",&Namaku);
 scanf(" %[^\n]%*c",&Asal);
Biodata(tahunLahir, Namaku, Asal);
return 0;
}
