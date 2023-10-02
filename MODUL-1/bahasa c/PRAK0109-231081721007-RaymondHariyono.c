#include <stdio.h>
int main(){

int pasukanYuZhong, jumlahPahlawan;
printf("jumlah pasukan yang dibawa Yu Zhong: ");
   scanf("%d",& pasukanYuZhong);

printf("jumlah pahlawan: ");
   scanf("%d", & jumlahPahlawan);

int pasukanYangHarusDikalahkan = pasukanYuZhong / jumlahPahlawan;
printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan" , pasukanYangHarusDikalahkan);
}
