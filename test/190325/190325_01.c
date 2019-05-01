#include <stdio.h>

int main(void)
{
 int Ary[5][5];
 int i, j;
 
 for (i = 0; i < 5; i++) {
  for (j = 0; j < 5; j++) {
   if (i >= j)
    Ary[i][j] = i + 1;
   else 
    Ary[i][j] = 0;
   printf("%d ", Ary[i][j]);
  }
  printf("\n");
 }




 return 0;
}
