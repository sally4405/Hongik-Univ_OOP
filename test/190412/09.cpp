// 10. 멤버 함수의 인라인 함수 선언

#include <iostream>
using namespace std;

class CPoint {
private :
 int x;
 int y;

public :
 CPoint(int a, int b) : x(a), y(b){}
 inline void Print();
};

inline void CPoint::Print()
{
 cout << "(" << x << "," << y << ")" << endl;
}

int main(void)
{
 CPoint P1(3,4);
 P1.Print();

 return 0;
}
