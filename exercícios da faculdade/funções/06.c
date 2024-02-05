#include <stdio.h>

int Triangulo(int a, int b, int c){
    if(a==b&&b==c){
        printf("equilatero");
        return 0;
    }
    else if(a!=b&&a!=c&&b!=c){
        printf("escaleno");
        return 1;
    }
    else{
        printf("isoceles");
        return 2;
    }
    
}

int main(){
    int n1, n2, n3;
    printf("digite tres numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    Triangulo(n1,n2,n3);
    return 0;
}