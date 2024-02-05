/*Preencher um vetor X de 10 elementos com o número 1 se o índice do elemento for ímpar e com o número 0
 se o índice for par.Mostrar o vetor X.*/
 #include <stdio.h>

 void vetor(int a[], int n){
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        if(a[i]%2==1){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
 }

void exibir(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int vetorX[10];
    vetor(vetorX, 10);
    exibir(vetorX, 10);
    return 0;
}