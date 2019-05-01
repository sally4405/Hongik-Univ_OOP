// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x;
 int y;

public : 
 CPoint(int a, int b) { x = a; y = b; cout << "construct1: "; Print(); }
 CPoint(int a) { x = a; y = 0; cout << "construct2: "; Print(); }
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
 ~CPoint() { cout << "destructor: "; Print(); }
};


int main(void)
{
 CPoint P1(3,4);
 CPoint P2(5);
 CPoint P3 = 6;

 P1.Print();
 P2.Print();
 P3.Print();

 return 0;
}

//  (a) 생성자 오버로딩이 가능하기 때문에
//
// <출력>
// construct1: (3, 4)
// construct2: (5, 0)
// construct2: (6, 0)
// (3, 4)
// (5, 0)
// (6, 0)
// destructor: (6, 0)
// destructor: (5, 0)
// destructor: (3, 4)
