// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

class Complex {
private : 
 double x, y;
 static int count;

public : 
 Complex() : x(0.0), y(0.0) { count++; }
 Complex(double a, double b) : x(a), y(b) { count++; }
 ~Complex() { count--; }
 Complex Add(const Complex &Co) { return Complex(x + Co.x, y + Co.y); }
 Complex Mul(const Complex &Co) { return Complex(x*Co.x - y*Co.y, x*Co.y + y*Co.x); }
 void Print() { cout << "(" << x << ", " << y << ")";}
 static int GetCount() { return count; }
};

int Complex::count = 0;

int main()
{
 Complex com1(1.0, 2.0), com2(3.0,4.0);
 Complex com3;

 com1.Print(); cout << endl;
 com2.Print(); cout << endl;
 com3 = com1.Add(com2);
 com3.Print(); cout << endl;

 Complex *pcom4 = new Complex;
 *pcom4 = com1.Mul(com2); pcom4 -> Print(); cout << endl;
 cout << "#complex numbers = " << com1.GetCount() << endl;
 delete pcom4;
 cout << "#complex numbers = " << com1.GetCount() << endl;
} 
