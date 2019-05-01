#include <stdio.h>

void swap(int *x, int *y)
{
 printf("x = %d, *x = %d\ny =  %d, *y = %d\n", x, *x, y, *y);
 int temp = *x;
 *x = *y;
 *y = temp;
}

int main(void)
{
 int a = 2;
 int b= 3;

 printf("a : %d, b : %d\n", a,b);
 
 swap(&a, &b);

 printf("a : %d, b : %d\n", a,b);

 return 0;
}
