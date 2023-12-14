#include <stdio.h>

void main(){
    int ordo,baris1,baris2;

    scanf("%d", &ordo);

    int arr1[ordo][ordo];
    int arr2[ordo][ordo];

    printf("Matriks A: \n");
    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Matriks B: \n");
    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            scanf("%d",&arr2[i][j]);
        }
    } 
    
    int hasil[ordo][ordo];

    for(int i = 0; i < ordo; i++){
        for(int j = 0; j < ordo; j++){
            hasil[i][j] = 0;
            for(int h = 0; h < ordo; h++){
                hasil[i][j] += arr1[i][h] * arr2[h][j];
            }
        }
    }

    printf("Matriks AXB: \n");
    for(int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}