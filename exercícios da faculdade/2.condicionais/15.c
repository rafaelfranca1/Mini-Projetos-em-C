#include <stdio.h>

int main(){
    double x =  1, y = 1, s = 0;

    while(y<=50){
        s = s + x / y;
        x = x + 2;
        y = y + 1;
    }

    printf("soma: %lf", s);

    return 0;
}