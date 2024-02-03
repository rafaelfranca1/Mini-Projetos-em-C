#include <stdio.h>

int main(){
        int n, i, peso, gordo, magro, maisgordo = -1, maismagro = 100000000;

        printf("digite a quantidade de bois: ");
        scanf("%d", &n);

        for(i=1;i<=n;i=i+1){
            printf("digite o peso do boi %d: ", i);
            scanf("%d", &peso);


            if(peso>maisgordo){
                maisgordo=peso;
                gordo = i;
            }

            if(peso<maismagro){
                maismagro=peso;
                magro = i;
            }
        }

        printf("o boi mais gordo eh %d\n", gordo);
        printf("o boi mais magro eh %d\n", magro);

        return 0;
}