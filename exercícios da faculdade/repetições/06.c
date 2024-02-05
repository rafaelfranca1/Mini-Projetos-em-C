#include <stdio.h>

int main(){
    int A, B, i;

    do{
        printf("\ndigite um par de numeros inteiros: \n");
        scanf("%d %d", &A, &B);
        if(A<B){
            for(i=A;i<B;i = i +1){
                printf("%d ", i);
            }
            printf("%d", B);
        }
        else{
            for(i=B;i<A;i = i +1){
                printf("%d ", i);
            }
            printf("%d", A);
        }
        
    }while(A!=0||B!=0);
    return 0;
}