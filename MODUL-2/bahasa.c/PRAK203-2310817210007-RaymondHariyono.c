#include <stdio.h>

int main(){
    float a, b, i, j, x, y;
    
    printf("Input \n");
    
    scanf("%f",&a);
    scanf("%f",&b); 
    scanf("%f",&i);
    scanf("%f",&j);
    scanf("%f",&x);
    scanf("%f",&y);

    float hasil=(a-b)*(i/j)-(x+y);
        
        printf("Output \n");
        printf("%.3f",hasil);

return 0;    
}