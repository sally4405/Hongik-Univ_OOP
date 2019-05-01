// 10. 지역 클래스 선언

#include <iostream>
using namespace std;

int main(void)
{
 class CPoint {
 private :
  int x, y;
 public :
  CPoint(int a, int b) : x(a), y(b) {}
  void Print(){cout << "(" << x << ", " << y << ")" << endl;}
 };

 CPoint P1(1,2);
 P1.Print();

 return 0;
}
