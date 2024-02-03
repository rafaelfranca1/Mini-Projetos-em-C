#include <stdio.h>
#include <math.h>

int main(){
    float x, i, s;
    x = 480;
    i = 10;
    s = 0;

    for(i = 10;i < 40; i = i + 1, x = x -5 ){
        if(((int)i)%2==0){
            s = s + x/i;
            printf("\n%f", s);
        }
        else{
            s = s - x/i;
            printf("|%f", s);
        }
    }

    return 0;
}
