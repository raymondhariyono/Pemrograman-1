#include <stdio.h>

int main(){
    int a;

for (int i = 0; i < 3; i++){
    scanf("%d", & a);
    
    if (a < 0){
        printf("negatif \n");
        }

    else if (a > 0){
        printf("positif \n");
        }

    else printf("nol \n");
}    
return 0;
    
}