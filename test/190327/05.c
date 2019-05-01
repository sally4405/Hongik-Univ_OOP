// 6. const와 포인터

#include <stdio.h>

int main(void)
{
 int var1 = 1;
 int var2 = 2;

 const int *p1;
 //int * const p2;
 int * const p2 = &var1;

 p1 = &var1;
 p1 = &var2;
 //*p1 = 5;
 var2 = 4;

 *p2 = 3;
 //p2 = &var2;
 
 printf("var1 : %d\n", var1);
 printf("var2 : %d\n", var2);


 return 0;
}
