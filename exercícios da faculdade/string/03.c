/*Faça um programa que calcule e mostre o número de vogais de uma string. Feito
isso, o programa deve criptografar uma frase dada pelo usuário (a criptografia troca
as vogais da frase por *).
Frase: eu estou na escola
Saída: ** *st** n* *sc*l*.*/
#include <stdio.h>

void criptoVogal(char *str, int *contador){
    int i;
    (*contador)=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||
           str[i]=='e'||
           str[i]=='i'||
           str[i]=='o'||
           str[i]=='u'){
            (*contador)++;
            str[i]='*';
        }
    }
}

int main(){
    int cont=0;
    char palavra[]="paralelepipedo";
    printf("%s\n", palavra);
    criptoVogal(&palavra, &cont);
    printf("%s tem %d vogais\n", palavra, cont);
    return 0;
}
