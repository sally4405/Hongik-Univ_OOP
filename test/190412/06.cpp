// 7. 디폴트 생성자와 디폴트 소멸자

#include <iostream>
using namespace std;

class CPoint {
private : 
 int x, y;

public : 
 void SetXY(int a, int b) { x = a; y = b; }
 void Print() { cout << "(" << x << ", " << y << ")" << endl;}
};

int main(void)
{
 CPoint P1;
 P1.SetXY(3,4);
 P1.Print();

 return 0;
}
