#include <stdio.h>

int main(){
    int a;
    for (int i = 0; i < 5; i++){
        scanf("%d", & a);
        if (a >=80){
            printf("A \n");}

        else if (a <= 79 && a >= 70){
            printf("B \n");
        }
        else if (a <= 69 && a >= 60){
            printf("C \n");
        }
        else if (a <= 59 && a >= 50){
            printf("D \n");
        }
        else {printf("E \n");}
     }

return 0;
}