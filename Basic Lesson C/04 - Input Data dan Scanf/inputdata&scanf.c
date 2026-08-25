#include <stdio.h>

int main(){
    int x, a, b, hasil; //untuk int atau integer itu menggunakan %d
    char y, c, d; //untuk char itu menggunakan %c
    float z; // untuk float itu menggunakan %f

    // 1. Program di bawah ini digunakan untuk user menginput integer :
    printf("Masukkan nilai : ");
    scanf("%d", &x);
    printf("Nilai yang baru saja anda masukkan adalah : %d",x);
    printf("\n \n");
    // 2. PRogram di bawah ini digunakan untuk user menginput karakter :
    printf("Masukkan karakter : ");
    scanf(" %c", &y);
    printf("Karakter yang kamu masukkan adalah : %c", y);
    printf("\n \n");
    // 3. Program di bawah ini digunakan user untuk menginput nilai desimal:
    printf("Masukkan angka desimal : ");
    scanf(" %f", &z);
    printf("Angka desimal yang anda masukkan adalah : %.2f", z); // Pembuat program bisa mengatur ada berapa banyak angka di belakang koma menggunakan sintaks ini.
    printf("\n \n");
    // 4. Program di bawah ini digunakan untuk menginput angka/integer yang ingin user tambahkan
    printf("Masukkan nilai yang akan dijumlahkan : ");
    scanf(" %d", &a);
    printf("Masukkan nilai selanjutnya : ");
    scanf("%d", &b);
    hasil = a + b ;
    printf("Hasilnya adalah : %d + %d = %d", a, b, hasil);
    printf("\n \n");
    // 5. Program di bawah ini digunakan untuk menginput beberapa karakter/menambahkan lebih dari 1 karakter menggunakan tipe data char
    printf("Masukkan karakter pertama : ");
    scanf(" %c", &c);
    printf("Masukkan karakter selanjutnya : ");
    scanf(" %c", &d);
    printf("Karakter yang kamu masukkan adalah : %c dan %c", c, d);

    return 0;
}