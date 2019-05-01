// 3. 복사 생성자

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;
public :
 CPoint(const CPoint &Po) { x = Po.x; y = Po.y; }
 CPoint(const CPoint &Po, int a) { x = Po.x * a; y = Po.y * a; }
 CPoint(int a = 0, int b = 0) : x(a), y(b) {}
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

int main(void)
{
 CPoint P1(1,2);
 CPoint P2(P1);
 CPoint P3(P1,3);

 P1.Print();
 P2.Print();
 P3.Print();

 return 0;
}
