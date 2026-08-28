#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    float x,y, hasil;
    char kabataku;
    start :
    printf("\t\t\t|==============================|\n");
    printf("\t\t\t| Program Kalkulator Sederhana |\n");
    printf("\t\t\t|==============================|\n\n\n");

    awal:
    printf("\nMasukkan Angka Pertama Anda : ");scanf("%f", &x);
    printf("Masukkan Operasi Matematikanya = +, -, x, / : ");scanf(" %c",&kabataku);
    printf("Masukkan Angka Kedua Anda : ");scanf("%f", &y);


    if(kabataku == '+') hasil = x + y;
    else if(kabataku == '-') hasil = x - y;
    else if(kabataku == '/') hasil = x / y;
    else if(kabataku == 'x') hasil = x * y;
    else{
        printf("Anda Salah Memasukkan Operasi");
        goto awal;
    }
    printf("Hasilnya adalah = %.2f\n\n\n", hasil);
    getch();
    system("cls");
    goto start;
    return 0;
}