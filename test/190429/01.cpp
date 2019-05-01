// 4. 멤버함수 오버로딩

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;

public :
 CPoint() : x(0), y(0) {}
 CPoint(int a, int b) : x(a), y(b) {}
 void Move(int a) { x += a; }
 void Move(int a, int b) { x += a; y += b;}
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
 CPoint P1(1,2);
 P1.Move(3);
 P1.Move(4,5);
 
 P1.Print();

 return 0;
}
