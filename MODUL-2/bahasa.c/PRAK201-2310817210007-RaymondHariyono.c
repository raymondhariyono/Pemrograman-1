#include <stdio.h>

int main(){
    char nama[30], nim[30], paralel[30], ttl[30], alamat[30], hobby[30], no[30];
       
        printf("Input \n");
        printf("Nama                   :");
        gets(nama);

        printf("NIM                    :");
        gets(nim);
        
        printf("Kelas paralel          :");
        gets(paralel);
        
        printf("Tempat/Tanggal lahir   :");
        gets(ttl);
        
        printf("Alamat                 :");
        gets(alamat);
        
        printf("Hobby                  :");
        gets(hobby);
       
        printf("No.HP                  :");
        gets(no);
        
        printf("\n");
        printf("Output \n");
        
        printf("Nama                   :%s \n", nama);
        printf("NIM                    :%s \n", nim);
        printf("Kelas paralel          :%s \n", paralel);       
        printf("Tempat/Tanggal lahir   :%s \n", ttl);        
        printf("Alamat                 :%s \n", alamat);        
        printf("Hobby                  :%s \n", hobby);       
        printf("No.HP                  :%s \n", no);
          
return 0;
}