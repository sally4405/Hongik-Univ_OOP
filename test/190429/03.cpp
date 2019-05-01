// 6. friend 전역 함수

#include <iostream>
using namespace std;

class CPoint {
private :
 int x,y;

public : 
 CPoint(int a = 0, int b = 0) : x(a), y(b) {}
 friend void Center(CPoint P1, CPoint P2); 
};

void Center(CPoint P1, CPoint P2)
{
 CPoint P;
 P.x = (P1.x + P2.x) / 2;
 P.y = (P1.y + P2.y) / 2;
 cout << "중심 : " << "(" << P.x << ", " << P.y << ")"  << endl;
}

int main(void)
{
 CPoint P1(1,2), P2(3,4);
 Center(P1, P2);

 return 0;
}
