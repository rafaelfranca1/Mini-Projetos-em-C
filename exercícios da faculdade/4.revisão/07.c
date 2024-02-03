#include <stdio.h>
#include <math.h>

int main(){
    int termos;
    float x, i, s;
    x = 480;
    i = 10;
    s = 0;

    printf("digite o numero de termos: ");
    scanf("%d", &termos);

    for(i = 10;i < termos; i = i + 1, x = x -5 ){
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
