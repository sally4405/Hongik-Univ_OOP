// 6. 생성자와 소멸자의 호출순서

#include <iostream>
using namespace std;

class CPoint {
private :
 int x;
 int y;

public :
 CPoint(int a, int b) {x = a; y = b; cout << "생성자 : "; Print();}
 ~CPoint() {cout << "소멸자 : "; Print();}
 void Print() {cout << "(" << x << ", " << y << ")" << endl;}
};

CPoint P1(1,1);
CPoint P2(2,2);

int main(void)
{
 CPoint P3(3,3);
 CPoint P4(4,4);


 return 0;
}
