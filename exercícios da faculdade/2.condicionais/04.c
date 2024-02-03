#include <stdio.h>

int main()
{
    int n1, n2, n3, _1n, _2n, _3n;

    printf("digite tres numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1==n2||n1==n3||n2==n3){
        printf("error");

        return 0;
    }

    if(n1<n2&&n1<n3){
        _1n = n1;
    }
    else{
        if(n2<n1&&n2<n3)
            _1n = n2;
        else
            _1n = n3;
    }

    if((n1>n2&&n1<n3)||(n1>n3&&n1<n2)){
        _2n = n1;
    }
    else{
        if((n2>n1&&n2<n3)||(n2>n3&&n2<n1))
            _2n = n2;
        else
            _2n = n3;
    }

    if(n1>n2&&n1>n3){
        _3n = n1;
    }
    else{
        if(n2>n1&&n2>n3)
            _3n = n2;
        else
            _3n = n3;
    }

    printf("%d %d %d", _1n, _2n, _3n);

    return 0;
}