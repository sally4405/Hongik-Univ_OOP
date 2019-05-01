// 3. this 포인터

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;

public : 
 CPoint(int a, int b) : x(a), y(b) {}
 CPoint *MoveX(int a) { x += a; return this; }
 CPoint *MoveY(int b) { y += b; return this; }
 void Print() {cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
 CPoint P1(1,2);
 P1.MoveX(3) -> MoveY(4);
 P1.Print();
 
 return 0;
}
