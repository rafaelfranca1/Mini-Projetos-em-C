#include <stdio.h>

void copy(char *copiaS, const char *str){
    int i;
    for(i=0;str[i]!='\0';i++)
            copiaS[i]=str[i];
    copiaS[i]='\0';
}

int main(){
    char original[]="paralelo", copia[8];
    copy(&copia,&original);
    printf("%s", copia);
    return 0;
}
