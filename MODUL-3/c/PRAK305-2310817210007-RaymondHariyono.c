#include <stdio.h>

int main(){

    int hari,jam,menit,detik;
    
    for (int i = 0; i < 5; i++){
    scanf("%d",&detik);

    hari = detik / 86400;
    detik %= 86400;
    jam = detik / 3600;
    detik %= 3600;
    menit = detik / 60;
    detik %= 60;
    
        if (hari > 0){
            printf("%02d hari %02d:%02d:%02d \n",hari, jam, menit, detik);
        }
        else{
            printf("%02d:%02d:%02d \n",jam, menit, detik);
        }
    }
    return 0;
}