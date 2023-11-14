#include <stdio.h>

int main (){
int batas1;
int batas2;
scanf("%i%i",&batas1,&batas2);

    if(batas1 > batas2){
        for(int i= batas2; i <= batas1; i++){
        printf("%d %d - ", i, batas1 + batas2 - i);
    }
}
    else {
        for(int i= batas2; i >= batas1; i--){
        printf("%d %d - ", i, batas1 + batas2 - i);}
}
return 0;
}