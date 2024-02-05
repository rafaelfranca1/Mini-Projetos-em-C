#include <stdio.h>

void totalsegundos(int a, int *h, int *m, int *s){
    *h=a/3600;
    a=*h%3600;
    *m=a/60;
    a=*m/60;
    *s=a/60;
}

int main(){
    int a, h, m, s;
    scanf("%d", &a);
    totalsegundos(a, &h, &m, &s);
    printf("%d horas %d minutos %d segundos", h, m, s);
    return 0;
}
