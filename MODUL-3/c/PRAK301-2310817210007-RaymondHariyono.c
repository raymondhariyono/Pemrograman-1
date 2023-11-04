#include <stdio.h>

int main(){
    int a , b;
    for (int i = 0; i < 3; i++){
    scanf("%d %d",&a, &b);
    if (a > b){
        printf("%d %d \n",b,a);
        printf("\n");
    }

    else if (a < b){
        printf("%d %d \n",a,b);
        printf("\n");
    }
    else {printf("%d %d",a,b);}

    }
return 0;    
}   
