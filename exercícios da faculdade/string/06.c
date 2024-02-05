/*Fazer um programa para ler uma string e um caracter qualquer. Construir um
vetor (OC) contendo as posições (índices) de onde ocorre o caracter na string.
Exemplo: Seja a string "abracadabra!!!" e o caracter 'a', então o vetor de índices OC
deverá conter os seguintes valores: { 0 3 5 7 10 -1}. O valor -1 indica final de vetor,
ou seja, que não existem mais ocorrências. Caso, não exista nenhuma ocorrência,
deve ser armazenado o valor -1 no vetor*/
#include <stdio.h>

void ocorrencia(char *str, int v[], char caracter){
    int i, j=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==caracter){
            v[j]=i;
            j++;
        }
    }
    v[j]=-1;
}

int main(){
    int v[10];
    char palavra[]="abracadabra", letra='a';
    ocorrencia(palavra, v, letra);
    for(int i=0;i<10;i++){
        printf("%d ", v[i]);
        if(v[i]==-1)
            break;
    }
}