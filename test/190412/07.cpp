// 8. 멤버 초기화

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x;
 int y;
public : 
 CPoint(int a, int b) : y(b), x(a) {}
 void Print() {cout << "(" << x << ", " << y << ")" << endl;}
};

int main(void)
{
 CPoint P1(3,4);
 P1.Print();

 return 0;
}
