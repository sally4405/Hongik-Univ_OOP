// 9. 멤버 함수의 외부 정의

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;

public :
 CPoint(int a, int b);
 void Move(int a, int b); 
 void Print();
};

CPoint::CPoint(int a, int b) : x(a), y(b) {}

void CPoint::Move(int a, int b)
{
 x = x + a;
 y = y + b;
}

void CPoint::Print()
{
 cout << "(" << x << "," << y << ")" <<endl;
}

int main(void)
{
 CPoint P1(3,4);
 P1.Move(5,6);
 P1.Print();

 return 0;
}
