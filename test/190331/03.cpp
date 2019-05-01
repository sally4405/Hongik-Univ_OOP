// 4. 디폴트 매개변수

#include <iostream>
using namespace std;
/*
int power(int x)
{
 return (x*x);
}
*/
int power(int x, int y = 2)
{
 int i;
 int result = 1;
 
 for ( i = 0; i < y; i++)
  result *= x;

 return result;
}

int main(void)
{
 cout << power(3) << endl;
 cout << power(3,3) << endl;
 

 return 0;
}
