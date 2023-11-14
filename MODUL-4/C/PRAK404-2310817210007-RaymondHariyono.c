#include<stdio.h>

int main(){
    int pilihan;
    float angka1,angka2,hasil;

    while(1){
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        if(pilihan == 5){
            printf("Terimakasih, telah menggunakan kalkulator Raymond Hariyono");
            break;
        }
        else if(pilihan < 5 && pilihan >0){
   
    printf("masukkan angka pertama:");
    scanf("%f", &angka1);
    printf("masukkan angka kedua:");
    scanf("%f", &angka2);
        
        if(pilihan == 1){
            hasil = angka1 + angka2;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n",angka1,angka2,hasil);
        }
        else if(pilihan == 2){
            hasil =  angka1 - angka2;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n",angka1,angka2,hasil);
        }
        else if(pilihan == 3){
            hasil =  angka1 * angka2;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n",angka1,angka2,hasil);
        }
        else if(pilihan == 4){
            hasil =  angka1 / angka2;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f \n",angka1,angka2,hasil);
        }

        }
        else{printf("Input anda salah, coba lagi \n");}
    }
    return 0;
}