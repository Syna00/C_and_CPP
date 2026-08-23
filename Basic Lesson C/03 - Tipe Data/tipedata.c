#include <stdio.h>

int main(){
    int x, a, b, c; //int = Sebuah tipe data yang memiliki nilai berupa angka (Bilangan Bulat).
    float y, d, e, f; //float = Sebuah tipe data yang memiliki nilai berupa angka (Bilangan Desimal).
    char z, g, h, i; //char = Karakter (semua tombol di keyboard bisa dimasukkan).
    /* Cara peng-outputan tipe data int ini dengan %d
    Cara peng-outputan tipe data float ini dengan %f
    Cara peng-outputan tipe data char ini dengan %c
    */
    // 1. Di bawah ini adalah contoh tipe data integer
    x = 10;
    a = 20;
    printf("sepuluh = %d\ndua puluh = %d\n",x,a);
    // 2. Di bawah ini adalah contoh tipe data float
    y = 3.14;
    d = 0.4444;
    printf("Phi = %.2f\n4 dibagi 9 = %.3f\n",y,d);
    // 3. Di bawah ini adalah contoh tipe data char
    z = '()';
    g = '#';
    printf("Tanda kurung = %c\nTanda pagar = %c\n", z, g);
    //4. Kalau ketika print charcter menggunakan int akan menghasilkan biner
    h = 'A';
    printf("Ini adalah huruf 'A' yang dikonfersikan menjadi biner = %d\n", h);
    return 0;
}


