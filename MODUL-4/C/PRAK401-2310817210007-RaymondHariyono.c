#include <stdio.h>

int main (){
    int angka;
    char simbol[10];
    int i;

    scanf ("%d%s",&angka,simbol);

    for( i=1; i <= 50; i++){
        if(i % angka == 0){
            printf("%s ", simbol);
        }
        else{
            printf("%d ", i);
        }
    }
return 0;
}