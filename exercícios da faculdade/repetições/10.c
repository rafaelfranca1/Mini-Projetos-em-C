#include <stdio.h>
#include <math.h>

int main(){
    int potencia = 0, k = 2, y;
    
    for(y=1;y<=10;y = y + 1){
        potencia = pow(k,y);
        printf("%d elevado a %d = %d\n", k, y, potencia);
    }
    return 0;
}
