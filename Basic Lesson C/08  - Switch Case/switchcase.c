#include <stdio.h>

int main(){
    int x;
    printf("Masukkan nilai x : ");
    scanf("%d", &x); 

    switch(x){
        case 1 : // Sama kayak ----> if(x==1)
        printf("x = 1\n");
        break; // Untuk menghentikan sebuah program berjalan ke program selanjutnya
        case 2 : 
        printf("x = 2\n");
        break;
        case 3 : 
        printf("x = 3\n");
        break;
        case 4 : 
        printf("x = 4\n");
        break;
        case 5 : 
        printf("x = 5\n");
        break;
        default :
        printf("Kosong\n");
    }

    printf("\n\t\tEND");
    return 0;
}