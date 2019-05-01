#include <stdio.h>
int main(void)
{
 int Num1, Num2;
 int Sum = 0;
 int i;

 printf("2개의 정수 입력 : "); // 출력 
 scanf("%d %d", &Num1, &Num2); // 입력 
 
 for (i = Num1; i<= Num2; i++)   // 제어문
  Sum += i;			// 연산자

 printf("%d부터 %d까지의 합 : %d\n", Num1, Num2, Sum);

 return 0;
}
