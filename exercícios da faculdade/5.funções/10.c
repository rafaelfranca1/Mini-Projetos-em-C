#include <stdio.h>

double metros(int pes, int polegadas){
    double pe, polegada, tamanho;
    pe=pes*30.48;
    polegada=polegadas*2.54;
    tamanho=(pe+polegada)/100;
    return tamanho;
}

int main(){
    int pe, pol;
    double tamanho;
    printf("digite o tamanho em pes: ");
    scanf("%d", &pe);
    printf("digite o tamanho em polegadas: ");
    scanf("%d", &pol);
    tamanho = metros(pe, pol);
    printf("o tamnho em metros eh %.3lf", tamanho);
    return 0;
}
