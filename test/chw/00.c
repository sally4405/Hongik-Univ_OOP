#include <stdio.h>

int cnt = 0;

int f1(void)
{
 printf("f1 : %d\n", cnt++);
 return cnt;
}

int f2(void)
{
 int cnt = 3;
 printf("f2 : %d\n", cnt++);
 return cnt;
}

int f3(void)
{
 printf("f2 : %d\n", cnt++);
 return cnt;
}

int main(void)
{
 int a = 3;
 int b = 5;
 double c = a + b;
/*
 printf("a = %f\n b = %f\n", a, c);
 printf("a = %f\n", a);
 printf("b = %f\n", b); 
 printf("c = %f\n", c);
*/

 //printf("a = %d \nb = %d \nc = %lf\n", a, b, c);
 
 //printf("result = %f\n", b/a + 1.5);

 printf("%d", f1());
 printf("%d", f2());
 printf("%d", f3()); 

 return 0;
}
