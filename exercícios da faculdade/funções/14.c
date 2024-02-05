#include <stdio.h>

int centena(int a){
    int num=(a/100)%10;
    return num;
}

int main(){
    int n;
    do{
        scanf("%d", &n);
        printf("%d\n", centena(n));
    }while(n!=0);
    return 0;
}