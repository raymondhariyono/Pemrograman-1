#include <stdio.h>
#include <string.h>

void main(){
    char baris1[30],baris2[30];

    scanf(" %[^\n]", &baris1);
    scanf(" %[^\n]", &baris2);

    printf("\n");

    size_t SIZE_baris1 = strlen(baris1);
    size_t SIZE_baris2 = strlen(baris2);

    if(SIZE_baris1 == SIZE_baris2){

        size_t i = 0;
        size_t j = 0;
 
        int asterisk = 0;
        int hash = 0;

        while(i < SIZE_baris1 && j < SIZE_baris2){

            if(baris1[i] == ' ' && baris2[j] ==' '){
                i++;
                j++;
                continue;
            }
            if(baris1[i] == baris2[j]){
                printf("*");
                asterisk++;
            }
            else{
                printf("#");
                hash++;
            }
            i++;
            j++;
        }
        printf("\n* = %d\n",asterisk);
        printf("# = %d\n",hash);

        if (asterisk >= hash){
            printf("Pesan Asli");
        }
        else{
            printf("Pesan Palsu");
        }
    
}else{
        printf("Panjang kalimat berbeda, pesan palsu");
    }
}