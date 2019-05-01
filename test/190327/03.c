#include <stdio.h>

void swap(int x, int y)
{
 int temp = x;
 x = y;
 y = temp;
}

void swap2(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}

int main(void)
{
 int a = 2;
 int b = 3;
 
 printf("a : %d, b : %d\n", a,b);

 swap(a,b);

 printf("a : %d, b : %d\n", a,b);

 swap2(&a,&b);

 printf("a : %d, b : %d\n", a,b);

 return 0;
}
