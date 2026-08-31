#include <stdio.h>

int main(){
    int x = 0;
    do{
        printf("Looping ke-%d\n", x);
        x++;
    }while(x<4);
    return 0;
}

/*
Looping ini bekerja dengan mengeluarkan output dulu dari printf yang ada di do, 
kemudian lanjut ke si whilenya dan menjadi syarat apakah programnya akan terus berlanjut atau tidak.
*/