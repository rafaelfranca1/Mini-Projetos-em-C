#include <stdio.h>
#include <math.h>

float distancia(int a, int b, int c, int d){
    float dis, x, y, xx, yy, total;
    x=b-a;
    y=d-c;
    xx=pow(x,2);
    yy=pow(y,2);
    total= xx+yy;
    dis=sqrt(total);
    return dis;
}

int main(){
    int x1, y1, x2, y2;

    printf("digite a coordenada do primeiro ponto: ");
    scanf("%d %d", &x1, &y1);

    printf("digite a coordenada do segundo ponto: ");
    scanf("%d %d", &x2, &y2);

    printf("%f", distancia(x1,x2,y1,y2));
    return 0;
}
