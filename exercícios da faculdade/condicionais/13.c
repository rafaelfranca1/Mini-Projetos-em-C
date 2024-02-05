#include <stdio.h>

int main(){
    double mi, mf, mt;
    int time = 0;

    printf("digite a massa: ");
    scanf("%lf", &mi);

    mt = mi;

    while(mi>=0.5){
        mf = mi / 2;
        time = time + 50;
        mi = mf;
    }
    
    printf("massa inicial: %lf\n", mt);
    printf("massa final: %lf\n", mf);
    printf("tempo: %d\n", time);

    return 0;
}