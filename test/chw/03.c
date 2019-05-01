#include <stdio.h>

int main(void)
{
 int s = 0;
 int star;
 int null;
 
 while(true)
 {
 printf("얼마나 큰 다이아몬드를 원하나요? : ");
 scanf("%d", &s);
 if (s >= 1 && s <= 10) break;
 }

 for(int i = 1; i < 2*s; i++) 
 {
  if(i <= s) 
  {
   star = 2*i - 1;
   null = s - i;
  }
  else 
  {
   star = 4*s - 2*i - 1;
   null = i - s;
  }
  for(int j = 0; j < null; j++)
   printf(" ");
  for(int k = 0; k < star; k++)
   printf("*");
  for(int m = 0; m < null; m++)
   printf(" ");
  printf("\n");
 }



 return 0;
}
