#include <stdio.h>

int main(){
    float f, c;

    printf("Fahrenheit | Celcius\n");

    for(f=50;f<=65;f=f+1){
        printf("     %.2f |", f);
        c = (f-32)/1.8;
        printf(" %.2f\n", c);
    }

    return 0;
}
