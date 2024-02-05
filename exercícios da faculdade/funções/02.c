  #include <stdio.h>

  int maior(int a, int b){//função que retorna o maior numero
    if(a>b)
        return a;
    else
        return b;
  }

  int main(){
    int a, b;
    printf("digite dois numeros:\n\n");
    scanf("%d %d", &a, &b);
    printf("\nmaior eh %d\n", maior(a, b));
    return 0;
  }
