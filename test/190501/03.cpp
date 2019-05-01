// 12. const 멤버와 const 객체

#include <iostream>
using namespace std;

class CCircle {
private : 
 double Radius;
 const double PI;
public :
 CCircle(double r = 0) : Radius(r), PI(3.14) {}
 void SetRadius(double r) {Radius = r;}
 double GetArea() const { return (PI*Radius*Radius);}
};

int main(void)
{
 const CCircle Cir1(2);
 //Cir1.SetRadius(3);
 cout << "면적 : " << Cir1.GetArea() << endl;

 return 0;
}
