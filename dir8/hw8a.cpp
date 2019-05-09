// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;
class CPoint {
public:
 CPoint(float a = 0.0, float b = 0.0) : x(a), y(b) {}
 CPoint operator+(CPoint& P0) { return CPoint(x + P0.x, y + P0.y); }
 CPoint operator-() { return CPoint(-x, -y); }
private:
 float x, y;
friend ostream& operator<< (ostream&, const CPoint&);
};

ostream& operator<< (ostream& out, const CPoint& P0){
 out << "(" << P0.x << ", " << P0.y << ")" << endl;
 return out;
}

int main(void)
{
 CPoint P1(2.0 , 3.0), P2(5.0, 6.0);
 CPoint P3 = P1 + P2;
 CPoint P4 = -P1;
 cout << P1 << P2 << P3 << P4;
}
