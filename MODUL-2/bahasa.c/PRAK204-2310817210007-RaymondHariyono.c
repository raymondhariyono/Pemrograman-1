#include <stdio.h>
#define phi 3.142857
int main(){
    float r,t;
    
    printf("Input \n");
        scanf("%f",&r);
        scanf("%f",&t);

    float v= phi * r*r * t;
    float l= 2 * phi * r *(r+t);
    float k= 2 * phi * r;
    
    printf("\n");
    printf("Output \n");

    printf("Alas = %.2f \n", v);
    printf("Tinggi = %.2f \n", l);
    printf("Keliling = %.2f", k);

return 0;
}