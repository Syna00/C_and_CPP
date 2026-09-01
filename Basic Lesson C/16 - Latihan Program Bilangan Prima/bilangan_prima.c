#include <stdio.h>

int main(){
    int a,b,c;
    start:
    printf("Program Bilangan Prima\n\n");
    printf("Masukkan Angka : ");scanf("%d",&a);
    b = 0;
    for(c = 1; c<=a ; c++){
        if(a%c == 0) b++;
    }
    if(b==2){
        printf("Angka %d adalah Bilangan PRIMA", a);
    }
    else{
        printf("Angka %d BUKAN Bilangan PRIMA", a);
    }

    printf("\n\n");
    goto start;
    return 0;
}