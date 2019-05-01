#include <stdio.h>
int power(int x, int y)
{
 int i;
 int result = 1; //return 값이 result인데 y값이 0인 경우 for문이 돌지 않기 때문에 1로 초기값을 설정해줌

 for (i=0; i < y; i++)
  result *= x; //result = result*x라는 의미

 return result;
}

int main(void)
{
 int a = 2; int b = 3;
 int result = power(a, b);
 printf("%d^%d : %d\n", a, b, result);

 a = 3; b = 4;
 result = power(a, b);
 printf("%d^%d : %d\n", a, b, result);

 return 0;
} 
