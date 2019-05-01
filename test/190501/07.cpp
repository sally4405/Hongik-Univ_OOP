// 2. 객체의 값에 의한 전달

#include <iostream>
using namespace std;

class CPoint {
private :
 int x, y;
public :
 CPoint(int a = 0, int b = 0) : x(a), y(b) {}
 void Print() { cout << "(" << x << ", " << y << ")" << endl; }
};

void ShowPoint(CPoint Po)
{
 Po.Print();
}

int main(void)
{
 CPoint P1(1,2);
 ShowPoint(P1);

 return 0;
}
