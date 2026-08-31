#include <stdio.h>
/*
    or ----> ||
    and ---> &&
    not ---> !=

    or :
    TRUE || TRUE = TRUE
    TRUE || FALSE = TRUE
    FALSE || FALSE = TRUE
    x<1 atau x>5 = +++++1-----5+++++++

    and :
    TRUE && TRUE = TRUE 
    TRUE && FALSE = FALSE
    FALSE && FALSE = FALSE
    1<x<5 = -----1+++++5------

    not :
    2<3 ---> TRUE : !(2<3) ---> FALSE 
    3 != 5 ---> TRUE 
    1 != 1 ---> FALSE

*/
int main(){
    //CONTOH PENGGUNAKAAN OR :

    if(2<4 || 2>4){ // kondisi ini adalah or dengan adanya variabel true dan false
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }

    //CONTOH PENGGUNAAN AND :

    if(2<4 && 2>4){ // kondisi ini adalah penggunaan and dengan adanya variabel true dan false
        printf("TRUE");
    }
    else{
        printf("\nFALSE");
    }

    //CONTOH PENGGUNAAN NOT :

    if(2!=3){ // kondisi ini adalah penggunaan not dengan adanya variabel true dan false
        printf("\nTRUE");
    }
    else{
        printf("FALSE");
    }

    return 0;
}