#include <stdio.h>

int main()
{
    int tseg, seg, min, hour;
    
    printf("digite o numero de segundos: ");
    scanf("%d", &tseg);

    hour = tseg / 3600;
    tseg = tseg % 3600;
    min = tseg / 60;
    seg = tseg % 60;
    
    printf("Corresponde a: %d hora(s), %d minuto(s) e %d segundo(s)", hour, min, seg);

    return 0;
}