#include <stdio.h>

int main(){
    int a, b, hasil;
    char g;
    g = '%';
    printf("Operasi Modulus (%c) :", g);
    printf("\n \n");
    printf("Masukkan nilai pertama : ");
    scanf("%d", &a);
    printf("Masukkan nilai kedua : ");
    scanf("%d", &b);
    hasil = a % b;
    printf("%d mod %d = %d", a, b, hasil);
    printf(" bilangan di samping adalah modulus");
    return 0;
}