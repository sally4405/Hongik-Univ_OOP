// 3. 구조체와 클래스

#include <iostream>
using namespace std;

struct Point {
private :
 int x;
 int y;

public :
 void SetXY(int a, int b) {x = a; y = b;}
 void Print() { cout << "(" << x << "," << y << ")" << endl;}
};

int main(void)
{
/*
 Point P1;
 P1.x = 3;
 P1.y = 4;
 cout << P1.x << " " << P1.y << endl;
*/
 Point P2;
 P2.SetXY(5,6);
 P2.Print();

 return 0;
}
