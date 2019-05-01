#include <stdio.h>

void week();
void calendar(int year, int month, int *startDay);
//void startDAY();

int main(void)
{
 int startDay = 2;
 for(int i = 1; i <= 12; i++)
 {
 // week();
  calendar(2019, i, &startDay);
  printf("\n");
 // startDay = calendar.getEndDay + 1;
 }
//start day를 따로 함수를 만들던지 메인에서 계산해서 캘린더 함수에 변수값으로 주던지
 return 0;
}
 
void week()
{
 printf("=====================\n");
 printf(" 일 월 화 수 목 금 토\n");
 printf("=====================\n");
}

void calendar(int year, int month, int *startDay)
{
 int result;
 result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

 int day, date; 
 //int startDay = 2;

 if(month == 2) 
 {
  if(result == 1) date = 29;	//윤년인 경우
  else date = 28;
 }
 else if((month == 4) || (month == 6) || (month == 9) || (month == 11)) 
  date = 30;
 else date = 31;
 
 printf("====\n");
 printf("%d 월\n", month);
 week();

 for (day = 0; day < *startDay; day++)
  printf("   ");

 for (int i = 1; i <= date; i++)
 {
  if(day == 7)
  {
   day = 0;
   printf("\n");
  }
  day++;
  printf("%3d", i);
 }
 printf("\n======================\n");

 if(day == 7)
 {
  day = 0;
 }
  *startDay = day;
// int getEndDay() {return day;};
// return day;
}





