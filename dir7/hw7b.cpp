// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

class Complex {
public:
 Complex(float r = 0.0, float i = 0.0) : re(r), im(i) {}
 Complex operator+(const Complex &right) {
  return Complex(re + right.re, im + right.im);
 }
 void Print() { cout << re << " + " << im << "i\n"; }
private:
 float re, im;
};

int main(void)
{
 Complex com1(1.0, 2.0), com2(3.0, 4.0);
 Complex com3;
 com1.Print();
 com2.Print();
 com3 = com1 + com2;
 com3.Print();
}
