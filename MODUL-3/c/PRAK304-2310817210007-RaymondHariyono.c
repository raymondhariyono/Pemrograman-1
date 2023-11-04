#include <stdio.h>

int main(){
    int a;

for (int i = 0; i < 5; i++){
    scanf("%d", & a);
    if (a >= 100){
        printf("melebihi bilangan \n");}

    else if (a <= 9 && a >= 1){
        printf("satuan \n");
        }
     else if (a <= 19 && a >= 10){
        printf("belasan \n");
        }
    else if (a <= 99 && a >= 20){ 
        printf("puluhan \n");
        }
    else {printf("NOl \n");}
}
return 0;
}