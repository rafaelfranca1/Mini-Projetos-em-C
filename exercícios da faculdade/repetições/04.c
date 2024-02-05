#include <stdio.h>

int main(){
    int x, y, z, n, i;
    x = 2;
    y = 7;
    z = 3;

    printf("digite o numero de termos: ");
    scanf("%d", &n);

    for(i=1;i<=n;i=i+1){
        printf("%d %d %d ", x, y, z);
        x = x * 2;
        y = y * 3;
        z = z * 4;
    }
    return 0;
}
