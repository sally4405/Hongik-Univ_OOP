#include <stdio.h>

int power(int x, int y)
{
 int i;
 int result = 1;

 for (i = 0; i < y; i++)
  result *= x;

 return result;
}


int main(void)
{
 int a = 2;
 int b = 3;
 int result = power(a,b);
 printf("%d^%d : %d\n", a,b,result);

 a = 3;
 b = 4;
 result = power(a,b);
 printf("%d^%d : %d\n", a,b,result);

 return 0;
}
