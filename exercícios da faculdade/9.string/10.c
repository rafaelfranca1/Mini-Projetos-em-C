/*Implemente uma função que junta/concatena duas strings, assim como a
função strcat()*/
#include <stdio.h>

void junta(char *str1, char *str2, char *str3){
    int i, j;
    for(i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
    }
    for(j=0;str1[j]!='\0';j++){
        if(j==0)
            str3[j+i]=' ';
        else
            str3[j+i]=str2[j-1];
    }
}

int main(){
    char palavra1[1001]="amarelo mais azul eh igual a", palavra2[1001]="verde", frase[1001*2];
    junta(palavra1, palavra2, frase);
    printf("%s", frase);
    return 0;
}
