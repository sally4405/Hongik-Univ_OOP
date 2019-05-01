// 3. this 포인터

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x, y;

public : 
 CPoint(int a, int b) : x(a),y(b){}
 void Move(int a, int b) {this->x+=a; this->y+=b;}
 void Print() {cout << "(" << this->x << ", " << this->y << ")" << endl;}
};

int main(void)
{
 CPoint P1(1,2);
 CPoint P2(3,4);

 P1.Move(1,1);
 P2.Move(2,2);

 P1.Print();
 P2.Print();

 return 0;
}
