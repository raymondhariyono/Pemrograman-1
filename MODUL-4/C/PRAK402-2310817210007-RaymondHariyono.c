#include <stdio.h>

int main (){
int batas;
scanf("%d",&batas);
for(int i= 1; i <= batas; i++){
    if (i % 2 == 1){
    printf("%d ", i);
    }
}
printf("\n");

for(int j = batas; j > 1; j--){
    if ( j % 2 == 0){
    printf("%d ", j);
    }
}
return 0;
}