#include <stdio.h>
#include <windows.h>

int main(){
    int h, m, s;

    printf("Bem-vindo ao Relogio Digital!\n");
    printf("Digite o horario atual (hh mm ss): ");
    scanf("%d %d %d", &h, &m, &s);

    if(h>23||h<0||m>59||m<0||s>59||s<0){
        printf("ERRO! Horario invalido.\n");
        return 1;
    }

    printf("Iniciando Relogio Digital...\n");
    Sleep(3000);
    system("cls");

    while(1){
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>23)
            h=0;

        printf("Relogio Digital: %02d:%02d:%02d\n", h, m, s);

        Sleep(1000);
        system("cls");
    }

    return 0;     
}