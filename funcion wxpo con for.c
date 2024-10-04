#include <stdio.h>
#include <stdlib.h>

int exp_for(int a, int b)
{
  int res = 1;
  int i;

  for(i = 0; i < b; i ++){
    res = res * a;
  }

  return(res);
}

int exp_while(int a, int b)
{
  int res = 1;
  int i = 0;

  while(i < b){
    res = res * a;
    i = i + 1;
    }

  return(res);
}

int main ()
{
  int a, b, res;

  printf("dame la base: ");
  scanf("%d", &a);
  printf("dame el exponente: ");
  scanf("%d", &b);

  printf("\n Exponenciacion con for");
  res = exp_for(a, b);
  printf("El resultado es: %d\n", res);

  printf("\n Exponenciacion con while");
  res = exp_while(a, b);
  printf("El resultado es: %d\n", res);

  return 0;
}
