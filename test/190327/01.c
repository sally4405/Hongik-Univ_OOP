#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int i, ary[10], *p;
 
 srand((unsigned)time(NULL));

 for (i = 0; i < 10; i++)
  ary[i] = rand();

 p = (int*)malloc(sizeof(int)*10);

 for (i = 0; i < 10; i++)
  p[i] = ary[i];

 printf("index\tary\tp\n");
 for (i = 0; i < 10; i++)
  printf("%d\t%d\t%d\n", i, ary[i], p[i]);

 free(p);

 return 0;
}
