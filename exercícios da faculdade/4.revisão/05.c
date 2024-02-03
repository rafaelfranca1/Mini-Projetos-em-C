#include <stdio.h>
#include <math.h>

int main(){
    float x, y, i, s;
    x = 2;
    y = 10;
    i = 1;
    s = 0;

    for(i = 1;i < 11; i = i + 1){
        s = s + (pow(x, i)/ y);
        y = y - 1;
    }

    printf("%f", s);
    return 0;
}
