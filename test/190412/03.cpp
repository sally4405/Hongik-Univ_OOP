// 4. 객체의 생성과 생성자

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x;
 int y;

public :
// CPoint(int a, int b) { x = a; y = b;}
// CPoint(int a) { x = a; y = 0;}
 CPoint(int a, int b = 0) { x = a; y = b;}
 ~CPoint() { cout << "소멸자" << endl; }
 void Print() { cout << "(" << x << "," << y << ")" << endl;}
};

int main(void)
{
 CPoint P1 = CPoint(3,4);
 CPoint P2(5,6);
 CPoint P3(7);
 CPoint P4 = 6;

 P1.Print();
 P2.Print();
 P3.Print();
 P4.Print();


 return 0;
}
