#include <stdio.h>

int main(void)
{
 int var = 5;
 int *p = &var;

 printf("var의 주소 : %d\n", &var);
 printf("var의 값 : %d\n", var);
 printf("p의 주소 : %d\n", &p);
 printf("p의 값 : %d\n", p);
 printf("p가 가리키는 변수의 값(*p) : %d\n", *p);
 printf("*p의 주소 : %d\n", &*p); 

 p++;
 printf("p++ : %d\n", p);

 p--;
 p--;
 printf("p-- : %d\n", p);



 return 0;
}
