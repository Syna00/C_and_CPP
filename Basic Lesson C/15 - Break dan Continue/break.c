#include <stdio.h>

int main(){
    int i;
    //Contoh penggunaan Break
    for(i = 1 ; i<=10 ; i++){
        if(i==3) break; // Kalau taro if dan breaknya di sini maka program printf akan berhenti di 2
        printf("\nLooping ke-%d", i);
        // Tapi kalau di taro di sini maka akan berhenti di i==3
    }
    printf("\nEND");
    return 0;
}