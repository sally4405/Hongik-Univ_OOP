#include <stdio.h>


int main(void)
{
 int *b;
 int *c;
 printf("%p\n %d\n\n ", &b, &*b);
 printf("%p\n %d\n %d\n\n ", &c, c, &*c);
 printf("%p\n %d\n %p\n\n ", &c, c, &*c);
  

 return 0;

}
