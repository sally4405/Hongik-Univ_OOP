// 신소재공학과 4학년
// B519096 이세은

#include <iostream>
using namespace std;

class Complex {
public:
 Complex(float r = 0.0, float i = 0.0) : re(r), im(i) {}
 Complex operator+(const Complex &Co) {
  return Complex(re + Co.re, im + Co.im);
 }
 Complex operator-(const Complex &Co) {
  return Complex(re - Co.re, im - Co.im);
 }
 Complex operator*(const Complex &Co) {
  return Complex(re*Co.re - im*Co.im, im*re + re*Co.im);
 }
 Complex operator/(const Complex &Co) {
  return Complex((re*Co.re + im*Co.im)/(Co.re*Co.re + Co.im*Co.im),(im*Co.re - re*Co.im)/(Co.re*Co.re + Co.im*Co.im));
 }
 
 void Print() { 
  if(im >= 0) cout << re << " + " << im << "i\n"; 
  else cout << re << " - " << -im << "i\n"; 
 }
private:
 float re, im;
};

int main(void)
{
 Complex com1(1.0, 2.0), com2(3.0, 4.0);
 Complex com3, com4, com5, com6;

 com1.Print(); com2.Print();

 com3 = com1 + com2; com3.Print();
 com4 = com1 - com2; com4.Print();
 com5 = com1 * com2; com5.Print();
 com6 = com1 / com2; com6.Print();
}
