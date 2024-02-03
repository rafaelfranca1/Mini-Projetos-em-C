#include <stdio.h>
#include <string.h>

void abreviador(char str[], char str2[]){
    int i, j=0, espacos=0, cont=0;
    int tam=strlen(str);
    for(int i=0;i<tam;i++){
        if(str[i]==' ')
            espacos++;
    }
    for(int i=0;i<tam;i++){
        if(str[i]==' '){
            cont++;
            if(cont!=espacos){
                if(cont==1)
                    str2[j++]=' ';
                str2[j++]=str[i+1];
                str2[j++]='.';
                str2[j++]=' ';
            }
        }
        else if(cont==0||cont==espacos){
            str2[j++]=str[i];
        }
    }
    str2[j]='\0';
}

int main(){
    char nome[50], saida[50];
    printf("Nome: "); fgets(nome,50,stdin);
    abreviador(nome,saida);
    printf("Abreviacao: %s", saida);
    return 0;
}