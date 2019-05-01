// 2. 객체 포인터

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x, y;

public : 
 CPoint() : x(0), y(0) {}
 CPoint(int a) : x(a), y(a) {}
 CPoint(int a, int b) : x(a), y(b) {}
 void SetXY(int a, int b) {x=a,y=b;}
 void Print() {cout << "(" << x << ", " << y << ")" << endl;}
};


int main(void)
{
 CPoint *ptr;
 int i;

 ptr = new CPoint;
 ptr -> Print();
 delete ptr;

 ptr = new CPoint();
 ptr -> Print();
 delete ptr;
 
 ptr = new CPoint(1);
 ptr -> Print();
 delete ptr;
 
 ptr = new CPoint(2,3);
 ptr -> Print();
 delete ptr;

 cout << endl;
/////////////////////////

 ptr = new CPoint[5];

 for (i = 0; i < 5; i++)
  ptr[i].SetXY(i,i);

 for (i = 0; i < 5; i++)
  ptr[i].Print();

 delete [] ptr;

return 0;
}


