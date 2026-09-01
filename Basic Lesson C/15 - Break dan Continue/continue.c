#include <stdio.h>

int main(){
    int u;
    for (u = 1 ; u<=10 ; u++){
        if(u==5)continue;
        printf("\nLooping ke-%d", u);
    }
    printf("\nEND");
}

/* Fungsi continue ini untuk memberhentikan program yang ada di dalam if aja
Contohnya progam yang ada di atas itu hanya looping ke 5 yang tidak mengeluarkan output printf
*/
