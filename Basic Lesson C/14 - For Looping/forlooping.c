#include <stdio.h>

int main(){
    int n;
    printf("Program Looping Dengan For Looping\n");
    // Contoh Pertama :
    printf("Contoh Pertama : \n");
    for( n=1 ; n<=5 ; n++){
        printf("%d\n", n);
    }
    // Contoh Kedua :
    printf("\n\nContoh Kedua : \n");
    for( n=1 ; n>=-5 ; n--){
        printf("%d\n", n);
    }
    // Contoh Ketiga ;
    printf("\n\nContoh ketiga : \n");
    for( n=1 ; n<=15 ; n+=2){
        printf("%d\n", n);
    }
    printf("\n\nContoh keempat : \n");
    for( n=1 ; n>=-5 ; n++){ 
        printf("%d\n", n); // Looping ini akan terus berjalan sampe kiamat
    }
    //Akhir
    printf("\nEND");
    return 0;
}