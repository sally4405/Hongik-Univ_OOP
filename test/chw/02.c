#include <stdio.h>

int main(void)
{
 int dan;
 int n = 0;
 int count = 0;

 while(true)
 {
 printf("한 줄에 몇단씩 출력할까요? : ");
 scanf("%d", &n);
 if (n >= 1 && n <= 4) break;
 }

 for(dan = 2; dan < 10; dan++)
 {
  for(int i = 1; i < 10; i++)
  {
   for(int j = 0; j < n; j++)
   {
    printf("%d x %d = %2d\t", dan, i, (dan*i));
    count++;
    dan++;
    if (dan == 10) break;
   }
   dan -= count;
   count = 0;
   printf("\n");
   }
  dan += (n - 1);
  printf("\n");
  }


 return 0;
}
