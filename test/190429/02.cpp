// 5. 디폴트 매개변수의 사용

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x, y;

public :
 CPoint(int a = 0, int b = 0) : x(a), y(b) {}
 void Move(int a, int b = 0) { x += a; y += b; }
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};
