#include <stdio.h>

int main(){

    int n1, n2;

    scanf("%d%d",&n1,&n2);

    if(n1 == n2){
        int arr1[n1];
        int arr2[n2];

        for(int i=0; i < n1; i++){
            scanf("%d",& arr1[i]);
        }

        for(int i=0; i < n2; i++){
            scanf("%d",& arr2[i]);
        }

        for(int i=0; i < n1 && i < n2; i++){
            int hasil = arr1[i] * arr2[i];
            printf("%d ", hasil);
        }
        printf("\n");
    }  
     else{
        printf("Jumlah tidak sama");
     }
return 0;
}