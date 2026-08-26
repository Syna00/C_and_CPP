#include <stdio.h>

int main(){
    int a, b, hasil;
    float c, d, result;
    printf("Hallo ini adalah program Operasi Matermatika");
    printf("\n \n");
    printf("Masukkan nilai pertama : ");
    scanf("%d", &a);
    printf("Masukkan nilai kedua : ");
    scanf(" %d", &b);
    // Operasi penjumlahan (+)
    hasil = a + b;
    printf("\n%d + %d = %d", a, b, hasil);
    printf(" Hasil penjumlahan (+)");
    // Operasi pengurangan (-)
    hasil = a - b;
    printf("\n%d - %d = %d", a, b, hasil);
    printf(" Hasil pengurangan (-)");
    // Operasi perkalian (*)
    hasil = a * b;
    printf("\n%d x %d = %d", a, b, hasil);
    printf(" Hasil perkalian (*)");
    printf("\n \n");
    // Operasi pembagian (/)
    printf("Khusus untuk pembagian input data di bawah ini\n ");
    printf("\nMasukkan angka pertama : ");
    scanf("%f", &c);
    printf("Masukkan angka kedua : ");
    scanf("%f", &d);
    result = c / d;
    printf("%.1f / %.1f = %.2f", c, d, result);
    printf(" Hasil bagi Menggunakan float (/)");
    return 0;
}