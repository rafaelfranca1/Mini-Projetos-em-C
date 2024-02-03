/*Fazer um programa para ler uma string e um caracter qualquer. Calcular o número
de ocorrências desse caracter na string. Exemplo: Seja a string "maracatu" e o
caracter 'a', então o número de ocorrências de 'a' é 3.*/
#include <stdio.h>

void contChar(char *str, int *contador, char caracter){
    int i;
    *contador=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==caracter){
            (*contador)++;
        }
    }
}

int main(){
    char principal[]="paralelepipedo", letra;
    int cont=0;
    scanf(" %c", &letra);
    contChar(principal,&cont,letra);
    printf("a letra %c aparece %d vezes", letra, cont);
    return 0;
}
