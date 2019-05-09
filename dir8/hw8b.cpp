// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

class Complex {
public:
 Complex(float r = 0.0, float i = 0.0) : re(r), im(i) {}
 Complex operator+(const Complex &right) {
  Complex tmp;
  tmp.re = re + right.re;
  tmp.im = im + right.im;
  return tmp;
 }
 Complex operator-() {
  Complex tmp;
  tmp.re = -re;
  tmp.im = -im;
  return tmp;
 }
 //void Print() { cout << re << " + " << im << "i\n"; }
private:
 float re, im;
friend ostream& operator<<(ostream&, const Complex&);
};
ostream& operator<<(ostream& out, const Complex& Co) {
 if(Co.im >= 0) out << Co.re << " + " << Co.im << "i" << endl;
 else out << Co.re << " - " << -Co.im << "i" << endl;
 return out;
}

int main(void)
{
 Complex com1(1.0, 2.0), com2(3.0, 4.0);
 Complex com3 = com1 + com2;
 Complex com4 = -com1;
 cout << com1 << com2 << com3 << com4;
}
