#include <stdio.h>

int medidasDoRetangulo(float b, float h, float *a, float *p){
    *a=b*h;
    *p=2*(b*h);
    if(h==b){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    float b, h, a, p;
    scanf("%f %f", &b, &h);
    medidasDoRetangulo(b, h, &a, &p);
    if(medidasDoRetangulo(b, h, &a, &p)==1){
        printf("quadrado\n");
    }
    else{
        printf("retangulo\n");
    }
    printf("area = %f, perimetro = %f", a, p);
    return 0;
}
