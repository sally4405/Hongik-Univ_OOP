//함수 : 매개변수 전달 방식 - 배열의 전달

#include <stdio.h>

void setArray(int *ary, int count)
{
 int i;
 
 for (i = 0; i < count; i++)
  ary[i] = i * i;
}


int main(void)
{
 int i;
 int Ary[5];

 setArray(Ary, 5);

 for (i = 0; i < 5; i++)
  printf("%d : %d\n", i, Ary[i]);

 return 0;
}
