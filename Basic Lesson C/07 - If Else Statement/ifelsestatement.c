#include <stdio.h>

int main(){
    int x;
    printf("Nilai x : ");
    scanf("%d", &x);
    if(x == 2){
        printf("Nilai yang anda masukkan adalah 2\n");
    }
    else if(x == 3){
        printf("Nilai yang anda masukkan adalah 3\n");
    }
    else if(x == 5){
        printf("Nilai yang anda masukkan adalah 5\n");
    }
    else{
        printf("Nilai yang anda masukkan bukan 2\n");
    }
    printf("END");
    return 0;
}