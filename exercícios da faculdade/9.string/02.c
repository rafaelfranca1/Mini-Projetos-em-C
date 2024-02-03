/*Ler uma frase e contar o número de palavras dessa frase. Considere que as
palavras estão separadas por espaços.*/
#include <stdio.h>

void contPalavras(char *str, int *contador){
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            (*contador)++;
    }
    (*contador)++;
}

int main(){
    char palavra[]="a aranha arranha a ra e a ra arranha a aranha quanto mais a aranha arranha a ra mais a ra arranha a aranha";
    int cont=0;
    contPalavras(&palavra, &cont);
    printf("%d\n", cont);
    return 0;
}
