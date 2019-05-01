// 9. 내포 클래스 선언

#include <iostream>
using namespace std;

class CCircle {
public :
 class CPoint {
 private :
  int x;
  int y;
 public : 
  CPoint(int a = 0, int b = 0) : x(a), y(b) {}
  void Move(int a, int b);
  void Print();
 };

private : 
 CPoint Center;
 double Radius;

public :
 CCircle(int a, int b, double r) : Radius(r) { Center.Move(a,b); }
 void Print() {
  Center.Print();
  cout << "반지름 : " << Radius << endl;
 }
};

void CCircle::CPoint::Move(int a,int b)
{ 
 x += a;
 y += b;
}

void CCircle::CPoint::Print(void)
{
 cout << "중심 : (" << x << ", " << y << ")" << endl;
}

int main(void)
{
 CCircle cir(3,4,5.0);
 cir.Print();
 
 CCircle::CPoint P2(100,200);
 P2.Print();

 return 0;
}



