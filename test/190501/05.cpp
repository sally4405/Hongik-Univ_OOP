// 6장 복사 생성자
// 1. 객체의 생성과 대입

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;
public :
 CPoint(int a) : x(a), y(a) {}
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
 CPoint P1(3);
 CPoint P2 = CPoint(4);
 CPoint P3 = 5;
 CPoint P4 = P2;
 CPoint P5(P3);

 P1 = P2;

 P1.Print();
 P2.Print();
 P3.Print();
 P4.Print();
 P5.Print();
 

 return 0;
}
