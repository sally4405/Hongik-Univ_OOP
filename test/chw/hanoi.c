#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to)
{
 if(n == 1)
  printf("원판 1을 %c에서 %c으로 옮긴다.\n",from,to);
 else {
  hanoi_tower(n-1,from,to,tmp);
  printf("원판 %d을 %c에서 %c으로 옮긴다.\n",n,from,to);
  hanoi_tower(n-1,tmp,from,to);
 }
}
// A,B,C 배열을 만들어서 원판 크기인 n을 순서대로 원소로 갖게 하고 출력
// 누적을 유지하려면 전역변수로?
// 높이를 맞추려면 1층을 기준으로 i-1 이런 식으로 해야할 듯
void print_star(int n, char from, char tmp, char to)
{
 int aryA[5];
 int aryB[5];
 int aryC[5];

 if(from == 'A') aryA.remove(n);
 else if(from = 'B') aryB.remove(n);
 else if(from = 'C') aryC.remove(n);

 if(to == 'A') aryA.append(n);
 else if
 else if

 for(int i = 4; i < 0; i--)
 {
  for(int j = 0; j < aryA[i]; j++)
   printf("*");
  printf("\t"); 
  for(int j = 0; j < aryB[i]; j++)
   printf("*");
  printf("\t"); 
  for(int j = 0; j < aryC[i]; j++)
   printf("*");
  printf("\n"); 
 }

}

int main(void)
{
 hanoi_tower(4, 'A', 'B', 'C');
 return 0;
}
