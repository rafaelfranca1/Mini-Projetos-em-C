#include <stdio.h>

int maior(int a, int b, int c)//retorna o maior valor de tres
{
  if (a > b && a > c)
    return a;
  else if (b > a && b > c)
    return b;
  else
    return c;
}

int main()
{

  int a, b, c;

  printf("digite dois numeros:\n\n");
  scanf("%d %d %d", &a, &b, &c);

  printf("\nmaior eh %d\n", maior(a, b, c));

  return 0;
}
